/*Write a function in C to merge two arrays of the same size sorted in descending
order.*/
#include<stdio.h>
void merge(int[], int[] , int );

int main()
{
    
    int a[5], b[5];

    merge (a, b , 5);

    printf("\n");
    return 0;
}
void merge(int c[], int d[] , int n)
{
    int i, j, k, swap;
    int mer[2*n];

    printf("\nEnter 1st Array Elements : ");
    for (i=0; i<n; i++)
    {
        scanf("%d", &c[i]);
        mer[i] = c[i];
    }
    
    printf("Enter 2nd Array Elements : ");
    for (i=0; i<n; i++)
    {
        scanf("%d", &d[i]);
        mer[i+n] = d[i];
    }

    k = 2*n;
    printf("Merged Array is : ");
    for (i=0; i<k; i++)
        printf("%d ", mer[i]);

    for (i=0; i<k-1; i++)
    {
        for (j=i+1; j<k; j++)
        {
            if (mer[i] < mer[j])
            {
                swap = mer[i];
                mer[i] = mer[j];
                mer[j] = swap;
            }
        }
    }
    printf("\nMerged Array in Descending order : ");
    for (i=0; i<k; i++)
        printf("%d ", mer[i]);

}
