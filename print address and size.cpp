#include<stdio.h>
int main(){
int intvar=10;
float floatVar=10.5;
char charvar='A';
 printf("integer value :%d, address:%p, Size:%lu bytes\n",intvar,(void*)&intvar, sizeof(intvar));
 printf("Float value: %f, address: %p, size: %lu bytes\n", floatVar,(void*)&floatVar, sizeof(floatVar));
 printf("char value:%c, address: %p, size: %lu bytes\n" , charvar,(void*)&charvar, sizeof(charvar));
return 0; 	
}
