#include <stdio.h>
void main()
{
    int a[100],b[100],c[100],i,j,n,m,k=0,t,p,s,bl;
    printf("enter no of elements of set A:");
    scanf("%d", &n);
    printf("Enter elements of set A:\n");
    for ( i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    printf("enter no  of elements of set B:");
    scanf("%d", &m);
    printf("Enter elements of set B:\n");
    for ( j = 0; j < m; j++){ 
        scanf("%d",&b[j]);
    }
    for (i = 0; i < n; i++){
        bl=0;
        for ( j = 0; j < m; j++){
            if (a[i]!=b[j]){
                bl++;
            }   
        }
        if (bl==m){
            c[k]=a[i];
            k++;
        }
    }
    printf("Difference (A-B) is:\n");
    for (t = 0; t < k; t++){
        printf("%d\n",c[t]);
    }   
}
