#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
int main(){
    pid_t pid;
    pid = fork();
    fork();
    fork();
    if (pid == 0){
        puts("Child\n");
    }
    else{
        puts("Parent\n");
    }

    return 0;
}