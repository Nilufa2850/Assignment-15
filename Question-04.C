/*Write a function to rotate an array by n position in d direction. The d is an indicative
value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and
d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )*/


//Right Shift ...and ... Left Shift ... BOTH

#include<stdio.h>
void rotate(int[],int,int) ;

void rotate (int a[] , int n ,  int d)
{
        int i , temp , direction ;

        printf("\nEnter %d values of a[] : ",n);
        for(i=0 ; i<n ; i++)
                scanf("%d",&a[i]);

        printf("\nEnter 1 for Right shift else Left shift :");
        scanf("%d",&direction);

        if (direction == 1)
        {
                for(direction=d ; direction>0 ; direction--)
                {
                        temp = a[n-1] ;

                        for(i=n-1 ; i>=1 ; i--)
                        {
                                a[i] = a[i-1] ;
                        }
                        a[0] = temp ;
                }
                printf("%d time Right shift : ",d);
                for(i=0 ; i<n ; i++)
                        printf("%d ",a[i]);

        }

        else 
        {
                for(direction=d ; direction>0 ; direction-- )
                {
                        temp = a[0] ;
                        for(i=0 ; i<=n-2 ; i++)
                        {
                                a[i] = a[i+1] ;
                        }
                        a[n-1] = temp ;
                }
                printf("%d time Left shift : ",d);
                for(i=0 ; i<n ; i++)
                        printf("%d ",a[i]);

        }
}

int main ()
{
        int N , D ;
        printf("\nEnter size (n) & direction (d) : ");
        scanf("%d%d",&N,&D);

        int b[N] ;

        rotate(b , N , D );

        return 0 ;
}
