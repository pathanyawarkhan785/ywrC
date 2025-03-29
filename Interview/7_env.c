#include <stdio.h>
#include <stdlib.h>

extern char **environ;

int main(int argc, char **argv, char **envp)

{
    char *val;

    // getting value

    val = getenv("pass");
    // printf("pass: %s\n", val);  not setted so, output NULL

    // setting a new value

    // method 1
    // putenv("pass=123");

    // method 2
    // setenv is safer because it copies the provided strings, whereas putenv inserts the string directly into the environment.
    setenv("pass", "123", 1);

    // retrive new value
    val = getenv("pass");
    printf("pass: %s\n", val);

    // print all environment variable

    int i = 0;
    while (envp[i] != NULL)
    {
        printf("%s\n", envp[i]);
        i++;
    }

    return 0;
}
