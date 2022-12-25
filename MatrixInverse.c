#include<stdio.h>
#include<conio.h>
main()
{
    int mat[20][20];
    int n,m,i,j;

    printf("Enter the size of matrix : ");
    scanf("%d%d",&n,&m);

    printf("Enter the elements of matrix");

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&mat[i][j]);
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(i>j)
            {
            int temp =  mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
            }
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d  ",mat[i][j]);
        }
        printf("\n");
    }
}