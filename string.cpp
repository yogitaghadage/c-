#include<stdio.h>

void Pattern1(char*str)
{
	int i=0,j=0,icnt=0;
	char *temp=str;

	while(*str!='\0')
	{
		icnt++;
		str++;
	}

	for(i=1;i<icnt;i++)
	{
		for(j=1;j<icnt;j++)
		{
			printf("%c\t",*temp);
			temp++;
		}
		printf("\n");
	}
}

int main()
{
	int choice=0;
	char arr[30];

	printf("Enter string");
	scanf("%[^'\n']s",arr);

	printf("enter choice");
	scanf("%d",&choice);

	switch(choice)
	{
	    case 1:
		Pattern1(arr);
		break;

	/*	case 2:
		Pattern2(arr);
		break;

		case 3:
		Pattern3(arr);
		break;

		case 4:
		Pattern4(arr);
		break;

		case 5:
		Pattern5(arr);
		break;*/

		default:
		printf("wrong choice");
		break;
	}

	return 0;
	}