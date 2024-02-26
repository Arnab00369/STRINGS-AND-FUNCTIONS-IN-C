#include <stdio.h>
void main()
{
    stringup();
    getch();
}
void stringup()
{
    char ch[1000];int i;
    printf("Type a String in Lower Case to convert it into Upper Case ::\nType the String : ");
    scanf("%s",ch);
    printf("The String in Upper Case : ");
    for(i=0;ch[i]!=0;i++)
    {
        if(ch[i]>=97&&ch[i]<=122)
            printf("%c",ch[i]-32);
        else
            printf("%c",ch[i]);
    }
}
