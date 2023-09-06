#include <stdio.h>

int main() 
{
    int n;
    int odd = 1;
    printf("Enter a no: ");
    scanf("%d", &n);
    printf("Odd no of %d terms are:", n);
    
    int i = 15;
    for (i; i <= n; i++) {
        printf("%d ", odd);
        odd = odd + 2;
    }
    
    return 0;
}
