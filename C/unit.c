/*Convertion of unit from Kilometer to Meter and Centimeter.*/

#include <stdio.h>

int main()
{
    int x;
    printf("Input the distance in Kilometer: ");
    scanf("%i",&x);

    int y = x*1000;
    int z = x*100000;
    printf("%i meters\n%i centimeters",y,z);
    return 0;
}