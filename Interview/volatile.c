#include <stdio.h>
#include <stdbool.h>

// Simulation of a hardware register
volatile bool hardware_flag = false;

// Function to simulate an interrupt service routine
void interrupt_service_routine()
{
    // Change the flag status
    hardware_flag = true;
}

int main()
{
    // Simulate enabling interrupts and waiting for the flag to be set
    printf("Waiting for the hardware flag to be set...\n");

    while (!hardware_flag)
    {
        // Busy-wait loop, waiting for the flag to be set
    }

    printf("Hardware flag is set!\n");

    return 0;
}

// In this example, we simulate a hardware register using the volatile keyword for the hardware_flag variable. This variable is expected to be modified by an external source, such as an interrupt service routine (interrupt_service_routine() function). In the main() function, we wait in a busy loop until the hardware_flag is set to true.

// By using volatile, we inform the compiler that the value of hardware_flag can change at any time, and it should not optimize out the read operation in the while loop. This ensures that the program behaves as expected when the interrupt service routine modifies the flag.
