#include <stdio.h>
int main ()
{
  FILE * file;
  int i,n;
  char str[20];
  printf("Enter the number of lines to be written: ");
  scanf("%d", &n);
  file = fopen ("text.txt","w");
  for(i = 0; i < n+1;i++)
  {
    gets(str);
    fputs(str, file);
  }

  fclose (file);
  return 0;
}
