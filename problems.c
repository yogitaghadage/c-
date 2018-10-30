#include<stdio.h>

typedef unsigned int UINT;
typedef long int LONG;
typedef int BOOL;
#define TRUE 1;
#define FALSE 0;

/*1.Write a program which accept two numbers from user and
calculate its power.
Input : 3 4
Output : 81
Input : 7 3
Output : 343*/

LONG Power (int iNo1, int iNo2)
{
  int i=0;
  LONG ians=0;
  for(i=0;i<iNo2;i++)
  {
	  ians=ians*iNo1;
  }
  return ians;
}

/*2. Write a program which accept number from user and check
whether that number is strong number or not. When the sum of
the factorial of a number's individual digits are equal to the
number itself, then that number is called a strong number.
Input : 145 since 1! + 4! + 5! = 1 + 24 + 120 = 145
Output : TRUE*/

BOOL ChkStrong(int iNo)
{
 int idigit=0,i=0,ians=1,isum=0;

 while(iNo!=0)
 {
   idigit=iNo%10;
   for(i=idigit;idigit>=1;i--)
  {
	 ians=ians*i;
  }
  isum=isum+ians;
  iNo=iNo/10;
 }
 if(isum==iNo)
 {
	 return TRUE;
 }
 else
 {
	 return FALSE;
 }
}



/*3. Write a program which accept principle amount, time and
create of interest from user and calculate simple interest.
SimpleIntrest = PrincipleAmount * Time * RateOfIntrest / 100*/

float SImpleIntrest (float Principle, int time,float Rate)
{
  float SI=0.0f,ans=0.0f;
  while((Principle>0.0)&&(time>0.0)&&(Rate>0.0))
  {
	  ans=(Principle*time*Rate);
	  SI=(ans)/100;
  }
  return SI;
}

/*4. Accept number from user and check whether it is Armstrong
number or not. Armstrong number is a number that is the sum of
its own digits each raised to the power of the number of digits is
same as the given number.
Input : 153*/

BOOL ChkArmstrong (int iNo)
{
   int temp1=iNo,temp2=iNo;
  int idigit=0,icnt=0,i=0,ians=1,isum=0;
  while(temp1!=0)
  {
	  idigit=temp1%10;
	  icnt++;
	  temp1=temp1/10;
  }
  while(temp2!=iNo)
  {
	  idigit=temp2%10;
	  for(i=1;i<=icnt;i++)
	  {
		  ians=ians*idigit;
	  }
	  isum=isum+idigit;
	  temp2=temp2/10;
  }
  if(isum==iNo)
  {
	  return TRUE;
  }
  else
  {
	  return FALSE;
  }
}
  


/*5. Accept one numbers from user and display frequency of each
digit.
Input : 543457
Output : 3 -> 1
4 -> 2
5 -> 2
7 -> 1

void Frequency (int iNo)
{
  
}

/*6. Accept range from user and perform addition of all elements
form that range.
Input : 10 15
Output : 15*/

UINT SumRange (int iStart, int iEnd)
{
 int sum=0,i=0;
 for(i=iStart;i<=iEnd;i++)
 {
	 sum=sum+i;
 }
 return sum;

}

/*7. Accept one numbers from user and display below pattern as.
Input : 3
Output : 3 # # # 2 # # 1 #*/

void Pattern(int iNo)
{
  int i=0,j=0;
  for(i=iNo;i>=1;i--)
  {
	  printf("i\t");
	  for(j=1;j<=i;j++)
	  {
		  printf("#\t");
	  }
  }
}

/*8. Accept one character from user and depends on that character
display its type.
Input : A
Output : It is Capital
Input : d
Output : It is Small
Input : 5
Output : It is Digit*/

void Display(char ch)
{
	if((ch>='A')&&(ch<='Z'))
	{
		printf("it is capital\n");
	}
	else if((ch>='a')&&(ch<='z'))
	{
		printf("it is small\n");
	}
	else if((ch>='0')&&(ch<='9'))
	{
		printf("it is digit\n");
	}
	else
	{
		printf("it is symbol\n");
	}

}

/*9. Write a program which accept range from user and display all
prime numbers between that range.
Input : 5 20
Output : 5 7 11 13 17 19*/

void PrimeRange(int iStart, int iEnd)
{
  int i=0,j=0,icnt=0;
  for(i=iStart;i<=iEnd;i++)
  {
     for(j=1;j<=(i/2);j++)
	 {
		 if(i%j==0)
		 {
			 icnt++;
		 }
		 if(icnt==1)
		 {
			 printf("%d\t",i);
		 }
	 }
  }

}

/*10. Accept number from user and return its generic root.
Input : 7429
Output : 4 (7+4+2+9 -> 22 -> 2+2 -> 4 )
Input : 90281
Output : 2 (9+0+2+8+1 -> 20 -> 2+0 -> 2)*/

int GenRoot (int iNo)
{
  int temp=iNo,isum1=0,isum2=0,idigit=0;

  while(temp!=0)
  {
	  idigit=temp%10;
	  isum1=isum1+idigit;
	  temp=temp/10;
  }
  while(isum1!=0)
  {
	  idigit=isum1%10;
	  isum2=isum2+idigit;
	  isum1=isum1/10;
  }
  return isum2;
}


int main()
{
	int value1=0,value2=0,value3=0,iret=0,choice=0;
	char cvalue='\0';
	BOOL bret=TRUE;
	

	printf("enter number:");
	scanf("%d",&value1);

	printf("enter number 2:");
	scanf("%d",&value2);

	fflush(stdin);
	printf("enter character");
	scanf("%c",&cvalue);

    printf("enter choice:");
	scanf("%d",&choice);

	switch (choice)
	{

	  case 1:
		iret= Power(value1, value2);
		printf("power is %d\n",iret);
		break;

	  case 2:
		  bret=ChkStrong(value1);
		  if(bret==1)
		  {
			  printf("it is strong number");
		  }
		  else
		  {
			  printf("it is not strong number");
		  }
		  break;
		  
	  case 3:
		  iret=SImpleIntrest(value1,value2,value3);
		  printf("simple interest is %d",iret);
		  break;

	  case 4:
		  bret=ChkArmstrong(value1);
		  if(bret==1)
		  {
			  printf("it is armstrong number");
		  }
		  else
		  {
			  printf("it is not armstrong number");
		  }
		  break;

	  /*case 5:
		  Frequency (value1);
		  break;*/

	  case 6:
		  iret=SumRange(value1,value2);
		  printf("sum is %d",iret);
		  break;

	  case 7:
		  Pattern(value1);
		  break;

	  case 8:
		  Display(cvalue);
		  break;

	  case 9:
		  PrimeRange(value1,value2);
		  break;

	  case 10:
		  iret=GenRoot(value1);
		  printf("%d",iret);

	  default:
		  break;

	}
	return 0;
}