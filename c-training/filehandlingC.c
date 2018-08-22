#include <stdio.h>
#include <stdlib.h>

int main()
{
   char c, file_name[25];
   FILE *fp;
   int count = 0;

   printf("Enter name of a file you wish to see\n");
   gets(file_name);

   fp = fopen(file_name, "r"); // read mode

   if (fp == NULL)
   {
      perror("Error while opening the file.\n");
      exit(EXIT_FAILURE);
   }

   for (c = getc(fp); c != EOF; c = getc(fp)){
        if (c == '\n') // Increment count if this character is newline
            count = count + 1;
   }
   printf("The file %s has %d lines\n ", file_name, count);
   fclose(fp);
   return 0;
}

