#include<stdio.h>
int main(){
	int base,height;
    printf("Enter the length and breadth of the rectangle :");
    scanf("%d %d",&base,&height);
    float tan=0.5;
    float rectarea=tan*base*height;
    printf("Area of the rectangle is : %f",rectarea);
}
