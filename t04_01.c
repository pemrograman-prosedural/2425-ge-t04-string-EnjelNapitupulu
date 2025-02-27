// 12S24055-THERESIA OKTAVIANI SAMOSIR
// 12S24056-ENJEL AYUTI NAPITUPULU

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int _argv, char **_argc) {
  
  char msk[61];
  int i;
  int ASCII;
  char ASCII2;

  scanf ("%60s", msk);
  for (i=0; i< strlen (msk)- 2; i+= 3){
    sscanf(&msk[i], "%3d", &ASCII);
    ASCII2 = (char) ASCII;
    printf("%c", ASCII2);
  }

  printf ("\n");

  return 0;
}
