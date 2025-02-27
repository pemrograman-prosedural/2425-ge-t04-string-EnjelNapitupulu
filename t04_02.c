// 12S24055-THERESIA OKTAVIANI SAMOSIR
// 12S24056-ENJEL AYUTI NAPITUPULU

#include <stdio.h>

int main() {
 char str[20];
  scanf("%20[^\n]", str);
  
  for(int i = 0; str[i] != '\0'; i++) {
    printf("%03d", (int)str[i]);
  }
   
  printf("\n");
  
  return 0;
}