#include<stdio.h>

typedef unsigned int UINT;

/*1.Write a program which accept one number from user and off 7th bit of that
number. Return modified number.*/

UINT OffBit(UINT iNo)
{
  UINT iresult=0;
  UINT mask=0x00000040;
  mask=~mask;
  iresult=iNo & mask;
  return mask;
}
//2. Write a program which accept one number from user and off 7th and 10th
//bit of that number. Return modified number.
UINT OffBitX(UINT iNo)
{
  UINT iresult=0;
  UINT mask=0x00000240;
  mask=~mask;
  iresult=iNo & mask;
  return mask;
}
//3. Write a program which accept one number from user and toggle 7th bit of
//that number. Return modified number.
UINT ToggleBit(UINT iNo)
{
  UINT iresult=0;
  UINT mask=0x00000040;

  iresult=iNo ^ mask;
  return mask;
}
//4. Write a program which accept one number from user and toggle 7th and
//10th bit of that number. Return modified number.
UINT ToggleBitX(UINT iNo)
{
  UINT iresult=0;
  UINT mask=0x00000240;
  iresult=iNo & mask;
  return mask;
}

//5. Write a program which accept one number from user and on its first 4
//bits. Return modified number.
UINT OnBit(UINT iNo)
{
  UINT iresult=0;
  UINT mask=0x0000000F;
  iresult=iNo | mask;
  return mask;
}

int main()
{
	UINT value=0;
	UINT iret=0;
	int choice=0;

	printf("enter number");
	scanf("%d",&value);

	printf("enter choice");
	scanf("%d",&choice);

	switch(choice)
	{
	case 1:
		iret=OffBit(value);
		printf("%d",iret);
		break;

	case 2:
		iret=OffBitX(value);
		printf("%d",iret);
		break;

	case 3:
		iret=ToggleBit(value);
		printf("%d",iret);
		break;

	case 4:
		iret=ToggleBitX(value);
		printf("%d",iret);
		break;

	case 5:
		iret=OnBit(value);
		printf("%d",iret);
		break;

	default:
		break;
	}
	return 0;

}