//Write a program to print the below pattern using nested for loop.

#include<stdio.h>
#include<conio.h>

void main(){

int a,b;

clrscr();

for(a=41;a<=45;a++)
{
for(b=41;b<=a;b++)
{
   printf("%d",b);}
   printf("\n");}
getch();
}