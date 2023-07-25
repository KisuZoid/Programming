/*The length and width of a rectangle and radius of a circle are 
input through the keyboard. a program to calculate the area 
and perimeter of the rectangle, and the area and circumference of 
the circle.*/

#include <stdio.h>

int main()
{
     int l,b,r;

     printf("Length: ");
     scanf("%i",&l);

     printf("Width: ");
     scanf("%i",&b);  
     
     printf("Radius: ");
     scanf("%i",&r);

     int ac = 22*r*r/7;
     int pc = 44*r/7;
     int ar = l*b;
     int pr = 2*l+2*b; 

     printf("Area of Circle:%i\n Perimeter of Circle:%i\n Area of Rectangle:%i\n Perimeter of Rectangle:%i\n",ac,pc,ar,pr);
     return 0;
}