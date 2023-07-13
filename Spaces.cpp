#include <stdio.h>
int main()
{
  int blank_char,new_line;
  blank_char = 0;
  new_line = 0;
  int c;
  printf("Input few words/newlines\n");
  for (; (c = getchar()) != EOF;)
  {
    if(c==' '){
      ++blank_char;
    }
    if(c=='\n'){
      ++new_line;
    }
  }  
  printf("blank=%d,newline=%d\n",blank_char,new_line);
}
 
