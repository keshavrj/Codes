#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*top= NULL;
struct stack
{
    int top;
    int size;
    int *s;
};
void create(struct stack *st)
{
    printf("Enter size: \n");
    scanf("%d", &st->size);
    st->s = (int *)malloc(st->size * sizeof(int));
    st->top = -1;
}
void pushll(int x)
{
    struct node *t;
    t= (struct node *)malloc(sizeof(struct node));
    if(t==NULL)
        printf("Memory full \n");

    else
    {

        t->data= x;
        t->next= top;
        top = t;
    }
}
void push(struct stack *st , int val)
{
    if(st->top == st->size-1)
        printf("stack full \n");
    else
    {
        st->top++;
        st->s[st->top]= val;
    }
}

int pop(struct stack *st)
{
    int x=-1;
    if(st->top== -1)
        printf("stack underflow \n");
    else
        x=st->s[st->top--];
return x;
}
int popll()
{
    struct node *q= top;
    int x;
    if(top == NULL)
        return -1;
    x=top->data;
    top=top->next;
    free(q);
    return x;
}

void displayll()
{
    struct node *p = top;
    while(p)
    {
        printf("%d, ", p->data);
        p=p->next;
    }
}

void display(struct stack st)
{
    int i;
    for(i=st.top; i>-1;i--)
        printf("%d ", st.s[i]);
    printf("\n");
}


int main()
{
    struct stack st;
    //create(&st);
    pushll(10);
    pushll(20);
    pushll(30);
    printf("popped element is %d \n",popll());
    displayll();

    //printf("popped value: %d \n", pop(&st));
    //display(st);
    return 0;
}
