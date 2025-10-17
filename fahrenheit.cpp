#include <stdio.h>

int main() {
    float Fahrenheit, Celsius;
    	    printf("Give Temperature in Fahrenheit: ");
    scanf("%f", &Fahrenheit);
    float div = 5.0 / 9.0;
    float FahrenheitToCelsius = (Fahrenheit - 32) * div;
    printf("Temperature in Celsius is %.3f°C\n\n", FahrenheitToCelsius);
    printf("Give Temperature in Celsius: ");
    scanf("%f", &Celsius);
    float divv = 9.0 / 5.0;
    float CelsiusToFahrenheit = (Celsius * divv) + 32;
    printf("Temperature in Fahrenheit is %.3f°F\n", CelsiusToFahrenheit);
    
    return 0;
}
