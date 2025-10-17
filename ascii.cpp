#include<stdio.h>
#include<string.h>
int main(){
	char first_str[]="Gfz";
	char second_str[]="Gfz";
	int res=strcmpi(first_str,second_str);
	if(res==0)
	{
		printf("string are equal\n");
	}
	else{
		printf("string are unqual");
	}
	printf("\nvale of result: %d",res);
	return 0;
}
