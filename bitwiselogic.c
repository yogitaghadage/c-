#include<stdio.h>

typedef unsigned int UINT;
typedef int BOOL;

#define TRUE 1
#define FALSE 0;

/*1.Write a program which accept one number and position from user and
check whether bit at that position is on or off. If bit is on return TURE
otherwise return FALSE.
Input : 10 2
Output : TRUE*/

BOOL ChkBit(UINT iNo, int iPos)
{
  UINT iresult=0;
  UINT mask=0x1;

  mask=mask<<(iPos-1);
  iresult=iNo & mask;
  if(iresult==mask)
  {
	  return TRUE;
  }
  else
  {
	  return FALSE;
  }
}


/*2. Write a program which accept one number and position from user and off
that bit. Return modified number.
Input : 10 2
Output : 8*/

UINT OffBit(UINT iNo, int iPos)
{
  UINT iresult=0;
  UINT mask=0X1;
  if((iPos<1)||(iPos>32))
  {
	  return iNo;
  }
  mask=mask<<(iPos-1);

  mask=~mask;
  iresult=iNo & mask;
  return iresult;
}


/*3. Write a program which accept one number and position from user and on
that bit. Return modified number.
Input : 10 3
Output : 14*/

UINT OnBit(UINT iNo, int iPos)
{
  UINT iresult=0;
  UINT mask=0X1;

  if((iPos<1)||(iPos>32))
  {
	  return iNo;
  }
  mask=mask<<(iPos-1);

  iresult=iNo | mask;
  return iresult;
}



/*4. Write a program which accept one number and position from user and
toggle that bit. Return modified number.
Input : 10 3
Output : 14*/

UINT ToggleBit(UINT iNo, int iPos)
{
  UINT iresult=0;
  UINT mask=0X1;
  if((iPos<1)||(iPos>32))
  {
	  return iNo;
  }
  mask=mask<<(iPos-1);

  iresult=iNo ^ mask;
  return iresult;
}



/*5. Write a program which accept one number from user and toggle contents
of first and last nibble of the number. Return modified number.*/

UINT ToggleBitX(UINT iNo)
{
  UINT iresult=0;
  UINT mask=0Xf00f;
  iresult=iNo ^ mask;
  return iresult;
}

int main()
{
	UINT value1=0,value2=0;
	BOOL bret=0;
	int iret=0;
	int choice=0;

	printf("enter number");
	scanf("%d",&value1);

	printf("enter position");
	scanf("%d",&value2);

	printf("enter choice");
	scanf("%d",&choice);

	switch (choice)
	{
	case 1:
		bret=ChkBit(value1,value2);
		if(bret==TRUE)
		{
			printf("bit is on");
		}
		else
		{
			printf("bit is off");

		}
		break;
		
		
	case 2:
		iret=OffBit(value1,value2);
		printf("%d",iret);
		break;

	case 3:
		iret=OnBit(value1,value2);
		printf("%d",iret);
		break;
		
	case 4:
		iret=ToggleBit(value1,value2);
		printf("%d",iret);
		break;

	case 5:
		iret=ToggleBitX(value1);
		printf("%d",iret);
		break;

	default:
		break;
	}
	

	return 0;
}