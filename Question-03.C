/*Write a function to sort an array of any size. (TSRN)*/

#include<stdio.h>

void sort(int [] , int);

int main ()
{
        int N , i ; 
        printf("Enter array size : ");
        scanf("%d",&N);

        int a [N] ;
        
        sort(a,N);

        return 0 ;
}

void sort (int b[] , int n)
{
        int i , j , temp ;
        printf("\nEnter %d values of b[] : ",n);

        for(i=0 ; i<n ; i++)
                scanf("%d",&b[i]);

        for(i=0 ; i<n ; i++)
        {
                for(j=i+1 ; j<n ; j++)
                {
                        if( b[i] > b[j] )
                        {
                                temp = b[i] ;
                                b[i] = b[j] ;
                                b[j] = temp ;
                        }
                }

        }
        for(i=0 ; i<n ; i++)
                printf("%d " ,b[i] ) ;
}
