#include <stdio.h>
void main()
{
    stringwords();
    getch();
}
void stringwords()
{
    char ch[10000];int i,c=0;
    printf("Type a Sentence or a String to count number of Words present ::\nString/Sentence : ");
    gets(ch);
    for(i=0;ch[i]!='\0';i++)
    {
        if(ch[i]==' '&&ch[i+1]!=' ')
            c++;
    }
    printf("The Number of Words present in the String is = %d",c+1);
}
