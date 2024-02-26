#include <stdio.h>
void main()
{
    stringcomp();
    getch();
}
void stringcomp()
{
    char c1[1000],c2[1000];int i,j,max,f;
    printf("Type two String ::\nType String 1 : ");
    scanf("%s",&c1);
    printf("Type String 2 : ");
    scanf("%s",&c2);
    for(i=0;c1[i]!='\0';i++);
    for(j=0;c2[j]!='\0';j++);
    if(i>j)
        max=i;
    else
        max=j;
    for(int m=0;m<=max;m++)
    {
        if(i==j)
        {
        if(c1[m]!=c2[m])
        {
            f=0;
            break;
        }
        else
            f=1;
        }
        else
            f=0;
    }
    if(f==0)
        printf("The Strings are not equal");
    else if(f==1)
        printf("The Strings are equal");
}
