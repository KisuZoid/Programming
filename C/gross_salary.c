/*Gross Salary calculator when dearness allowence is 40% of base salary 
and rent allowence is 20% of base salary.*/

#include <stdio.h>

int main()
{
    int x;
    printf("Input Your Base Salary: ");
    scanf("%i",&x);

    int p;
    printf("Enter Dearness Allowence in percentage of your Base Salary: ");
    scanf("%i",&p);
    int k = p*x/100;

    int q;
    printf("Enter Rent Allowence in percentage of your Base Salary: ");
    scanf("%i",&q);
    int l = q*x/100;

    int y = x + k + l;
    printf("%i",y);
    return 0;

}









/*
int main()
{
    int x;
    printf("Input Your Base Salary: ");
    scanf("%i",&x);

    int y = x + 0.2*x + 0.4*x;
    printf("%i",y);
    return 0;
}
*/