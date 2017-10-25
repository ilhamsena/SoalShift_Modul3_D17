#include <stdio.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <string.h>
#include <unistd.h>

pthread_t tid[20];
void *counting(void *ptr)
{
    pthread_t id=pthread_self();
    int hitung,countt=0,i,j,k=1;
    int a=(int)ptr
    for (i=a;i>=1;1--)
    {
        k = k*i;
    }
    printf ("hasil %d!= %d",a,k);
}

int main()
{

}
