#include<stdio.h>
int main()
{
    int weight;
    scanf("%d",&weight);
    if (weight == 2)
    {
        printf("NO\n");
    }
    else if (weight % 2 == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}