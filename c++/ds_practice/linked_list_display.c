#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
}*first= NULL, *last= NULL;

void createll(int a[], int n)
{
    int i;
    struct node *p,*t;//*last;
    first = (struct node *)malloc(sizeof(struct node));
    first->data=a[0];
    first->next= NULL;
    last = first;
   for(i=1;i<n;i++){
    p= (struct node *)malloc(sizeof(struct node));
    p->data= a[i];
    p->next= NULL;
    last->next=p;
    last=p;
   }
}

void displayll(struct node *p)
{
    while(p)
    {
        printf("%d , ", p->data);
        p=p->next;
    }
}
int countt(struct node *p)
{
    int cnt=0;
    while(p)
    {
        cnt++;
        last=p;
        p=p->next;
    }
    return cnt;
}
void Delete(int pos)
{
    struct node *p=first, *q=NULL;
    if(pos<1 || pos>countt(p));
    if(pos==1)
    {
        q=first;
        first=first->next;
        free(q);
    }
    else
    {
        for(int i=0;i<pos-1 && p;i++)
        {
            q=p;
            p=p->next;
        }
        if(p)
        {
            q->next= p->next;
            free(p);
        }

    }


}
void insertll(struct node *p , int pos , int x)
{
    struct node *t , *q=NULL ;
    t= (struct node *)malloc(sizeof(struct node));
    t->data = x;
    t->next = NULL;
    if(pos<0 || pos>countt(p))
        return ;
    if(pos==0)
    {
        t->next= first;
        first = t;
        //last =t;
    }
    else
    {
        for(int i=0;i<pos-1 && p;i++)
        {
            p=p->next;
        }
        if(p)
        {
            t->next=p->next;
            p->next=t;
        }
    }


}
void pushback(int x)
{
    struct node *p = first ,  *t , *q=NULL ;
    t= (struct node *)malloc(sizeof(struct node));
    t->data = x;
    t->next = NULL;
    countt(first);
    if(!first)
    {
        first = t;
        last =t;
       // p= first;
    }
    else
    {
      last->next = t;
      last = t;
    }


}
void insertsorted(int x)
{
    struct node *p= first,*q= NULL, *t;
    t= (struct node *)malloc(sizeof(struct node));
    t->data = x;
    t->next = NULL;
    if(!first)
        first = t;
    else
    {
        while(p && p->data  <  x)
        {       q=p;
                p=p->next;
        }
            if(p==first)
            {
                t->next= first;
                first = t;
            }
            else{
            t->next= q->next ;
            q->next= t;}
    }
}

int main()
{
    int a[]= {10,20,30,40,50};
    int i,n = sizeof(a)/sizeof(a[0]);
    //createll(a,n);
    //printf("no of elements in ll is : %d. \n", countt(first));
    //displayll(first);
    //printf("\n\n");
    //Delete(first,5);
    for(i=0;i<5;i++)
       insertll(first, i, a[i]);
insertsorted(45);
   // pushback(4587);
  //  pushback(45);
    //Delete(7);
    displayll(first);
    return 0;
}

