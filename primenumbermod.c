#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void* numberOne = "numberOne";
void* numberTwo = "numberTwo";
//unsynchronized

void *prime_thread();

int main()
{
    pthread_t thread1, thread2; //ganti thread 
    int stat1, stat2;
    		
    stat1 = pthread_create(&thread1, NULL, prime_thread, (void*) numberOne);
    stat2 = pthread_create(&thread2, NULL, prime_thread, (void*) numberTwo);
    
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
    
    printf("Thread no 1 returns: %d\n", stat1);
    printf("Thread no 2 returns: %d\n", stat2);
    
    return 0;
}

void *prime_thread(void* message){
    char* urutan;
    urutan = (char*) message;

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
    printf("\nAmount of prime number :%d\n\n", b);
    puts(urutan);
}
