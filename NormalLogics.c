#include<stdio.h>

typedef unsigned int UINT;
typedef int BOOL;
typedef long int LONG;

#define TRUE 1
#define FALSE 0


/*1.Rent of car is 15 rupees per kilometre for first 120 kilometres
and after that it is 10 rupees per kilometre. Accept total number
of kilometres and calculate rent.
Input : 80
Output : 1200
Input : 145
Output : 2050*/

UINT RentCalculate(int iNo)
{
  int iRent=0,inum=0;

  if(iNo<0)
  {
	  iNo=-iNo;
  }
  if(iNo<=120)
  {
	  iRent=15*iNo;
  }
  else if(iNo>120)
  {
	  inum=iNo-120;
	  iRent=(inum*10)+1800;
  }
  return iRent;
}

/*2. Parking charges for four wheeler is 30 rupees for first three
hours and after every hour it is 5 rupees. Accept number of hours
and calculate total amount.
Input : 2
Output : 30
Input : 7
Output : 50*/

UINT ParkingClaculate (UINT iNo)
{
  UINT iTot=0;
  int inum=0;

  if(iNo<=3)
  {
	  iTot=30;
  }
  else if(iNo>3)
  {
	  inum=iNo-3;
	  iTot=(inum*5)+30;
  }
  return iTot;

}

/*3. Write a program which accept number of hours and calculate
number of minutes.
Input : 5
Output : 300*/

UINT CalculateMin (UINT iHr)
{
  int iMinute=0;
  if(iHr>0)
  {
	  iMinute=iHr*60;
  }
  return iMinute;
}

/*4. Write a program which accept number of minutes and calculate
number of hours.
Input : 320
Output : 5 hours 20 minutes
Input : 150
Output : 2 hours 30 minutes*/

void CalculateHr (UINT iHr)
{
	int iDigit=0;
  if(iHr>0)
  {
	  iDigit=iHr%60;
	  iHr=iHr/60;

	  printf("%d hours and %d minutes",iHr &iDigit);
  }
}

/*5. Accept number from user and display below pattern as.
Input : 5
Output : A A A A A*/

void Pattern(int iNo)
{
  int i=0;
  for(i=1;i<=iNo;i++)
  {
	  printf("A");
  }
}
/*6. Accept numbered one character from user and display below
pattern as.
Input : 5 M
Output : M M M M M*/

void Pattern1(int iNo, char ch)
{
  int i=0;
  if(iNo<0)
  {
	  iNo=-iNo;
  }
  for(i=1;i<=iNo;i++)
  {
	  printf("%c",&ch);
  }
}
/*7. Accept range from user and display below output.
Input : 5 12
Output : 5 6 7 8 9 10 11 12*/

void Pattern2(int iStart , int iEnd)
{
 int i=0;
 for(i=iStart;i<=iEnd;i++)
 {
	 printf("%d",i);
 }
}

/*8. Accept three numbers from user and return difference between
largest and smallest digit.
Input : 543
Output : 2 (5 - 3)
Input : 7309
Output : 7 (9 - 3)
Input : 7319
Output : 8 (9 - 1)*/

UINT DigitDiff (LONG iNo)
{
  int idigit=0;
  int imax=0;
  int imin=0;

  if(iNo<0)
  {
	  iNo=-iNo;
  }

  while(iNo!=0)
  {
	  idigit=iNo%10;
	  if(idigit>imax)
	  {
		  imax=idigit;
	  }
	  if(idigit<imin)
	  {
		  imin=idigit;
	  }
	  iNo=iNo/10;
  }
  return imax-imin;
}


/*9. Accept range from user and display below output.
Input : 5 20
Output : 6 8 10 12 14 16 18 20*/

void PatternX(int iStart , int iEnd)
{
  int i=0;
  for(i=iStart+1;i<=iEnd;i++)
  {
	  printf("%d",i);
  }
}
/*10. Write a program which accept one number from user addition
of factorial of each digit of that number.
Input : 324
Output : 32 (3! + 2! + 4!)
Input : 524
Output : 146 (5! + 2! + 4!)*/

UINT FactDigit(UINT iNo)
{
  int i=0;
  int idigit=0,ifact=1,isum=0;

  while(iNo!=0)
  {
	  idigit=iNo%10;
	  for(i=idigit;i>=1;i--)
	  {
		  ifact=ifact*i;
	  }
	  isum=isum+ifact;
	  iNo=iNo/10;
  }
  return isum;
}


int main()
{
	int value1,value2=0,choice=0,iret=0;
	char ch='\0';
	printf("enter number:");
	scanf("%d",&value1);

	printf("enter number:");
	scanf("%d",&value2);
	fflush(stdin);
	printf("enter character");
	scanf("%c",&ch);
	

	printf("enter choice:");
	scanf("%d",&choice);

	switch(choice)

	{
	case 1:
		iret=RentCalculate(value1);
		printf("Rent is %d\t",iret);
		break;

	case 2:
		iret=ParkingClaculate (value1);
		printf("parking charge is%d\t",iret);
		break;

	case 3:
		iret=CalculateMin (value1);
		printf("calculated minutes are %d",iret);
		break;

	case 4:
		CalculateHr (value1);
		break;

	case 5:
		Pattern(value1);
		break;

	case 6:
		Pattern1(value1, ch);
		break;

	case 7:
		Pattern2(value1,value2);
		break;

	case 8:
		DigitDiff(value1);
		break;

	case 9:
		PatternX(value1,value2);
		break;

	case 10:
		iret=FactDigit(value1);
		break;
        
	default:
		break;

	}
	return 0;
}
