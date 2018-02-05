#include <stdio.h>
#include<conio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter a positive int: ");
    scanf("%d",&n);
    for(i=5; i <= n; ++i)
    {
        sum += i;   
    }
    printf("Sum = %d",sum);
    return 0;
}
