#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,b;
	char n;
	printf("enter the arithmetic operater = ");
	scanf("%c",&n);
	printf("enter the two values= ");
	scanf("%d%d",&a,&b);
	//fflush(stdin);

	switch(n)
	{case'+':
		printf("addition is %d\n",a+b);
		break;
	case'-':
		printf("subration is %d\n",a-b);
		break;
	case'/':
		printf("divid is %d\n",a/b);
		break;
	case'*':
		printf("multipicaltion is %d\n",a*b);
		break;
		default:
		printf("error");	
	}
	return 0;
}
