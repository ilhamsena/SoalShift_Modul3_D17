#include <stdio.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <unistd.h>

pthread_t tid[20];
void *counting(void *faktorial)
{
    pthread_t id=pthread_self();
    int i,j,k=1;
    int a=(int)faktorial;
    if (a<0)
    {
        printf ("Error\n");
    }
    else
    {

        for (i=a;i>=1;i--)
        {
            k = k*i;
        }
        printf ("hasil %d!= %d",a,k);
    }
}

int main()
{
    int angka[20],err,faktorial=0,i;
    char space;
    while(true)
    {

        scanf ("%d%c",angka[faktorial],space);
        faktorial++;
        if (space == ' ')
        {
            break;
        }

    }
    for (i=0;i<faktorial;i++)
    {
        err=pthread_create(&(tid[i]),NULL,&counting,NULL);//membuat thread
        if(err!=0)//cek error
        {
            printf("\n can't create thread : [%s]",strerror(err));
            exit(EXIT_FAILURE);
        }
        pthread_join(tid[i],NULL);
    }
    exit(EXIT_SUCCESS);
}
