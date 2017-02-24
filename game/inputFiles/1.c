/*
Write a C Program which prompts the user to enter 4 integers. It should then sum the
integers and multiply the integers, storing the results in suitable variables. The program
should print each integer value (including the results) and the memory address where each
integer is stored. The program should also include a function which squares each of the 4
integers using pass by reference.
*/
#include<stdio.h>
int main(void)
{
  int a,b,c,d,sum,product;
  printf("enter 4 integers");
  scanf("%d %d %d %d",a,b,c,d);
  printf("the 4 numbers are a=%d address=%d ",a,&a); 
}