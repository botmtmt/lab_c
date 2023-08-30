#include <stdio.h>
// Square area function calulaate
float SquareArea(float side)
{
    return side * side;
    
}
void main()
{
    float side, area;
    //side = 5.55652;
    printf("Enter side: ");
    scanf("%f",&side);
    
    area = SquareArea(side);
    printf("Square Area is %.2f",area);
}