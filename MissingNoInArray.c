#include<stdio.h>
main()
{
    int a[100],n,i,p,s,t,j,zz;
    printf(" Enter no. of elements in array: ");
    scanf("%d" , &n);
    printf(" Enter the elements: ");
    for(i = 0 ; i<(n-1);i++){
        scanf("%d", &a[i]);
    }
    zz=a[0];
    for ( i = 0,j = zz; i < n-1; i++,j++){
        if(a[i] != j){
            printf("missing number is: %d" , j);
            break;
        }
    }


    
}
