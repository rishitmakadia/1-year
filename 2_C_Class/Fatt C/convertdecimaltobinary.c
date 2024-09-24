// convert decimal to binary

#include <stdio.h>
#include <math.h>

// function prototype
long long convert(int);
int main() 
{  
  int n;
  long long int bin;
  printf("Enter a decimal number: ");
  scanf("%d", &n);
  bin = convert(n);
  printf("%d in decimal =  %lld in binary", n, bin);
  return 0;
}

// function to convert decimal to binary
long long convert(int n) 
{
  long long bin = 0;
  int rem, i = 1;
  while (n != 0) 
  {
    rem = n % 2;
    n = n/ 2;
    bin = bin + (rem * i);
    i = i*10;
  }
  return bin;
}