/*Write a function in C to count a total number of duplicate elements in an array.*/

#include<stdio.h>

int duplicate(int[] ,int );

int duplicate (int a[], int n)
{
        int i ,j , count = 0 ;

        printf("\nEnter %d values iof a[] : ",n);
        for(i=0 ; i<n ; i++)
                scanf("%d",&a[i]);

        for(i=0 ; i<=n-2 ; i++)
        {
                for(j=i+1 ; j<=n-1 ; j++)
                {
                        if( a[i]==a[j] )
                                count ++ ;
                }
        }

        return  count ;
}

int main ()
{
        int b[10] ;

        printf("Duplicate = %d",duplicate(b,10));
        return 0;
}
