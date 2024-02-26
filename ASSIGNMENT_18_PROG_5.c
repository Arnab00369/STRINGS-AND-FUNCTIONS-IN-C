#include <stdio.h>
void main()
{
    stringlo();
    getch();
}
void stringlo()
{
    char ch[1000];int i;
    printf("Type a String in Upper Case to convert it into Lower Case ::\nType the String : ");
    scanf("%s",ch);
    printf("The String in Lower Case : ");
    for(i=0;ch[i]!=0;i++)
    {
        if(ch[i]>=65&&ch[i]<=90)
            printf("%c",ch[i]+32);
        else
            printf("%c",ch[i]);
    }
}

