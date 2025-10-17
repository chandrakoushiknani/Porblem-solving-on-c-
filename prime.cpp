#include<stdio.h>
int main (){
	int i,n,flag;
	printf("enter the values ");
	scanf("%d",&n);
	flag=1;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0);

	{
	
	flag=0;
	break;
}
}

if(flag==1)
{
	printf("%d is a prime ",n);
}
else
{
	printf("%d is not a prime ",n);
}
return 0;
}
