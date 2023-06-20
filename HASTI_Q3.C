// write C program to find the third angle of triangle if two other angels are given.

#include<stdio.h>
#include<conio.h>

void main(){
int first_angle=65;
int second_angle=45;
int third_angle;
clrscr();
third_angle=180-(first_angle+second_angle);//operator precedence
printf("%d",third_angle);
getch();
}