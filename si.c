/*calculation of simple interest
yash kapoor 7th aug 2025*/

#include <stdio.h>
int main(void)
{
    // amount, roi/annum, no. of years
    int amount;
    float yrs, roi, si;
    amount = 5000;
    roi = 5, yrs = 3;
    //formula
    si = amount*roi*yrs/100;
    printf("The simple interest is, %f", si);
}
//WORKS!!
