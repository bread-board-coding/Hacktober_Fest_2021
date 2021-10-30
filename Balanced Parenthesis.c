#include <stdio.h>
#include <stdlib.h>

struct stack
{
char *a;
int size;
int top;
};

int isempty(struct stack *st)
{
return st->top == -1;
}

void push(struct stack *st, char x)
{
st->top++;
st->a[st->top] = x;
}

void pop(struct stack *st)
{
int x = st->a[st->top];
st->top--;
}

int balanced(char str[])
{

struct stack *st = (struct stack *)malloc(sizeof(struct stack));
st->a = (char *)malloc(sizeof(char) * 100);
st->top = -1;
st->size = 100;

int i;
for ( i = 0; str[i] != '\0'; i++)
{
if (str[i] == '(')
push(st, str[i]);
else if (str[i] == ')')
{
if (isempty(st))
return 0;
pop(st);
}
}

return isempty(st);
}

int main()
{
char str[100];

printf("Enter the string:");
scanf("%s", str);

if (balanced(str))
printf("The string is balanced!\n");

else
printf("The string is unbalanced!\n");

return 0;
}
