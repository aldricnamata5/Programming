#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char sen[50];
    int i = 0 , c = 0 , v = 0 , len;

    printf("Input a Sentence: ");
    gets(sen);
      while(sen[i] != '\0'){
        if( sen[i] == 'a' || sen[i] == 'e' || sen[i] == 'i' || sen[i] == 'o' || sen[i] == 'u' )
        {
            sen[i]=sen[i]-32;
        }
        i++;
    }
       for(i=0;i<strlen(sen); i++)
        {

        if ( sen[i] == 'a' || sen[i] == 'e' || sen[i] == 'i' || sen[i] == 'o' || sen[i] == 'u' ||
            sen[i] == 'A' || sen[i] == 'E' || sen[i] == 'I' || sen[i] == 'O' || sen[i] == 'U' )
            v=v+1;

        else c=c+1;
    }
    len = strlen(sen);
    printf("\nString converted: ");
    puts(sen);
    printf("\nString Length: %d", len);
    printf("\nVowels: %d", v);
    printf("\nConsonants: %d\n\n", c);

    return 0;
}
