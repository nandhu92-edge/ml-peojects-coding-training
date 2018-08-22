#include <stdio.h>

void LongestWord(char * sen[]) {

    //char *token = " ";
    //char word[80] = " ";
    //token = strtok(sen, " ");


    //while( token != NULL )
    //{
      //  if(strlen(word) < strlen(token) )
        //{
          //  strcpy(word, token);
        //}

        //token = strtok(NULL, " ");

    //}

    //printf("%s %d", word, strlen(word));
printf("%s",sen);
}

int main(void) {

  // keep this function call here
  char name[80];
  LongestWord(scanf("%s", name));
  return 0;

}
