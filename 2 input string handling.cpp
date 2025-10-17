#include<stdio.h>
#include<string.h>
int main(){
	int n;
	char str1[10],str2[10];
	scanf("%s %s %d ",&str1,&str2,&n);
	printf("the concatnation %s\n",strcat(str1,str2));
	printf("the copy of string is %s\n",strcpy(str1,str2));
	printf("th copy n string is %s ",strncpy(str1,str2,n));
}
