#include<stdio.h>
#include<stdio.h>
char input[10];
int i=0,error=0;
void E();
void T();
void Eprime();
void Tprime();
void F();
int main()
{
clrscr();
printf("Enter an arithmetic expression :\n");

gets(input);
E();
if(strlen(input)==i&&error==0)
printf("\nAccepted..!!!");
else
printf("\nRejected..!!!");
getch();
}
/*if(input[i]=='i')
{
i++;
if(input[i]=='d')
i++;
}
else if(input[i]=='(')
{
i++;
E();
if(input[i]==')')
i++;
}
else
error=1;*/
void E()
{
T();
Eprime();
}
void Eprime()
{
if(input[i]=='+')
{
i++;
T();
Eprime();
}
}
void T()
{
F();
Tprime();
}
void Tprime()
{
if(input[i]=='*')
{
i++;
F();
Tprime();
}
}
void F()
{
if(input[i]=='(')
{
i++;
E();
if(input[i]==')')
i++;
}
else if(isalpha(input[i]))
{
i++;
while(isalnum(input[i])||input[i]=='_')
i++;
}
else
error=1;
}
