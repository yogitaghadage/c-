#include<stdio.h>

typedef unsigned int UINT;
typedef long int LONG;
typedef int BOOL;

#define TRUE 1
#define FALSE 0

/*1.Write a program which accept one number from user and return
multiplication of its digits. (If number contains 0 then ignore
that 0)
Input : 712
Output : 14
Input : 7024
Output : 56*/

UINT MultDigit (LONG iNo)
{
  UINT idigit=0,iMult=1;
  if(iNo<0)
  {
	  iNo=-iNo;
  }
  if(idigit==0)
  {
	  idigit=1;
  }
  while(iNo!=0)
  {
	  idigit=iNo%10;
	  iMult=iMult*idigit;
	  iNo=iNo/10;
  }
  return iMult;
}


/*2. Write a program which accept one number from user and
return addition of its even digits.
Input : 7429
Output : 6
Input : 90281
Output : 10*/

UINT EvenDigit (LONG iNo)
{
  UINT idigit=0,isum=0;
  if(iNo<0)
  {
	  iNo=-iNo;
  }
  
  while(iNo!=0)
  {
	  idigit=iNo%10;
	  if(idigit%2==0)
	  {
	    isum=isum+idigit;
	  }
	  iNo=iNo/10;
  }
  return isum;
}

/*3. Write a program which accept one number from user and
return the occurrence of digit 5.
Input : 712
Output : 0
Input : 7525
Output : 2*/

UINT DigitX (LONG iNo)
{
 UINT idigit=0,icnt=0;
  if(iNo<0)
  {
	  iNo=-iNo;
  }
  
  while(iNo!=0)
  {
	  idigit=iNo%10;
	  if(idigit==5)
	  {
		icnt++;
	  }
	  iNo=iNo/10;
  }
  return icnt;
}

/*4. Accept one numbers from user and display the output as.
Input : 543
Output : Three Four Five
Input : 7309
Output : Nine Zero Three Seven*/

void DisplayNo (LONG iNo)
{
	UINT idigit=0,iMult=1;
  if(iNo<0)
  {
	  iNo=-iNo;
  }
 
  while(iNo!=0)
  {
	  idigit=iNo%10;
	  switch (idigit)
	  {
	  case 0:
		  printf("Zero\t");
		  break;

      case 1:
		  printf("one\t");
		  break;

	  case 2:
		  printf("two\t");
		  break;

      case 3:
		  printf("three\t");
		  break;

	  case 4:
		  printf("four\t");
		  break;

	  case 5:
		  printf("five\t");
		  break;

	  case 6:
		  printf("six\t");
		  break;

	  case 7:
		  printf("seven\t");
		  break;

	  case 8:
		  printf("eight\t");
		  break;

	  case 9:
		  printf("nine\t");
		  break;

	   default:
		   break;
	  }
	  
	  iNo=iNo/10;
  }
 
}

/*5. Accept one numbers from user and return its reverse number.
Input : 543
Output : 345
Input : 78
Output : 87
Input : 7890
Output : 987*/

LONG Reverse (LONG iNo)
{
  UINT idigit=0,irev=0;
  if(iNo<0)
  {
	  iNo=-iNo;
  }
  
  while(iNo!=0)
  {
	  idigit=iNo%10;
	  irev=(irev*10)+idigit;
	  iNo=iNo/10;
  }
  return irev;
}

/*6. Accept one numbers from user and count occurrence of 0.
Input : 543
Output : 0
Input : 7309
Output : 1
Input : 73008
Output : 2*/

UINT DigitXX (LONG iNo)
{
  UINT idigit=0,icnt=0;
  if(iNo<0)
  {
	  iNo=-iNo;
  }
  
  while(iNo!=0)
  {
	  idigit=iNo%10;
	  if(idigit==0)
	  {
		icnt++;
	  }
	  iNo=iNo/10;
  }
  return icnt;
}

/*7. Accept one numbers from user and count digits which are
greater than 5.
Input : 5437
Output : 2
Input : 730951
Output : 3
Input : 23003
Output : 0*/

UINT DigitCountX (LONG iNo)
{
  UINT idigit=0,icnt=0;
  if(iNo<0)
  {
	  iNo=-iNo;
  }
  
  while(iNo!=0)
  {
	  idigit=iNo%10;
	  if(idigit>=5)
	  {
		icnt++;
	  }
	  iNo=iNo/10;
  }
  return icnt;
}

/*8. Accept three numbers from user and count occurrence of 0.
Input : 543
Output : 0
Input : 7309
Output : 1
Input : 73008
Output : 2*/

UINT DigitXx (LONG iNo)
{
  UINT idigit=0,icnt=0;
  if(iNo<0)
  {
	  iNo=-iNo;
  }
  
  while(iNo!=0)
  {
	  idigit=iNo%10;
	  if(idigit==0)
	  {
		icnt++;
	  }
	  iNo=iNo/10;
  }
  return icnt;
}
/*9. Write a program which accept one number from user and
return addition of its odd digits.
Input : 7429
Output : 16
Input : 90281
Output : 10*/

UINT OddDigit (LONG iNo)
{
  UINT idigit=0,isum=0;
  if(iNo<0)
  {
	  iNo=-iNo;
  }
  
  while(iNo!=0)
  {
	  idigit=iNo%10;
	  if(idigit%2==1)
	  {
	    isum=isum+idigit;
	  }
	  iNo=iNo/10;
  }
  return isum;
}

/*10. Write a program which accept one number from user and
return difference between addition of its even digits and addition
of odd digits.
Input : 7429
Output : -10 (6-16)
Input : 90281
Output : 0 (10-10)*/

int DiffDigit (LONG iNo)
{
  UINT idigit=0,isum1=0,isum2=0;
  if(iNo<0)
  {
	  iNo=-iNo;
  }
  
  while(iNo!=0)
  {
	  idigit=iNo%10;
	  if(idigit%2==0)
	  {
	    isum1=isum1+idigit;
	  }
	  else
	  {
		  isum2=isum2+idigit;
	  }
	  iNo=iNo/10;
  }
  return isum1-isum2;
}

int main()
{
  LONG ivalue=0;
  UINT iret=0;
  int choice=0;

  printf("Enter Number:");
  scanf("%d",&ivalue);

  printf("Enter choice:");
  scanf("%d",&choice);
  switch(choice)
  {
    case 1:
	iret=MultDigit(ivalue);
	printf("multiplication is %d\t",iret);
	break;

	case 2:
	iret=EvenDigit(ivalue);
	printf("addition of even digits is %d\t",iret);
	break;

	case 3:
	iret=DigitX(ivalue);
	printf("occurence is %d\t",iret);
	break;

	case 4:
	DisplayNo(ivalue);
	break;

	case 5:
	iret=Reverse(ivalue);
	printf("reverse no is %d\t",iret);
	break;

	case 6:
	iret=DigitXX(ivalue);
	printf("occurence is %d\t",iret);
	break;

	case 7:
	iret=DigitCountX(ivalue);
	printf("count is %d\t",iret);
	break;

	case 8:
	iret=DigitXx(ivalue);
	printf("occurence is %d\t",iret);
	break;

	case 9:
	iret=OddDigit(ivalue);
	printf("addition of odd digit is %d\t",iret);
	break;


	case 10:
	iret=DiffDigit(ivalue);
	printf("Difference is %d\t",iret);
	break;

	default:
	break;
  }

  return 0;
}