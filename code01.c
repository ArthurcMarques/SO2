#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

int g = 1000;

int main () {

    int n = 100;
    int* h = malloc(sizeof(int));
    *h = 300;

    pid_t pid = fork();

    if (pid < 0){
        printf("ERRO");
    }
    else if (pid == 0) {
        g+=50;
        n++;
        *h+=5;
        printf("%p-%p-%p", &g, &n, &h);
        printf("%d-%d-%d", g, n, *h);
    }else {
        printf("%p-%p-%p", &g, &n, &h); 
        printf("%d-%d-%d", g, n, *h);
    }


    return 0;
}

