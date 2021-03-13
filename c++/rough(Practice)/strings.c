#include<stdio.h>
int main()
{int i=0, cnt=0;
    char s[70];
    gets(s);
  /*  for(i=0;s[i]!='\0';i++)
    {//printf("%c", s[i]);
        if(s[i]==' ')continue;
        s[i]^=32;
    }
    puts(s);
    */
    //printf("%s  \n", s[-1]);
    for( i=0;s[i]!='\0';i++)
    {
        if(s[i]==' ' && s[i-1]!=' ')
            cnt++;
    }
    printf("no. of words = %d.", cnt+1);
    return 0;
}
