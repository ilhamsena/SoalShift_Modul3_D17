#include <stdio.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <string.h>
#include <unistd.h>

int main()
{
    FILE * novel;
    novel = fopen ("grep -o Fina /home/ilhamsena/Novel.txt | wc -1","r");
    if (novel == NULL) {
        ferror("fopen");
        exit(EXIT_FAILURE);
    }
    novel = fopen ("grep -o Ifah /home/ilhamsena/Novel.txt | wc -1","r");

    while (fgets(result, sizeof(result), novel)) {
        printf("%s", result);
}
