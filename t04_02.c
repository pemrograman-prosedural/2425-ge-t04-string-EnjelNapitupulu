// 12S24055-THERESIA OKTAVIANI SAMOSIR
// 12S24056-ENJEL AYUTI NAPITUPULU

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() {
    char str[21];  
    scanf("%20[^\n]", str); 

    int len = strlen(str);
    
    for (int i = 0; i < len; i++) {
        printf("%03d", str[i]);
    }

    printf("013\n"); 
    return 0;
}