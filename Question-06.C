/*Write a function in C to read n number of values in an array and display it in reverse
order.*/

#include<stdio.h>

void reverse(int [] , int);

int main()
{
        int b[5];
        reverse(b,5);
        return 0;
}

void reverse (int a[] , int n)
{
        int i ;

        printf("\nEnter %d values of a[] : ",n);
        for(i=0 ; i<=n-1 ; i++)
                scanf( "%d",&a[i] ) ;
        
        printf("\nIn Reverse Order : ");
        for(i=n-1 ; i>=0 ; i--)
                printf( "%d ",a[i] ) ;

}
