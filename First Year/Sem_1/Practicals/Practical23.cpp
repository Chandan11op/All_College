// Write a program to arrange the 'n' numbers stored in the array in ascending and descending order.
#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],i=0,j=0,n,t;
    clrscr();
    printf("\n Enter the number of elements:");
    scanf("%d", &n);
    printf("\n");
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(j=0;j<(n-1);j++)
        {
            for(i=0;i<(n-1);i++)
            {
                if(a[i] > a[i+1])
                {
                    t= a[i];
                    a[i]= a[i+1];
                    a[i+1]=t;
                }
            }
        }
        printf("\n Ascending order:");
        for(i=0; i<0; i++)
        {
            printf("%d",a[i]);
        }
    printf("\n Descending order:");
    for(i=n;i>0;i--)
    {
        printf("%d",a[i-1]);
    }
    return 0;
}
