#include <stdio.h>
#define true  1
#define false 0



void menu();
void calculate(_Bool exit, long x, long y);
int get_choice(void);
void add(long x, long y);
void subtract(long x, long y);
void multiply(long x, long y);
void divide(long x, long y);

int main(void)
{
  _Bool exit = true;
  long x, y;
  printf("Enter 1st number: ");
  scanf("%d", &x);
  printf("Enter 2nd number: ");
  scanf("%d", &y);

  //Menu
  menu();
  //takes choice and calculates the 2 numbers
  calculate(exit, x ,y);
}








void menu()
{
  printf("---- Menu ----\n");
  printf("1 ---> Addition\n");
  printf("2 ---> Subraction\n");
  printf("3 ---> Multiplication\n");
  printf("4 ---> Division\n");
  printf("5 ---> Exit\n");
}

int get_choice(void)
{
  int n;
  do{
  scanf("%d", &n);
  }while(n > 5);
  return n;
}


void add(long x, long y)
{
  long sum = x + y;
  printf("The sum of both numbers are %li", sum);
}


void subtract(long x, long y)
{
  long difference = x - y;
  printf("The difference of both numbers are %li", difference);
}


void multiply(long x, long y)
{
  long product = x * y;
  printf("The product of both numbers are %li", product);
}


void divide(long x, long y)
{
  double quotient = (double) x / (double) y;
  printf("The quotient of both numbers are %.2f", quotient);
}

void calculate(_Bool exit, long x, long y){
    while(exit == true)
  {
  int choice = get_choice();
  switch(choice)
    {
    case 1: //add
        add(x,y);
        printf("\n");
        break;
    case 2: //subtract
        subtract(x,y);
        printf("\n");
        break;
    case 3: //multipy
        multiply(x,y);
        printf("\n");
        break;
    case 4: //divide
        divide(x,y);
        printf("\n");
        break;
    case 5: //exit program
        printf("Stopping Program...\n");
        exit = false;
        break;
    default:
        printf("Invalid Input");
        printf("\n");
        break;
    }
  }
}