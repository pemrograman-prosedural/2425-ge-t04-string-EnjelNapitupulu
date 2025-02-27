// 12S24055-THERESIA OKTAVIANI SAMOSIR
// 12S24056-ENJEL AYUTI NAPITUPULU

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() {
    char str[21];  // Maksimum 20 karakter + 1 untuk '\0'
    scanf("%20[^\n]", str); // Membaca input hingga newline

    int len = strlen(str);
    
    // Loop setiap karakter dan cetak nilai ASCII dalam format tiga digit
    for (int i = 0; i < len; i++) {
        printf("%03d", str[i]);
    }

    printf("\n");  // Pindah baris setelah output selesai
    return 0;
}