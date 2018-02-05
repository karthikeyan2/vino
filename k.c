#include <stdio.h>
#include<conio.h>
int addNum(int n);
void main()
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Sum = %d",addNum(num));
    return 0;
}

int addNumbers(int n)
{
    if(n != 0)
        return n + addNum(n-1);
    else
        getch();
}
