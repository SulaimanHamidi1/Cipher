#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORDS 10000
#define MAX_CHARS 20

char menu (){
    printf("e - Encrypt a text\n");
    printf("d - Decrypt a text\n");
    char input = getchar();
    getchar();
    return input;
}

void encryptText (char arr[MAX_WORDS][MAX_CHARS]){
    char keyFile [30];
    char buffer [100];
    printf("Insert your key file: ");
    fgets(keyFile, 30, stdin);
    keyFile[strcspn(keyFile, "\n")] = '\0';

    FILE* file = fopen(keyFile, "r");
    
    int count = 0;
    while(fgets(buffer, 100, file)){
        for (int i = 0; i < sizeof(buffer); i++){
            if (buffer[i] == ' '){
                strcat(arr[count], " ");
                count++;
            }
        }
        strcpy(arr[count], buffer);
        printf("%s", arr[count]);
        printf("\nCount: %d", count);
    }

}

int main (){
    char arr[MAX_WORDS][MAX_CHARS];
    encryptText(arr);
}
