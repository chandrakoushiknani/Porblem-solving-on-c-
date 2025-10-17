#include<stdio.h>
int main(){
	float Fahrenheit,Celsius;

	printf("Give Temperature in Fahrenheit - ");
	scanf("%f",&Fahrenheit);
	float div = 5.0/9.0;
	float FahrenheitToCelsius = (Fahrenheit-32)*div;
	printf("Temperatur in Celsius is %.3fC \n\n",FahrenheitToCelsius);
	
	printf("Give Temperatue in Celsius - ");
	scanf("%f",&Celsius);
	float divv=9.0/5.0;
	float CelsiusToFahrenheit=(Celsius+32)*(divv);
    printf("Temperature in Fahraenheit is %.3fF",CelsiusToFahrenheit);
	  return 0;
}
