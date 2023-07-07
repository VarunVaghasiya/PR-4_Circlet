//Write a program to print the below pattern using nested for loop.

#include<stdio.h>
#include<conio.h>

void main(){

int h,e,r,b,s;

clrscr();

for(h=1;h<=5;h++)
{
for(e=1;e<=h;e++)
{
    printf("%d",e);}
for(r=4;r>=h;r--)
{
    printf(" ");}
for(b=4;b>=h;b--)
{
    printf(" ");}
for(s=h;s>=1;s--)
{
    printf("%d",s);}
    printf("\n");}

getch();
}