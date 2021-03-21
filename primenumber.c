#include <stdio.h>

int main()
{
    int n = 100000, a, m = 200000, b=0, c = 0,x=0;
  
    for ( x = n; x<m ;x++)
    {
        for(a = 1; a<=x ; a++)
        {
            if (x%a == 0)
            {
                c++;
            }
            if (c > 2)
            {
                break;
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
