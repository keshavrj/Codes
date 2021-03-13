#include<stdio.h>
#include<stdlib.h>
/*void permutations(char s[], int k)
{
    static int a[10]={0};
    static char res[10];
    int i;
    if(s[k]=='\0')
        res[k]='\0',puts(res);
    else{
    for(i=0;s[i]!='\0';i++)
    {
        if(a[i]==0)
        {
            res[k]=s[i], a[i]=1;
            permutations(s,k+1);
            a[i]=0;
        }
    }
    }

}

int main()
{
    char s[]= "abc";
    permutations(s, 0);
    return 0;
}
*/
void swap(char *a, char *b)
{
    char t;
    t=*a;
    *a=*b;
    *b=t;
}

void perm(char s[], int l , int h)
{
    int i;
   if(l==h)
        puts(s);
   else{
    for(i=l;i<h;i++)
    {
        swap(&s[i], &s[l]);
        perm(s, l+1, h);
        swap(&s[l], &s[i]);
    }
   }
}

int main()
{
    char s[]= "akash";
    int h= sizeof(s)/sizeof(s[0]);
//printf("%d \n", h);
    perm(s, 0, h-1);
    return 0;
}
