#include<stdio.h>

void prime(int n)
{
    int flag = 0;
    for(int i = 2; i < n; i++)
    {
        if(n%i == 0)
        {
            flag++;
            break;
        }
    }
    if(flag == 0)
    {
        printf("%d is a prime number.",n);
    }
    else
    {
        printf("%d is not a prime number.",n);
    }
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    prime(num);
}
