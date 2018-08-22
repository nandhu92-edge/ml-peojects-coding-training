#include <stdio.h>

void FirstReverse(char str[]) {
  int len = strlen(str);
  printf("%d", len);
  char buf[80];
  int j = len - 1;
  for(int i = 0; i < len; i++){
    buf[i] = str[j];
    j--;
  }
  buf[len] = '\0';

  printf("%s", buf);

}

int main(void) {

  // keep this function call here
  char str[80];
  gets(str);
  FirstReverse(str);
  return 0;

}
