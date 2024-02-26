#include <stdio.h>
void  main()
{
    stringpalin();
    getch();
}
void stringpalin()
{
    char ch[1000],ch1[1000];int i,f=1,a,b,c;
    printf("Type a String to check whether it is palindrome or not ::\nType a String : ");
    scanf("%s",&ch);
    while(ch[i]!='\0')
    {
        i++;
    }
    printf("The Length of the String '%s' is = %d\n",ch,i);
    for(a=i-1;a>=0;a--)
    {
       ch1[i-a-1]=ch[a];
    }
    for(c=0;c<i;c++)
    {
        if(ch1[c]!=ch[c])
        {
            f=0;
            break;
        }

    }
    printf("The Reversed String is : %s\n",ch1);
    if(f==0)
        printf("The String is not Palindrome");
    else if(f==1)
        printf("The String is Palindrome");
}
