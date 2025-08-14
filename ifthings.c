//Checking whether if conditionals work without curly braces
//Yash Kapoor 11th aug 2025
#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter first number  ");
    scanf("%i", &num1);
    printf("Enter second number ");
    scanf("%i", &num2);
    printf("The numbers entered are: %i and %i\n", num1, num2);
    if (num1 > num2)
        printf("%i is greater than %i", num1, num2);
    else if (num1 < num2){
        printf("%i is less than %i", num1, num2);
        printf("haha");}
    else
        printf("Both numbers are equal to %i", num1);

}