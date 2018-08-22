#include <stdio.h>
#include<ctype.h>
#include <string.h>
#include<stdlib.h>
#include <stdbool.h>


void QuestionsMarks(char * str[]) {
  int count, i, j;
  int len = strlen(str);
  for(i = 0; i < len; i++){

    if(isdigit(str[i]) || (str[i] == 67)){
       for(j=i; j < len; j++){
        if(str[j]=='?'){
          count++;
        }
        else if(isdigit(str[j])){
            break;
        }
       }
    }
       int k = atoi(str[i]);
       int l = atoi(str[j]);
    if(((k + l) == 10)&& (count == 3) ){
        f = True;
    }
  }
  }

int main(void) {

  char buf[80];
  gets(buf);
  QuestionsMarks(buf);
  return 0;

}
