#include<stdio.h>

void pattern1(int ino)
{
	int i=0; 
	char temp='A';
	for(i=1;i<=ino;i++)
	{
		printf("%c",temp);
		temp++;
	}
}

void pattern2(int ino)
{
	int i=0; 
	char temp='A';
	for(i=1;i<=ino;i++)
	{
	
		if(i%2==0)
		{
			temp=temp+32;
			printf("%c",temp);
			temp++;
			temp=temp-32;
		}
		else
		{
			
			printf("%c",temp);
		    temp++;
		}
	}
		
	
}
void pattern3(int iRow,int iCol)
{
	int i=0,j=0;
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			printf("*\t");
		}
		printf("\n");
	}
}

void pattern4(int iRow,int iCol)
{
	int i=0,j=0;
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<iCol;j++)
		{
			printf("%d\t",j);
		}
		printf("\n");
	}
}

void pattern5(int iRow,int iCol)
{
	int i=0,j=0;
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			if(j%2==0)
			{
				printf("$\t");
			}
			else
			{
				printf("%d\t",j);
			}

		}
		printf("\n");
	}
}

void pattern6(int iRow,int iCol)
{
	int i=0,j=0;
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			if(j%2==0)
			{
				printf("$\t");
			}
			else
			{
				printf("%d\t",j-1);
			}

		}
		printf("\n");
	}
}

void pattern7(int iRow,int iCol)
{
	int i=0,j=0;
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			if(i%2==0)
			{
				printf("#\t");
			}
			else
			{
				printf("$\t");
			}

		}
		printf("\n");
	}
}

void pattern8(int iRow,int iCol)
{
	int i=0,j=0;
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			printf("*\t");
		
		}
		iCol--;
		printf("\n");
	}
}

void pattern9(int iRow,int iCol)
{
	int i=0,j=0;
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*\t");
		}
		printf("\n");
	}
}

void pattern10(int iRow,int iCol)
{
	int i=0,j=0;
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			if((i==1)||(i==iRow)||(j==1)||(j==iCol))
			{
                printf("*\t");
			}

			else
			{
				printf("$\t");
			}
		}
		printf("\n");
	}
}

int main()
{
	int ivalue1,ivalue2,choice=0;

	printf("enter no of rows");
	scanf("%d",&ivalue1);

	printf("enter no of columns");
	scanf("%d",&ivalue2);

	printf("enter choice");
	scanf("%d",&choice);

	switch(choice)
	{
	    case 1:
		pattern1(ivalue1);
		break;

		case 2:
		pattern2(ivalue1);
		break;

		case 3:
		pattern3(ivalue1,ivalue2);
		break;

		case 4:
		pattern4(ivalue1,ivalue2);
		break;

		case 5:
		pattern5(ivalue1,ivalue2);
		break;

		case 6:
		pattern6(ivalue1,ivalue2);
		break;

		case 7:
		pattern7(ivalue1,ivalue2);
		break;

        case 8:
		pattern8(ivalue1,ivalue2);
		break;

		case 9:
		pattern9(ivalue1,ivalue2);
		break;

		case 10:
		pattern10(ivalue1,ivalue2);
		break;

     	default:
		printf("wrong choice");
		break;
	}

	return 0;
}