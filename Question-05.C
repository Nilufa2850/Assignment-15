/*Write a function to find the first occurrence of adjacent duplicate values in the array.
Function has to return the value of the element.*/

#include<stdio.h>

int duplicate (int a[] , int n ) ;

int duplicate (int a[] , int n ) 
{
        int i ; 

        printf("\n Enter %d values of a[] ",n);
        for(i=0 ; i<n ; i++)
                scanf("%d",&a[i]);

        
        for(i=0 ; i<=n-1 ; i++)
        {
                if( a[i]==a[i+1] )
                        return a[i] ;
        }
}

int main ()
{
        int b[10] ;
        int x = duplicate(b,10);

        printf("1st occurrence of adjacent duplicate value is %d ",x);
}

