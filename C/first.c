#include <stdio.h>

int main()
{
    int p,n;
    float r,si;

    printf("Enter the value of p,n,r\n");
    scanf("%i%i%f", &p, &n, &r);

    si = p*n*r/100;

    printf("%f\n",si);
    return 0;    
}

/*
For printing the recieved integral input
int main()
{
    int num;

    printf("Enter a Number: ");
    scanf("%i",&num);

    printf("Now...\n");
    printf("You have entered the number %i\n",num);
    return 0;
}
*/

/*
int main()
{
    int p,n;
    float r,si;

    p = 1000;
    r = 8.5;
    n = 3;

    //formula for simple interest
    si = p*n*r/100;

    printf("%f\n",si);
    return 0;
}
*/