#include <stdio.h>
void main()
{
    stringalpha();
    getch();
}
void stringalpha()
{
    char ch[1000];int i,f;
    printf("Enter a String : ");
    scanf("%s",ch);
    for(i=0;ch[i]!='\0';i++)
    {
        if((ch[i]>=65&&ch[i]<=90)||(ch[i]>=97&&ch[i]<=122))
        {
            for(i=i+1;ch[i]!='\0';i++)
            {
                if(ch[i]>='0'&&ch[i]<='9')
                {

                    f=1;
                    break;
                }
                else
                    f=0;
            }
        }
        else if(ch[i]>='0'&&ch[i]<='9')
        {
            for(i=i+1;ch[i]!='\0';i++)
            {
                if((ch[i]>=65&&ch[i]<=90)||(ch[i]>=97&&ch[i]<=122))
                {

                    f=1;
                    break;
                }
                else
                    f=0;
            }
        }
        else
            f=0;
    }
    if(f==0)
         printf("The String is not Alpha-Numeric");
    else if(f==1)
         printf("The String is Alpha-Numeric");

}
