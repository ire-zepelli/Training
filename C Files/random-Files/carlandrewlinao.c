#include <stdio.h>

int convertToBinary(int decimal);
int reverse(int binary);
int power(int i);
int count(int binary);
int isPalindrome(int binary, int reversedBinary);

int main(void)
{
  int decimal, binary, reversedBinary;

  printf("Enter your number: ");
  scanf("%d", &decimal);

  binary = convertToBinary(decimal);
  printf("The value of your soul is %d.\n", binary);

  reversedBinary = reverse(binary);
  if (isPalindrome(binary, reversedBinary))
  {
    printf("You are worthy my child.");
  }
  else
  {
    printf("Ahh, you are filty. Be gone.");
  }
}

int isPalindrome(int original, int reversedBinary)
{
  if (original == reversedBinary)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

int reverse(int binary)
{
  int reversed = 0, curr;
  int counter = count(binary);

  for (int i = counter; binary > 0; i--)
  {
    curr = binary % 2;
    reversed += curr * power(i - 1);
    binary /= 10;
  } 

  return reversed;
}

int power(int i)
{
  int raised = 1;

  for (int j = 1; j <= i; j++)
  {
    raised *= 10;
  }

  return raised;
}

int count(int binary)
{
  int count = 0, curr;

  for (int base = 1; binary > 0; base *= 10)
  {
    count++;
    binary /= 10;
  }
  return count;
}

int convertToBinary(int decimal)
{
  int curr, binary = 0;

  for (int base = 1; decimal > 0; base *= 10)
  {
    curr = decimal % 2;
    binary += curr * base;
    decimal /= 2;
  }

  return binary;
}