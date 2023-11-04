#include <stdio.h>
#include <string.h>
#define MAX 100

int main(void){
    char string[MAX];
    printf("Input any string: ");
    scanf("%s", string);

    printf(" The reversed string is: %s\n\n", reverse(string));
}

char* reverse(string){
    static int i=0;
    static char revst[MAX];

    if(strlen(string)){
        reverse(string+1)
    }
}