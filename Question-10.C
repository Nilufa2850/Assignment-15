/*Write a function in C to count the frequency of each element of an array.*/

#include<stdio.h>

void frequency(int [] , int ) ;

void frequency (int a[] , int n)
{
        int i ; 

        printf("\nEnter %d values of a[] : ",n);
        for(i=0 ; i<n ; i++)
                scanf("%d",&a[i]) ;


        int f[100] = {0} ;

        for(i=0 ; i<=n-1 ; i++)
                f[a[i]]++ ;

        for(i=0 ; i<100 ; i++)
                if( f[i] != 0) 
                printf("\n%d occurd %d times. ",i , f[i] ) ;
}

int main ()
{
        int b[5] ;
        frequency (b , 5 );
}
