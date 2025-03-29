#include <stdio.h>

int readFile(char data[50], FILE *fileptr)
{
    if (fileptr == NULL)
        printf("file not exists.");

    else
    {
        while (fgets(data, 50, fileptr))
            printf("%s", data);

        fclose(fileptr);
    }
    return 0;
}

int writeFile(FILE *fileptr)
{
    if (fileptr == NULL)
    {
        printf("file not exists.\n");
        return 1;
    }
    else
    {
        fprintf(fileptr, "\nthis is another text added.");
        fclose(fileptr);
    }
    return 0;
}

int main()

{
    char data[50];
    FILE *fileptr;

    // ----------------------writing in a file-----------------------
    fileptr = fopen("6_sample.txt", "a");
    if (writeFile(fileptr))
        return 1;

    // ----------------------reading a file-----------------------
    fileptr = fopen("6_sample.txt", "r");
    readFile(data, fileptr);

    return 0;
}

/*

**1. strace:**
- **Purpose:** Traces system calls made by a program.
- **Usage:** Used for debugging and examining the interaction between a process and the operating system.
- **Output:** Shows system calls, their arguments, and return values.
- **Example Command:** `strace ./myprogram`

**2. ltrace:**
- **Purpose:** Traces library (dynamic) function calls made by a program.
- **Usage:** Useful for debugging and understanding the use of shared libraries.
- **Output:** Shows library functions called, their arguments, and return values.
- **Example Command:** `ltrace ./myprogram`

**3. System Calls vs. Function Calls:**
- **System Calls:**
  - **Definition:** Requests by a program to the operating system to perform low-level services, like file manipulation or process management.
  - **Examples:** `read()`, `write()`, `open()`, `close()`.
  - **Execution:** Involves a context switch from user mode to kernel mode, which can be relatively slow.
  - **Purpose:** Direct interaction with the operating system to perform hardware-level operations.

- **Function Calls:**
  - **Definition:** Calls to functions within the program or shared libraries that execute code to perform tasks.
  - **Examples:** `printf()`, `malloc()`, `strlen()`.
  - **Execution:** Executes entirely in user mode, making it faster compared to system calls.
  - **Purpose:** General programming tasks, computations, and abstracting complex functionality.

*/