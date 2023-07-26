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

     float ac = 3.14*r*r;
     float pc = 3.14*2*r;
     int ar = l*b;
     int pr = 2*l+2*b; 

     printf("Area of Circle:%.2f\n Perimeter of Circle:%.2f\n Area of Rectangle:%i\n Perimeter of Rectangle:%i\n",(float)ac,(float)pc,ar,pr);
     return 0;
}