/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int a,b;
  float avg=0.0;
  printf("enter marks 1 :");
  scanf("%d",&a);
  printf("enter marks 2:");
  scanf("%d",&b);

  avg = (a+b)/2.0;
  printf("average is : %.2f",avg);
  return 0;
}

