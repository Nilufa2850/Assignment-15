/*Write a function to find the greatest number from the given array of any size. (TSRS)*/

#include<stdio.h>

int greatest(int [] , int);

int main ()
{
        int a[5];
        printf("Gretest number is : %d", greatest(a,5) );
        return 0;
}

int greatest (int b[] , int n)
{       
        int i , grt ;
        
        
        printf("\nEnter %d values of b[]",n);
        for(i=0 ; i<n ; i++)
                scanf("%d",&b[i]);


        grt = b[0] ;

        for(i=0 ; i<n ; i++)
        {
                if(b[i] > grt)
                        grt = b[i] ;
                
        }
        return grt ;  
        
}
