/*Write a function to find the smallest number from the given array of any size. (TSRS)*/

#include<stdio.h>

int smallest(int [] , int);

int main ()
{
        int N ;
        printf("Enter array size : ");
        scanf("%d",&N);

        int a[N];
        printf("Smallest number is : %d", smallest(a,N) );
        return 0;
}

int smallest (int b[] , int n)
{       
        int i , sml ;
        

        printf("\nEnter %d values of b[] : ",n);
        for(i=0 ; i<n ; i++)
                scanf("%d",&b[i]);


        sml = b[0] ;

        for(i=0 ; i<n ; i++)
        {
                if(b[i] < sml)
                        sml = b[i] ;
                
        }
        return sml ;  
        
}
