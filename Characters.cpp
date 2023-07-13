#include <stdio.h>
#include <stdlib.h>
int main(){
   FILE * file;
   char path[100];
   char ch;
   int characters, words, lines;
   file=fopen("in.txt","r");
   file=fopen("out.txt","w");
   while((ch = getchar())!=EOF)
   {
      putc(ch,file);
   }
   fclose(file);
   printf("Enter source file path: ");
   scanf("%s", path);
   file=fopen(path, "r");
   if (file==NULL)
   {
      printf("Unable to open file.");
      exit(EXIT_FAILURE);
   }
   characters=words=lines=0;
   while((ch=fgetc(file))!=EOF)
   {
      characters++;
   if(ch==' '||ch=='\0')
      lines++;
   if(ch==' '||ch=='\t'||ch==' '||ch=='\0')
      words++;
   }
   if(characters>0)
   {
      words++;
      lines++;
   }
   printf(" ");
   printf("Total characters = %d", characters);
   printf("Total words = %d", words);
   printf("Total lines = %d", lines);
   fclose(file);
   return 0;
}
