#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

#define MAX_INPUT_SIZE 1024

int main() {
    char input[MAX_INPUT_SIZE];
    pid_t pid;

    while (1) {
/*Display the prompt*/
        printf("$ ");
        fflush(stdout);
 /* Read a line of input*/
        if (fgets(input, sizeof(input), stdin) == NULL) {
            if (feof(stdin)) {
                /*Handle Ctrl+D (EOF)*/
                printf("\nShell terminated.\n");
                break;
            } else {
                perror("Error reading input");
                exit(EXIT_FAILURE);
            }
        }

        /*Remove the trailing newline character*/
        input[strcspn(input, "\n")] = '\0';

        /*Fork a child process*/
        pid = fork();

        if (pid == -1) {
            perror("Fork failed");
            exit(EXIT_FAILURE);
        } else if (pid == 0) {
         
            if (execlp(input, input, NULL) == -1) {
              
                perror("Command not found");
                exit(EXIT_FAILURE);
            }
            exit(EXIT_FAILURE);
 } else {
            int status;
            waitpid(pid, &status, 0);

            if (WIFEXITED(status)) {
                int exit_status = WEXITSTATUS(status);
                printf("Exit status: %d\n", exit_status);
            } else if (WIFSIGNALED(status)) {
                int signal_number = WTERMSIG(status);
                printf("Terminated by signal: %d\n", signal_number);
            }
        }
    }

    return 0;
}
