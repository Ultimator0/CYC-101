/*Given the length and breadth of a rectangle
Checking whether area is greater than perimeter*/
//Yash Kapoor 14th aug 2025

#include <stdio.h>

int main()
{
    float len, wid;
    printf("Enter the length and width of the rectangle (separated by comma):   ");
    scanf("%f, %f", &len, &wid);
    if (len*wid > 2*(len+wid))
    {
        printf("Area of this rectangle is greater than its perimeter");
    }
    else if (len*wid < 2*(len+wid))
    {
        printf("Area of this rectangle is lesser than its perimeter");
    }
    else
    {
        printf("Area and perimeter of this rectangle are equal");
    }
}