#include<stdio.h>
#include<stdlib.h>
void main()
{
    //declarations
    int a[20][20],b[20][20],product[20][20];
    int i,j,k,sum,r1,c1,r2,c2;

    //entering the number of rows and colums
    printf("Enter the number of rows and columns of matrix a:");
    scanf("%d%d",&r1,&c1);
    printf("Enter the number of rows and colums of matrix b:");
    scanf("%d%d",&r2,&c2);
    
    //condition check
    if(c2!=r1)
    {
        printf("cannot be multiplied.");
    }
    else
    {
        // entering the elements of matrices.

        printf("Enter the elements of first matrix:\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }

        printf("Enter the elements of second matrix:\n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }

        //matrix multiplication.
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                for(k=0;k<r2;k++)
                {
                    // multiplication logic.
                    sum=sum+a[i][k]+b[k][j];
                }
                product[i][j]=sum;
                sum=0;//re-initialising the value of sum for next element.
            }
        }
        //printing the resultant matrix.
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%d\t",product[i][j]);
            }
            printf("\n");
        }
    
    }


}