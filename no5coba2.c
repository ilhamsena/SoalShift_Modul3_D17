#include <stdio.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <string.h>
#include <unistd.h>

pthread_t tid[10];
void* counting(void *arg)
{
    pthread_t id=pthread_self();
    int hitung,countt=0,i,j,k;
    char s[200];
    gets(s);
    for (i = 0;i<strlen(s);i++)
    {
        if (s[i] == ' ')
        countt++;
        k = i-1;
    }
    for (j=0;j<countt;j++)
    {
        if(pthread_equal(id,tid[countt]))
        {
             FILE * novel;
            novel = fopen ("/home/ilhamsena/Novel.txt","r");
            if ( fp )
                {
                //Repeat until End Of File character is reached.
                    while ((ch=getc(fp)) != EOF) {
                    // Increment character count if NOT new line or space
                    if (s = ' ' && ch != '\n') { ++charcount; }

        }
    }

}

int main(void)
{



}
