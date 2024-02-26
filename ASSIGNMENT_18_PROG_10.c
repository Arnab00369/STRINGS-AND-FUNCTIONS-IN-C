#include <stdio.h>
void main()
{
	charrep();
	getch();
}
void charrep()
{
	char ch[1000];int i=0,j,k,c;
	printf("Type a String/Sentence to find out the repeated characters ::\nType the String/Sentence : ");
	gets(ch);
	while(ch[i]!='\0')
	{
		i++;
	}
	for(j=0;j<i;j++)
    {
        if(ch[j]>=65&&ch[j]<=90)
        ch[j]=(int)ch[j]+32;
    }
	printf("\nLength of the String/Sentence = %d",i);
	for(j=0;j<i;j++)
	{
		c=1;
		for(k=j+1;k<i;k++)
		{
			if(ch[j]==ch[k]&&ch[j]!=' ')
			{
				c++;
				ch[k]='0';
			}

		}
		if(c>1&&ch[j]!='0'&&ch[j]!=' ')
		printf("\n\nThe character %c is repeated with frequency = %d",ch[j],c);
	}
}
