#include <stdio.h>
void main()
{
    stringrev();
    getch();
}
void stringrev()
{
        char ch[1000];int i,c=0;
            printf("Type a String ::\n");
            scanf("%s",&ch);
                while(ch[i]!='\0')
                    i++;
            printf("The Reversed String is ::\n");
                for(i=i;i>=0;i--)
                    printf("%c",ch[i]);
}
