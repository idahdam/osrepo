#include <stdio.h>

int main()
{
    int n,a, m,b=0, c = 0,x;
    printf("Check from Number :\t");
    scanf("%d", &n);

    printf("Check To Number :\t");
    scanf("%d", &m); 
    
    while(x>n)
    {
        printf("\nTry again\n Check from Number:\t");
        scanf("%d", &n);
        printf("Check To Number :\t");
        scanf("%d", &m); 
    }
    for ( x = n; x<m ;x++)
    {
        for(a = 1; a<=x ; a++)
        {
            if (x%a == 0)
            {
                c++;
            }
        }
        if (c == 2)
        {
            b++;
        }
        c=0;
    }
    printf("\nAmount of prime number :%d", b);
    return 0;
}