#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
int main()
{
    pid_t pid;
    /* fork a child process */
    pid = fork();
    if (pid < 0)
    { /* error occurred */
        fprintf(stderr, "Fork Failed");
        return 1;
    }
    else if (pid == 0)
    { /* child process */
        execlp("/bin/ls", "ls", NULL);
        printf("I'm inside child");
    }
    else
    { /* parent process */
        /* parent will wait for the child to complete */
        printf("I'm inside the parent");
        wait(NULL);
        printf("Child Complete");
    }
    return 0;
}