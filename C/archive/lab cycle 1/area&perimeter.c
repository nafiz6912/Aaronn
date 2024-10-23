#include <stdio.h>
int main()
{
    int length,breadth;
    printf("enter the length and breadth of the rectangle: ");
    scanf("%d %d",&length,&breadth);
    printf("Area of rectangle is %d\nPerimeter of rectangle is %d", length * breadth, 2 * (length + breadth));
    return 0;
}