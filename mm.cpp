#include<stdio.h>
int main(){
	int a=3 ,b=2,c;
	printf("before swapping the numbers= \n ");
	printf("a=%d,b=%d \n",a,b);
	c=a;
	a=b;
	b=c;
	printf("after swapping the number = \n");
	printf("a=%d,%d",a,b);
	return 0;
}
