#include <stdio.h>
int Feet2Inch(int);
int feet,inches;
void main()
{
feet = 6;
inches = Feet2Inch(feet);
printf("Height in inches is %d",inches);
}
int Feet2Inch(int f)
{
return f*12;
} 