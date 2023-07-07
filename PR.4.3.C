//Write a program to print the below patter using nested for loop.

#include<stdio.h>
#include<conio.h>

void main(){

int p,q,r;

clrscr();

for(p=5;p>=1;p--)
{
for(r=1;r<=p;r++)
{
   printf(" ");}
for(q=p;q<=5;q++){

   printf("%d",q);}
   printf("\n");}


getch();
}