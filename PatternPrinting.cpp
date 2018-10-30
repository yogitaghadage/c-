#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
///////////////////////////////////////////
//
// Innput : 4 4
//
// Output
// * * * *
// * * * *
// * * * *
// * * * *
//
///////////////////////////////////////////
void Pattern1(int iRow, int iCol)
{
	int i = 0, j = 0;
	if(iRow <= 0)
	{
		return;
	}

	if(iCol <= 0)
	{
		return;
	}
for(i = 1; i <= iRow; i++)
	{
		for(j = 1; j <= iCol; j++)
			{
				printf("*\t");
			}
			printf("\n");


	}
}
///////////////////////////////////////////
//
// Innput : 4 4
//
// Output
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
//
///////////////////////////////////////////
void Pattern2(int iRow, int iCol)
{
int i = 0, j = 0;
if(iRow <= 0)
{
return;
}
if(iCol <= 0)
{
return;
}
for(i = 1; i <= iRow; i++)
{
for(j = 1; j <= iCol; j++)
{
printf("%d\t",j);
}
printf("\n");
}
}




///////////////////////////////////////////
//
// Innput : 4 4
//
// Output
// * * * *
// * $ $ *
// * $ $ *
// * * * *
//
///////////////////////////////////////////
void Pattern3(int iRow, int iCol)
{
int i = 0, j = 0;
if(iRow <= 0)
{
return;
}
if(iCol <= 0)
{
return;
}
for(i = 1; i <= iRow; i++)
{
for(j = 1; j <= iCol; j++)
{
if((i == 1)||(j == 1)||(i == iRow)||(j == iCol))
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




///////////////////////////////////////////
//
// Innput : 4 4
//
// Output
// * $ $ $
// $ * $ $
// $ $ * $
// $ $ $ *
//
///////////////////////////////////////////
void Pattern4(int iRow, int iCol)
{
int i = 0, j = 0;
if(iRow <= 0)
{
return;
}
if(iCol <= 0)
{
return;
}
for(i = 1; i <= iRow; i++)
{
for(j = 1; j <= iCol; j++)
	{
if(i == j)
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

void Pattern5(int iRow,int iCol)
{
	int i=0,j=0; 
	char temp='A';

	for(i=1;i<=iRow;i++)
	{
		temp='A';
		for(j=1;j<=iCol;j++)
		{
			if((i==1)||(i==iRow)||(j==1)||(j==iCol))
			{
				printf("%c\t",temp);
				temp++;
			}
			else
			{
				printf("0\t");
			}
		}
		printf("\n");
	}
}

void Pattern6(int iRow,int iCol)
{
	int i=0,j=0; 
	int itemp=iCol;


	for(i=1;i<=iRow;i++)
	{
	      itemp=iCol;
		for(j=1;j<=iCol;j++)
		{
			if(i%2==0)
			{
				printf("%d\t",itemp);
				itemp--;
			
			}
			else
			{
				printf("%d\t");
			}
		}
		printf("\n");
	}
}

void Pattern7(int iRow,int iCol)
{
	int i=0,j=0;

	for(i=1;i<=iRow;i++)
	{
	   
		for(j=1;j<=iCol;j++)
		{
			printf("%d\t",i);
		}
		printf("\n");
	}
}

void Pattern8(int iRow,int iCol)
{
	int i=0,j=0;

	for(i=1;i<=iRow;i++)
	{
	   
		for(j=1;j<=iCol;j++)
		{
			if((j==2)||(j==iCol))
			{
				printf("*\t");
			}
			else
			{
				printf("%d\t",i);
			}
		}

		printf("\n");
	}
}


int main()
{
BOOL Running = TRUE;
int iChoice = 0, iValue1 = 0, iValue2 = 0;
printf("\n-- Marvellous Infosystems : Pattern Printing Application --\n\n");
while(Running)
{
printf("Enter number of Rows : \t");
scanf("%d",&iValue1);
printf("\nEnter number of Columns : \t");
scanf("%d",&iValue2);
printf("\nEnter your choice\n");
scanf("%d",&iChoice);

switch(iChoice)
{
case 1:
Pattern1(iValue1,iValue2);
break;
case 2:
Pattern2(iValue1,iValue2);
break;
case 3:
Pattern3(iValue1,iValue2);
break;
case 4:
Pattern4(iValue1,iValue2);
break;
	case 5:
		Pattern5(iValue1,iValue2);
		break;

	case 6:
		Pattern6(iValue1,iValue2);
		break;

	case 7:
		Pattern7(iValue1,iValue2);
		break;

		case 8:
		Pattern8(iValue1,iValue2);
		break;

		case 9:
		Pattern9(iValue1,iValue2);
		break;

case 0:
Running = FALSE;
break;

default:
printf("Wrong choice\n");
break;
}
}
printf("\nTerminating Pattern prinnting Application....\n");
return 0;
}