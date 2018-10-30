#include<stdio.h>

void Pattern1(int ino)
{
	int i=0,j=0,idigit=0,icnt=0,irev=0,itemp=0;

	while(ino!=0)
	{
		idigit=ino%10;
		icnt++;
		irev=((irev*10)+idigit);
		ino=ino/10;
	}
	itemp=irev;
	for(i=1;i<=icnt;i++)
	{
		itemp=irev;
		for(j=1;j<=icnt;j++)
		{
			idigit=itemp%10;
			printf("%d\t",idigit);
			itemp=itemp/10;
		}
		printf("\n");
	}
}

void Pattern2(int ino)
{
	int i=0,j=0,idigit=0,icnt=0,itemp1=0,itemp2=0;

	itemp1=ino;

	while(ino!=0)
	{
		idigit=ino%10;
		icnt++;
		ino=ino/10;
	}
	
	for(i=1;i<=icnt;i++)
	{
		itemp2=itemp1;
		for(j=1;j<=icnt;j++)
		{
			idigit=itemp2%10;
			printf("%d\t",idigit);
			itemp2=itemp2/10;
		}
		printf("\n");
	}
}

void Pattern3(int ino)
{
	int i=0,j=0,idigit=0,icnt=0,itemp1=0,itemp2=0;

	itemp1=ino;

	while(ino!=0)
	{
		idigit=ino%10;
		icnt++;
		ino=ino/10;
	}
	
	for(i=1;i<=icnt;i++)
	{
		itemp2=itemp1;
		for(j=1;j<=i;j++)
		{
			idigit=itemp2%10;
			printf("%d\t",idigit);
			itemp2=itemp2/10;
		}
		printf("\n");
	}
}

void Pattern4(int ino)
{
	int i=0,j=0,idigit=0,icnt=0,icnt1=0,itemp1=0,itemp2=0;

	itemp1=ino;

	while(ino!=0)
	{
		idigit=ino%10;
		icnt++;
		ino=ino/10;
	}

	icnt1=icnt;
	
	for(i=1;i<=icnt;i++)
	{
		itemp2=itemp1;
		for(j=1;j<=icnt1;j++)
		{
			idigit=itemp2%10;
			printf("%d\t",idigit);
			itemp2=itemp2/10;
		}
		icnt1--;
		printf("\n");
	}
}

void Pattern5(int ino)
{
	int i=0,j=0,idigit=0,icnt=0,itemp1=0,itemp2=0;

	itemp1=ino;

	while(ino!=0)
	{
		idigit=ino%10;
		icnt++;
		ino=ino/10;
	}
	
	for(i=1;i<=icnt;i++)
	{
		itemp2=itemp1;
		for(j=1;j<=icnt;j++)
		{
			if((i==1)||(i==icnt)||(j==1)||(j==icnt))
			{
				idigit=itemp2%10;
				printf("%d\t",idigit);
				itemp2=itemp2/10;
			}
			else
			{
				printf("0\t");
			}
		}
		printf("\n");
	}
}
int main()
{
	int ivalue=0,choice=0;

	printf("Enter number");
	scanf("%d",&ivalue);

	printf("Enter choice");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1:
		Pattern1(ivalue);
		break;
			
		case 2:
		Pattern2(ivalue);
		break;


		case 3:
		Pattern3(ivalue);
		break;


		case 4:
		Pattern4(ivalue);
		break;


		case 5:
		Pattern5(ivalue);
		break;

		default:
			printf("wrong choice");
			break;
	}
	return 0;
}
