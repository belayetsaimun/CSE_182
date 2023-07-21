#include<stdio.h>
int main(){

float d,w,m,y;
printf("Enter the number of day:\n");
scanf("%f",&d);
w=d/7;
m=d/30;
y=d/365;

printf("Weeks: %f\n",w);
printf("Months: %f\n",m);
printf("Years: %f\n",y);

}
