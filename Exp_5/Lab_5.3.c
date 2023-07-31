#include<stdio.h>
int main()
{
    int i, n=20;
    for(i=1; i<=n; ++i)
    {
        if(i % 5 == 0)
        {
            printf("pass\n");
            continue;
        }
        printf("%d\n",i);
    }
}
