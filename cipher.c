#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

char menu (){
    printf("e - Encrypt a text\n");
    printf("d - Decrypt a text\n");
    char input = getchar();
    getchar();
    return input;
}

