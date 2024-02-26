#include <stdio.h>
void main()
{
    stringlen();
    getch();
}
void stringlen()
{
    char ch[1000];int i;
        printf("Type a String ::\n");
        scanf("%s",&ch);
    for(i=0;ch[i]!='\0';i++);
        printf("Length of the String = %d",i);
}
