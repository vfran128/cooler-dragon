#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char  *argv[]) {
  int count = 2;
  int max = 15;
  char instruccion[max];
  char temp[max];
  instruccion[0] = 'f';
  for (int i = 1; i <= count; i += 1) {
    strcpy(temp,instruccion);
    strcat(instruccion, "l");
     for (int j = max; j >= 0; j-=1) {
       if (temp[j] == 'l') temp[j] = 'r';
       else if (temp[j] == 'r') temp[j] = 'l';
    }
    strcat(instruccion,temp);
  }
  printf("%s\n",instruccion);
  return 0;
}
