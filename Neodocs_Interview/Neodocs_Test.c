#include "MK64F12.h"

#define LED_PIN 22
#define LED_PORT PORTB
#define LED_GPIO GPIOB

#define BUTTON_PIN 23
#define BUTTON_PORT PORTB
#define BUTTON_GPIO GPIOB

#define UART_BAUDRATE 9600
#define UART0_TX_PIN 17
#define UART0_RX_PIN 16

void init_LED(void);
void init_Button(void);
void init_UART(void);
void UART_SendString(const char *str);
void delay_us(uint32_t us);
void PORTB_IRQHandler(void);

int main(void)
{
    init_LED();
    init_Button();
    init_UART();

    while (1)
    {
        GPIO_SetPinsOutput(LED_GPIO, 1U << LED_PIN);
        delay_us(500);
        GPIO_ClearPinsOutput(LED_GPIO, 1U << LED_PIN);
        delay_us(500);
    }
}

void init_LED(void)
{
    SIM->SCGC5 |= SIM_SCGC5_PORTB_MASK;
    LED_PORT->PCR[LED_PIN] = PORT_PCR_MUX(1);
    LED_GPIO->PDDR |= (1U << LED_PIN);
}

void init_Button(void)
{
    SIM->SCGC5 |= SIM_SCGC5_PORTB_MASK;

    BUTTON_PORT->PCR[BUTTON_PIN] = PORT_PCR_MUX(1) | PORT_PCR_PE_MASK | PORT_PCR_PS(0);
    BUTTON_GPIO->PDDR &= ~(1U << BUTTON_PIN);
    BUTTON_PORT->PCR[BUTTON_PIN] |= PORT_PCR_IRQC(0x09);
    NVIC_EnableIRQ(PORTB_IRQn);
}

void init_UART(void)
{
    SIM->SCGC4 |= SIM_SCGC4_UART0_MASK;
    SIM->SCGC5 |= SIM_SCGC5_PORTB_MASK;

    PORTB->PCR[UART0_RX_PIN] = PORT_PCR_MUX(3);
    PORTB->PCR[UART0_TX_PIN] = PORT_PCR_MUX(3);

    uint16_t sbr = (uint16_t)((SystemCoreClock) / (UART_BAUDRATE * 16));
    UART0->BDH = UART_BDH_SBR(sbr >> 8);
    UART0->BDL = UART_BDL_SBR(sbr);
    UART0->C2 |= (UART_C2_TE_MASK | UART_C2_RE_MASK);
}

void UART_SendString(const char *str)
{
    while (*str)
    {
        while (!(UART0->S1 & UART_S1_TDRE_MASK))
            ;
        UART0->D = *str++;
    }
}

void delay_us(uint32_t us)
{
    uint32_t count = us * 40;
    while (count--)
        __NOP();
}

void PORTB_IRQHandler(void)
{
    if (PORTB->ISFR & (1U << BUTTON_PIN))
    {
        UART_SendString("Button 51 Pressed\r\n");
        PORTB->ISFR |= (1U << BUTTON_PIN);
    }
}
