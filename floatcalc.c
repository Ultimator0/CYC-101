//building calculator 2.0 (works with floats)
//Yash Kapoor 11th aug 2025

#include <stdio.h>
#include <string.h>

//prototypes of defined functions
float sum(float x,float y);
float diff(float x, float y);
float prod(float x, float y);
float div(float x, float y);
char operation(float x, float y);

int main()
{
    //Entering two numbers
    float num1, num2;
    printf("Enter both numbers (seperated by comma): ");
    scanf("%f,%f", &num1, &num2);
    printf("Numbers entered are:  %8.2f and %8.2f\n", num1, num2);
    //Doing the mathematical operation
    operation(num1, num2);
}

//Function taking operation name as input and printing the result
char operation(float x, float y)
{
    //Entering operation name
    char op[4];
    printf("Enter operation name : sum / diff / prod / div:   ");
    scanf("%s", &op);
    //Checking whether function is sum, difference, product or division
    if (strcmp(op, "sum") == 0)
    {
        printf("Sum of %8.2f and %8.2f is %8.2f", x, y, sum(x, y));
    }
    else if (strcmp(op, "diff") == 0)
    {
        printf("Difference between %8.2f and %8.2f is %8.2f", x, y, diff(x, y));
    }
    else if (strcmp(op, "prod") == 0)
    {
        printf("Product of %8.2f and %8.2f is %8.2f", x, y, prod(x, y));
    }
    else if (strcmp(op, "div") == 0)
    {
        printf("%8.2f divided by %8.2f is %f", x, y, div(x, y));
    }
    else
    {
        printf("Undefined function");
    }
}
//Defining difference
float diff(float x, float y)
{
    float z = x - y;
    return z;
}
//Defining sum
float sum(float x,float y)
{
    float z = x + y;
    return z;
}
//Defining product
float prod(float x, float y)
{
    float z = x*y;
    return z;
}
//Defining division
float div(float x, float y)
{
    float z = x/y;
    return z;
}