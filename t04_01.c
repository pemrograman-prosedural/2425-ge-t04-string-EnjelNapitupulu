// 12S24055-THERESIA OKTAVIANI SAMOSIR
// 12S24056-ENJEL AYUTI NAPITUPULU


#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() {
    char str[61];  
    scanf("%s", str);  
    
    int len = strlen(str);  
    for (int i = 0; i < len; i += 3) {
       
        char sub[4] = { str[i], str[i+1], str[i+2], '\0' };  
        int asciiValue = atoi(sub);  
        printf("%c", (char)asciiValue);   
    }

    return 0;
}