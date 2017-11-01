#include <stdio.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <unistd.h>
#include <pthread.h> //library thread

void *counting(void *faktorial)
{
    int i,j,k=1,*a;
    int a=(int)faktorial;
    if (*a<0)
    {
        printf ("Error\n");
    }
    else
    {

        for (i=*a;i>=1;i--)
        {
            k = k*i;
        }
        printf ("hasil %d!= %d",*a,k);
    }
}

int main()
{
    pthread_t tid[20];
    int angka[20],err,faktorial=0,i;
    char space;
    while(1)
    {

        scanf ("%d%c",&angka[faktorial],&space);
        faktorial++;
        if (space == ' ')
        {
            break;
        }

    }
    for (i=0;i<faktorial;i++)
    {
        err=pthread_create( &tid[i], NULL, counting, (void*) &angka[i]);//membuat thread
        if(err!=0)//cek error
        {
            printf("\n can't create thread : [%d]",err);
            exit(EXIT_FAILURE);
        }
        
    }
    for (i=0;i<faktorial;i++)
    {
           pthread_join(tid[i],NULL);
    }
    exit(EXIT_SUCCESS);
}
