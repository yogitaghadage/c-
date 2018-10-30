#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1;
#define FALSE 0;


/*1.Write a program which accept one number from user and display its binary
equivalent.
Input : 10
Output : 1010*/

void DisplayBinary(UINT iNo)
{
	int idigit=0;

	while(iNo!=0)
	{
	    idigit=iNo%2;
		printf("%d\t",idigit);
		iNo=iNo/2;
	}
}


/*2. Write a program which accept one number from user and display its
binary equivalent without using any % and / operation. (Use bitwise
operators)
Input : 10
Output : 1010*/

void DisplayBinaryX(UINT iNo)
{
 UINT mask=0x1;
 int k=32;
 while(k!=0)
  {
    if((iNo>>1&0x01)!=0)
      printf("1");
    else
     printf("0");
    k--;
  }

}

/*3. Write a program which accept one number from user and check whether
its 4th bit is on or off
Input : 10
Output : TRUE*/

BOOL ChkBit(UINT iNo)
{
 UINT mask=8;
 UINT result=0;

 result =iNo|mask;
 if(result==iNo)
 {
	 return TRUE;
 }
 else
 {
	 return FALSE;
 }
}

/*4. Write a program which accept one number from user and check whether
its 4th and 7th bit is on or off
Input : 10
Output : FALSE*/

BOOL ChkBitx(UINT iNo)
{
 UINT mask=72;
 UINT result=0;

 result=iNo|mask;
 if(result==iNo)
 {
	 return TRUE;
 }
 else
 {
	 return FALSE;
 }
}



/*5. Write a program which accept one number from user and count number
on bits from that number.
Input : 10
Output : 4*/

int CountBit(UINT iNo)
{
	int idigit=0,icnt=0;

	while(iNo!=0)
	{
	    idigit=iNo%2;

			icnt++;
	
		iNo=iNo/2;
	}
	return icnt;
}

int main()
{
	UINT value=0;
	BOOL bret=0;
	int iret=0;
	int choice=0;

	printf("enter number");
	scanf("%d",&value);

	printf("enter choice");
	scanf("%d",&choice);

	switch (choice)
	{
	case 1:
		DisplayBinary(value);
		break;
		
	case 2:
		DisplayBinaryX(value);
		break;

	case 3:
		bret=ChkBit(value);
		if(bret==1)
		{
			printf("bit is on");
		}

		else
		{
			printf("bit is off");
		}
		break;
		
	case 4:
		bret=ChkBitx(value);
		if(bret==1)
		{
			printf("bit is on");
		}

		else
		{
			printf("bit is off");
		}
		break;

	case 5:
		iret=CountBit(value);
		printf("%d",iret);
		break;

	default:
		break;
	}

	return 0;
}