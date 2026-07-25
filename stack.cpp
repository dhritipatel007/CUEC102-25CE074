#include<stdio.h>
#include<string.h>

char stack[25];
int top = -1;

void push(char a);
char pop();

void push(char c)
{
    top++;
    stack[top] = c;
}

char pop()
{
    char a;
    a = stack[top];
    top--;
    return a;
}

void main()
{
    char str[30],c;
    int length,i;
    printf("Enter the string: ");
    gets(str);
    length = strlen(str);

    for(i=0; i<length; i++)
    {
        push(str[i]);
    }

    cout<<endl;

    for(i=0; i<l; i++)
    {
        c = pop();
        printf("%c", c);
    }
}


//c=a
//ch = c

