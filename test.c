#include<stdio.h>
#define size 4
struct stack
{
    int top;
    int value;
    struct stack *next;
};
typedef struct stack Stack;
Stack *head;
Stack *tail;
Stack *pointer;

void push(int);
int pop(int);
void display(void);
Stack s;
int main(int argc,char *argv[])
{
    int ch;
    int value;
    int index;
    while(ch!=4)

    {

        printf("1......push\n");
        printf("2......pop\n");
        printf("3......display\n");
        printf("4......exit\n");
        printf("enter the choice\n");
        scanf("%d",&ch);

        switch(ch)
        {
        case 1:
            printf("enter the value you want to push\n");
            scanf("%d",&value);
            push(value);
            printf("you have pushed a value",value);
            break;
        case 2:
            printf("popped value is\n");
            value=pop(index);
            printf("%d",value);
            printf("you have just popped a value\n,index");
            break;
        case 3:
            printf("current status of stack");
            display();
            break;
        case 4:
            printf("trying to exit");
            return;
        default:
            printf("wrong input");

        }
    }
}
void push(int value)
{
    if(head==NULL)
    {
        head = (Stack*)malloc(sizeof(Stack));
        head->value=value;
        head->next=NULL;
        tail = head;
    }
    else
    {
        tail->next = (Stack*)malloc(sizeof(Stack));
        tail->next->value=value;
        tail->next->next=NULL;
        tail = tail->next;

    }






int pop(int index)
{
    int i;
    if(head==NULL)
    {
        printf("stack is empty");
    }
    Stack *pointer = head;
    for(i=0; i<index; i++)
    {
        if(pointer->next==NULL)
        {
            return -1;
        }
        pointer = pointer->next;
    }

    return pointer->value;
}







}


void display()
{
    Stack *im;
    im = head;
    if(head==NULL)
    {
        printf("stack is empty");
    }

        else
    {
        printf("\n status of stack is \n");
        while(im->next!=NULL)
        {
            printf("%d\n",im->value);
            im = im->next;
        }
        printf("%d\n",im->value);
        return;

        }
    }

