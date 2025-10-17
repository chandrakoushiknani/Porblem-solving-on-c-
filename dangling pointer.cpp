#include<stdio.h>
int main(int argc, char *argv []){
	 printf("\n name of my program %s \t",argv[0]);
	 if(argc==2)
	 {printf("\n valu given by user is %s\t",argv[1]);
		 }
		 else if (argc>2)
		 {
		 	printf("\n many values given by user \n");
			 }	
			 
			 else
			 {
			 	printf("\n sinlge value expected.\n");
			 }}
