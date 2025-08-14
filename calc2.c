//building calculator in a new file
//Yash Kapoor 11th aug 2025

#include <stdio.h>
#include <string.h>

int sum(int x,int y);
int diff(int x, int y);
int prod(int x, int y);
int div(int x, int y);
char operation(int x, int y);

int main()
{
    int num1, num2;
    printf("Enter both numbers (seperated by comma): ");
    scanf("%i,%i", &num1, &num2);
    printf("Numbers entered are:  %i and %i\n", num1, num2);
    operation(num1, num2);
}

char operation(int x, int y)
{
    char op[4];
    printf("Enter operation name : sum / diff / prod / div:   ");
    scanf("%s", &op);
    if (strcmp(op, "sum") == 0)
    {
        printf("Sum of %i and %i is %i", x, y, sum(x, y));
    }
    else if (strcmp(op, "diff") == 0)
    {
        printf("Difference between %i and %i is %i", x, y, diff(x, y));
    }
    else if (strcmp(op, "prod") == 0)
    {
        printf("Product of %i and %i is %i", x, y, prod(x, y));
    }
    else if (strcmp(op, "div") == 0)
    {
        printf("%i divided by %i is %i", x, y, div(x, y));
    }
    else
    {
        printf("Undefined function");
    }
}

int diff(int x, int y)
{
    int z = x - y;
    return z;
}

int sum(int x,int y)
{
    int z = x + y;
    return z;
}

int prod(int x, int y)
{
    int z = x*y;
    return z;
}

int div(int x, int y)
{
    int z = x/y;
    return z;
}