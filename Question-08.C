/*Write a function in C to print all unique elements in an array.*/

#include<stdio.h>
void unique(int [] , int );

void unique(int a[], int n)
{
        int i , j ;

        printf("\nEnter %d values of a[] : ",n);
        for(i=0 ; i<n ; i++)
                scanf("%d",&a[i]);

        for(i=0 ; i<=n-1 ; i++)
        {
                for(j=0 ; j<=n-1 ; j++)
                {
                        if( a[i] == a[j] && i!=j )
                        break ;         
                }

                if(j==n)
                        printf("%d ", a[i]);
        }
        
}


int  main ()
{
        int b[10] ;

        unique(b,10);
        return 0 ;
}
