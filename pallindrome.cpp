#include<stdio.h>
int main(){
	int n,rev=0,r,t;
	printf("entr the values =");
	scanf("%d",&n);
	t=n;
	while(t>0)
	{
		r=t%10;
		rev=rev*10+r;
		t=t/10;
		
	}
	if(n==rev)
	{
		printf("%d is  pallindrome nomber",n);
	}
	else
	{
		printf("%d is not pallindrome number",n);
	}
	return 0;
}
