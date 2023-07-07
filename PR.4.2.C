//Write a program to print the below pattern using nested for loop.

#include<stdio.h>
#include<conio.h>

void main(){

int v,a,r=11;

clrscr();

for(v=1;v<=5;v++)
{
for(a=1;a<=v;a++)
{
    printf("%d",r++);}

    printf("\n");}


getch();
}