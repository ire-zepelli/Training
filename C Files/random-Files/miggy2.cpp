#include <stdio.h>

int main(){

int input, choice;

do{
printf("Enter a positive integer: ");
scanf("%d",&input);
}while(input <= 0);

do{
printf("\n----Menu----\n1.Even\n2.Odd\n3.Prime\n4.Exit\n");
scanf("%d",&choice);

switch(choice){

case 1: //even
    for(int i = 2; i <= input; i +=2){
        printf("%d ",i);
    }
    break;
case 2: //odd
    
    for(int i = 1; i <= input; i +=2){
        printf("%d ",i);
 
}
break;
case 3: //prime
    for(int i = 2; i <=input ; i++){
        int prime = 1;
        for (int j = 2; j<i; j++){
            if(i%j==0)
            prime = 0;
            break;
        }
        if (prime)
        {
            printf("%d, ", i);
        }
     
    }
    break;
    case 4:
    printf("Exiting Program...");
    break;
    default:
    printf("Invalid\n");
    break;
}
}while(choice!=4);
}