// 12S24055-THERESIA OKTAVIANI SAMOSIR
// 12S24056-ENJEL AYUTI NAPITUPULU


#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() {
    char str[61];  // Karena panjang maksimal string adalah 60
    scanf("%s", str);  // Membaca input
    
    int len = strlen(str);  // Menghitung panjang string
    
    for (int i = 0; i < len; i += 3) {
        // Ambil 3 karakter dari string
        char sub[4] = { str[i], str[i+1], str[i+2], '\0' };  // Ambil 3 karakter sebagai string
        int asciiValue = atoi(sub);  // Mengubah string menjadi angka ASCII
        printf("%c", (char)asciiValue);  // Cetak karakter yang sesuai dengan ASCII
    }

    return 0;
}