/* print the following pattern
$
$$
$$$
$$$$ */
#include<stdio.h>
#include<conio.h>

int main()
{
    int n = 4; // Number of rows
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("$");
        }
        printf("\n");
    }
    getch();
    return 0;
}
