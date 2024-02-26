#include <stdio.h>
void main()
{
    char ch[1000];
    printf("Type a String/Sentence to reverse it Word-wise  ::\nType the String/Sentence : ");
    gets(ch);
    char* temp=ch;
    fullrev(ch);
    printf("The Reversed String/Sentence Word-wise : %s",ch);
    getch();
}
void fullrev(char* ch)
{
    char* wrd_beg=ch;
    char* temp=ch;
    while(*temp)
    {
        temp++;
        if(*temp=='\0')
        {
            reverse(wrd_beg,temp-1);
        }
        else if(*temp==' ')
        {
            reverse(wrd_beg,temp-1);
            wrd_beg=temp+1;
        }
    }
    reverse(ch,temp-1);
}
void reverse(char* begin,char* end)
{
    char temp;
    while(begin<end)
    {
        temp=*begin;
        *begin++=*end;
        *end--=temp;
    }
}
