#include<stdio.h>
#include<stdlib.h>
#include<strings.h>

int main()
{
	char s[20];           
	int i,l;
	
	printf("Enter A String(consist Of 0,1,A,B & C)\n");
	gets(s);
	
	l=strlen;
	
	if(l%2==0)
	{
		printf("\nInvalid String\n");
	}
	else{
		for(i-0;i<l;i+=2)
		{
			if(s[i+1]=='A')
			{
				if(s[i]=='0' || s[i+2] == '0')
				{
					s[i+2] = '0';
				}
				else
				{
					s[i+2] = '1';
				}
			}
			
			else if(s[i+1] == 'B')
			{
				if(s[i]=='1' || s[i+2] == '1')
				{
					s[i+2] = '1';
				}
				else
				{
					s[i+2] = '0';
				}
			}
			
			else if(s[i+1]=='c')
			{
				if(s[i] == s[i+2] )
				{
					s[i+2] = '0';
				}
				else
				{
					s[i+2] = '1';
				}
			}
			else
			{
				printf("\nInvalid Operation\n");
			}
		}
		
		printf("\nResult --> %c",s[l-1]);
	}
	return 0;
}
