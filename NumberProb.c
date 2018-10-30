#include<stdio.h>

//1.Program to divide two numbers

int Divide(int iNo1, int iNo2)
{
 int iAns = 0;
 if(iNo2<0)
 {
 return -1;
 }
 iAns = iNo1 / iNo2;
 return iAns;
}

//2. Program to print 5 times “Marvellous” on screen.

void Display()
{
 int i = 0;
 for(i = 1; i<=5;i++)
 {
 printf("Marvellous\n");
 }
}

//3. Program to print 5 to 1 numbers on screen.
void Display1()
{
 int i = 5;
 while( i!=0 )
 {
 printf("%d",i);
 i--;
 }
}

//4. Accept one number and check whether is is divisible by 5 or not.

typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL Check(int iNo)
{
 if(( iNo % 5) == 0)
 {
 return TRUE;
 }
 else
 {
 return FALSE ;
 }
}

//5. Accept one number from user and print that number of * on screen.

void Accept(int iNo)
{
 int iCnt = 0;
 for( iCnt=1 ; iCnt<=iNo ;iCnt++ )
 {
 printf(" * ");
 }
}

//6. Accept one number from user and print that number of * on screen.
void Accept1(int iNo)
{
 int iCnt = 0;
 while( iCnt < iNo )
 {
 printf(" * ");
 iCnt++;
 }
}

//7. Accept one number from user and print that number of * on screen.
void Accept2(int iNo)
{
 while( iNo > 0 )
 {
 printf(" * ");
 iNo --;
 }
}

//8. Accept one character from user and display that character on screen.
void Display2 ( char CValue)
{
 printf("%c",CValue);
}

//9. Accept one number and return that number by subtracting 5 from it.
int Substract (int iNo)
{
 int iAns = 0;
 iAns = iNo - 5;

 return iAns ;
}

//10. Accept on number from user if number is less than 10 then print “Hello”
// otherwise print “Demo”.

void Display3 ( int iNo)
{
 if(iNo < 10)
 {
 printf("Hello");
 }
 else
 {
 printf("Demo");
 }
}

int main()
{
	int ivalue1=0,ivalue2=0;
	char ch='\0';
	int choice=0,iret=0;
	printf("enter one number");
	scanf("%d",&ivalue1);

	printf("enter second number");
	scanf("%d",&ivalue2);

	printf("enter character");
	scanf("%c\n",&ch);
	fflush(stdin);

	printf("enter choice");
	scanf("%d",&choice);

	switch(choice)
	{
	case 1:
		iret= Divide(ivalue1,ivalue2);
		printf("%d",iret);
		break;

	case 2:
		Display();
		break;

	case 3:
		Display1();
		break;

	case 4:
		iret=Check(ivalue1);
		if(iret==TRUE)
		{
			printf("number is Divisible by 5");
		}
		else
		{
			printf("Number is not divisible by 5");
		}
		break;

	case 5:
		Accept(ivalue1);
		break;

	case 6:
		Accept1(ivalue1);
		break;

	case 7:
		Accept2(ivalue1);
		break;

	case 8:
		Display2(ch);
		break;

	case 9:
		iret=Substract(ivalue1);
		printf("%d",iret);
		break;

	case 10:
		Display3(ivalue1);
		break;
	}

	return 0;
}





		

