#include<stdio.h>
#include<conio.h>
void main()
{
int no1,no2,o1,o2,o3,o4,o5;
clrscr();
printf("Enter the no1:");
scanf("%d",&no1);
printf("Enter the no2:");
scanf("%d",&no2);
o1=no1+no2;
printf("\nsum of the values are:%d",o1);
o2=no1-no2;
printf("\ndiffrence of the values are:%d",o2);
o3=no1*no2;
printf("\n product of the values are:%d",o3);
o4=no1/no2;
printf("\nquotient of the values are:%d",o4);
o5=no1%no2;
printf("\nreminder of the values are :%d",o5);
getch();
}

