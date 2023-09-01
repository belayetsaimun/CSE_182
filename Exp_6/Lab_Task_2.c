#include<stdio.h>
int main()
{
    int A[3][3],B[3][3],i,j,C[3][3],k,sum=0;
    printf("Enter elements for A matrix:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {

            printf("A[%d][%d]= ",i,j);
            scanf("%d",&A[i][j]);

        }
        printf("\n");
    }
    printf("\nEnter elements for B matrix:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {

            printf("B[%d][%d]= ",i,j);
            scanf("%d",&B[i][j]);

        }
        printf("\n");
    }


    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            for(k=0; k<3; k++)
                sum=sum+A[i][k]*B[k][j];
            C[i][j]=sum;
            sum=0;
        }
    }

    printf("A = ");
    for(i=0; i<3; i++)
    {
        printf("\t");
        for(j=0; j<3; j++)
        {
            printf("%d ",A[i][j]);

        }
        printf("\n");
    }


    printf("B = ");
    for(i=0; i<3; i++)
    {
        printf("\t");
        for(j=0; j<3; j++)
        {

            printf("%d ",B[i][j]);
        }
        printf("\n");
    }

    printf("\nPrinting the result of the mulitiplication of A and B matrix");
    printf("\n");
    printf("C = ");
    for(i=0; i<3; i++)
    {
        printf("\t");
        for(j=0; j<3; j++)
        {

            printf("%d ",C[i][j]);

        }
        printf("\n");
    }


}
