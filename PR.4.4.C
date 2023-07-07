//Write a program to print the below pattern using nested for loop.

#include<stdio.h>
#include<conio.h>

void main(){

int x,y,z;

clrscr();

for(x=1;x<=5;x++)
{
for(z=1;z<=x;z++)
{
    printf(" ");}
for(y=5;y>=x;y--)
{
    printf("%d",y%2);}
    printf("\n");}

getch();
}