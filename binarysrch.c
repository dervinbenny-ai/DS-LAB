#include<stdio.h>
int main(){
int i,n,k,high,low,mid,f=0;
printf("enter the size of the array:\n");
scanf("%d",&n);
int arr[n];
printf("enter %d elements:\n",n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("enter the element to search :\n");
scanf("%d",&k);
low=0;
high=n-1;
while(low<=high)
{
mid=(low+high)/2;
if(arr[mid]==k)
{
printf("%d found at position %d\n",k,mid+1);
f=1;
break;
}
else if(arr[mid]<k)
{
low=mid+1;
}
else
{
high=mid-1;

}
if(f==0);
{
printf("%d not found in the array \n",k);
}
}
return 0;
}


#include <stdio.h>

int main() {
    int m, n, i, j, k;

    printf("Enter the number of rows and columns of the matrices: ");
    scanf("%d %d", &m, &n);

    int A[m][n], B[m][n], Sum[m][n], Sub[m][n], Mul[m][n];

    printf("Enter elements of Matrix A:\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    printf("Enter elements of Matrix B:\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &B[i][j]);

    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            Sum[i][j] = A[i][j] + B[i][j];

    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            Sub[i][j] = A[i][j] - B[i][j];

    if (m == n) {
        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++) {
                Mul[i][j] = 0;
                for (k = 0; k < n; k++) {
                    Mul[i][j] += A[i][k] * B[k][j];
                }
            }
        }
    }

    printf("\nMatrix Addition:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
            printf("%d ", Sum[i][j]);
        printf("\n");
    }

    printf("\nMatrix Subtraction:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
            printf("%d ", Sub[i][j]);
        printf("\n");
    }

    if (m == n) {
        printf("\nMatrix Multiplication:\n");
        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++)
                printf("%d ", Mul[i][j]);
            printf("\n");
        }
    } else {
        printf("\nMatrix multiplication not possible (not square matrices).\n");
    }

    return 0;
}
