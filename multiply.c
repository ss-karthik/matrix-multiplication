// A C program to multiply two matrices and provide the result

#include <stdio.h>
void main()
{
    int r1, c1;
    int r2, c2;
    
    printf("Enter the order of the First matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter the order of the Second Matrix: ");
    scanf("%d %d", &r2, &c2);

    if(c1 != r2)
    {
        printf("The two matrices cannot be multiplied!\n");
        return;
    }

    int A[r1][c1];
    int B[r2][c2];
    int C[r1][c2];
    printf("Enter first Matrix: \n");
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c1; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter second Matrix: \n");
    for(int i = 0; i < r2; i++) {
        for(int j = 0; j < c2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    
    printf("The Result is: \n\n");
    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c2; j++ )
        {
            int sum = 0;
            for(int k = 0; k < c1; k++)
            {
                sum = sum + (A[i][k] * B[k][j]);
            }
            C[i][j] = sum;
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }
}