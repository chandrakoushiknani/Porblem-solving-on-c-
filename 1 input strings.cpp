#include<stdio.h>
#include<string.h>
int main(){
	char a[10],str1,str2;
	scanf("%s",&a);
	printf("the lenght of string is %d\n",strlen (a));
	printf("the lenght of string is upper case %s\n",strupr(a));
	printf("the lenght of string in lower case %s\n",strlwr(a));
	
	return 0;
}
