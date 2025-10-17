#include<stdio.h>
int main(){
	int year;
	printf("enter the year = ");
	scanf("%d",&year);
	if(year%4==0&&year%100||year%400==0)
	{
		printf("%d is the leap year",year);
	}
	else
	{
		printf("%d is non - leap year \n",year);
	}
	return 0;
}
