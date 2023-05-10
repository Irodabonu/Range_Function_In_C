#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* my_range(int first, int second){
    int ind = 0;
    int* array = (int*)malloc(sizeof(int)*second);
    for(int i = first; i < second; i++){
        array[ind++] = i;
    }
    return array;
}

int main(){
    int h , w;
    printf("You are Welcome to range of two numbers function\n");
    printf("Enter first number\n");
    scanf("%d", &h);
    printf("Enter second number\n");
    scanf("%d", &w);
    int him = w - h;
    int* num = my_range(h, w);
    char* s = "WELL DONE";
    printf("%s\n", s);
    char* t = "IN PROCESSION ................";
    char* u = "COUNT OVER\nTHANK YOU FOR TESTING :))";
    for(int i = 0; t[i]; i++){
        printf("%c", t[i]);
        sleep(1);
    }
    printf("\n");
    for(int k = 0; k < him; k++){
        printf("%d\n", num[k]);
    }
    for(int i = 0; u[i]; i++){
        printf("%c", u[i]);
        sleep(1);
    }
    return 0;
}
