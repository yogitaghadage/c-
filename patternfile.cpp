#include<stdio.h>

void pattern1(int Row,int Col)
{
	int i=0;
	int j=0;
	for(i=1;i<=Row;i++)
	{
		for(j=1;j<=Col;j++)
		{
			if((i==1)||(i==Row)||(j==1)||(j==Col))
			{
				printf("*\t");
			}
			else
			{
				printf(" \t");
			}
		}
		printf("\n");
	}
}

void pattern2(int Row,int Col)
{
	int i=0;
	int j=0;
	for(i=1;i<=Row;i++)
	{
		for(j=1;j<=Col;j++)
		{
			if((i==1)||(i==Row)||(j==1)||(j==Col))
			{
				printf("%d\t",j);
			}
			else
			{
				printf("*\t");
			}
		}
		printf("\n");
	}
}

void pattern3(int Row,int Col)
{
	int i=0;
	int j=0;
	for(i=1;i<=Row;i++)
	{
		for(j=1;j<=Col;j++)
		{
			if((i==1)||(i==Row)||(j==1)||(j==Col))
			{
				printf("%d\t",i);
			}
			else
			{
				printf("*\t");
			}
		}
		printf("\n");
	}
}

void pattern4(int Row,int Col)
{
	int i=0;
	int j=0;
	int k=1;
	for(i=1;i<=Row;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",k);
			k++;

		}
		printf("\n");
	}
}

void pattern5(int Row,int Col)
{
	int i=0;
	int j=0;
	int k=1;
	for(i=1;i<=Row;i++)
	{
		for(j=1;j<=Col;j++)
		{
			if(j<=i)
			{
				printf("%d\t",k);
			    k++;
			}
			else
			{
				printf("*\t");
			}
		}
		
		printf("\n");
	}
}

void pattern6(int Row,int Col)
{
	int i=0;
	int j=0;

	for(i=1;i<=Row;i++)
	{
		for(j=1;j<=Col;j++)
		{
			printf("%d",j);
			
		}
		Col--;
		printf("\n");
	}
}

void pattern7(int Row,int Col)
{
	int i=0;
	int j=0;

	for(i=1;i<=Row;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",i);
			
		}
		
		printf("\n");
	}
}

void pattern8(int Row,int Col)
{
	int i=0;
	int j=0;

	for(i=1;i<=Row;i++)
	{
		for(j=1;j<=Col;j++)
		{
			if(j<=i)
			{
				printf("%d\t",i);
			}
			else
			{
				printf("*\t");
			}
		}
		printf("\n");
	}
}

void pattern9(int Row,int Col)
{
	int i=0;
	int j=0;

	for(i=1;i<=Row;i++)
	{
		for(j=1;j<=Col;j++)
		{
			if(j==i)
			{
				printf("$\t");
			}
			else if(j>i)
			{
				printf("*\t");
			}
			else
			{
				printf("#\t");
			}
		}
		printf("\n");
	}
}

void pattern10(int Row,int Col)
{
	int i=0;
	int j=0;

	for(i=1;i<=Row;i++)
	{
		for(j=1;j<=Col;j++)
		{
			if(j>=i)
			{
				printf("*\t");
			}
			else
			{
				printf(" \t");
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
		pattern1(ivalue1,ivalue2);
		break;

		case 2:
		pattern2(ivalue1,ivalue2);
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


	 
