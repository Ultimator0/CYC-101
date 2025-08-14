//Trying to find length of a number
//Yash Kapoor 14th Aug 2025
#include <stdio.h>
#include <math.h>

int len(int n);

int main()
{
    int num;
    printf("Enter a number:     ");
    scanf("%i", &num);
    printf("The number %i has %i digits\n", num, len(num));
}

int len(int n)
{
    /* Let p be the lowest power of 10 that divides the number and gives result 0
    Then p is the length of the number*/
    int result = 1;
    int p = 0;
    do
    {
        //p10 = 10 ^ p
        int p10 = pow(10, p);
        //result = integer division of n by p10
        result = n/p10;
        //printing to check progress
        printf("%i divided by %i ^ %i = %i is %i\n", n, 10, p, p10, result);
        p +=1 ;
        printf("p has been incremented to %i\n", p);
    }
    //end result needs to be 0
    while (result != 0);
    //to negate the last extra increment of p
    p -= 1;
    return (p);
}