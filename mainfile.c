#include<stdio.h>

/*1.Write a program which accept one number from user and return its
factorial.
Input : 5
Output : 120*/

int Factorial(int iNo)
{
 int iAns = 1;
 while(iNo!=0)
 {
   iAns=iAns*iNo ;
 iNo-- ;
 }
 return iAns;
}
/*2. Write a program which accept principle amount, time and create of
interest from user and calculate simple intrest.
SimpleIntrest = PrincipleAmount * Time * RateOfIntrest / 100*/

 void SimpleInterest(int principle,int time,int ROI)
{
	
	float fans=0.0f;
	fans=(principle*time*ROI)/(100);
	printf("\n simple interest is:%f",fans);
}

/*3. Write a program which accept two numbers from user and display its
largest common factors.
Input : 12 18
Output : 6*/

void DisplayComFactorLarge(int iNo1, int iNo2)
{
 int i=1,iFact=0;

 while((i<=iNo1/2)&&(i<=iNo2/2))
 {
	 if((iNo1%i==0)&&(iNo2%i==0))
	 {
		 iFact=i;
		 i++;
	 }
 }
	 printf("largest common factor is: %d",iFact);

}

//4. Accept three numbers from user and return its average.

float Avg(int iNo1, int iNo2, int iNo3)
{
 float fAns = 0.0;
 fAns=(iNo1+iNo2+iNo3)/3;
 return fAns;
}
//5. Accept radius from user and return circumference of circle.
float Circum(float radius)
{
 float circum=0.0f,pi=3.14;
 circum=2*pi*radius;
 return circum;
}

//6. Accept number in decimal format and print its binary equivalent number.
//Input : 11
//Output : 1011
void Binary (int iNo)
{
 while(iNo != 0)
 {
 printf("%d", iNo%2);
 iNo = iNo / 2;
 }
}
/*7. Accept range from user and print all numbers between that range.
Input : 10 17
Output : 10 11 12 13 14 15 16 17*/
void DisplayRange(int iStart, int iEnd)
{
 int iCnt = 0;
 if((iStart<0)||(iEnd<0)||(iStart<iEnd))
 {
	 return;
 }
 for(iCnt=iStart ; iCnt<=iEnd ; iCnt++)
 {

 printf("%d",iCnt );
 }
}
/*8. Accept range from user and print all even numbers between that range.
Input : 10 17
Output : 10 12 14 16*/
void DisplayRangeEven(int iStart, int iEnd)
{
 int iCnt = 0;
 // Validation
 for(iCnt=iStart ; iCnt<=iEnd ;iCnt++)
 {
 if(iCnt%2==0)
	 {
		printf("%d",iCnt);
	 }
  }
}

/*9. Accept range from user and addition of all numbers between that range.
Input : 10 15
Output : 75*/
int SumRange(int iStart, int iEnd)
{
 int iCnt = 0;
 int iSum = 0;
 
 if((iStart<0)||(iEnd<0)||(iStart<iEnd))
 {
	 return;
 }
 for(iCnt=iStart ; iCnt<=iEnd ; iCnt++)
 {
 iSum = iSum+iCnt;
 }
 return iSum ;
}
/*10. Accept range from user and print all numbers between that range in
reverse order.
Input : 10 17
Output : 17 16 15 14 13 12 11 10*/

void DisplayRangeRev(int iStart, int iEnd)
{
 int iCnt = 0;
 // Validation
 if((iStart<0)||(iEnd<0)||(iStart<iEnd))
 {
	 return;
 }
 for(iCnt=iEnd ; iCnt>=iStart ; iCnt--)
 {
 printf("%d", iCnt);
 }
} 

int main()
{
	int value1=0,value2=0,value4=0,Choice=0,iret=0;
	float value3=0.0f,value5=0.0f,fret=0.0f;

	printf("Enter Number");
	scanf("%d",&value1);

	printf("Enter Number");
	scanf("%d",&value2);

	printf("Enter Number");
	scanf("%d",&value4);

	printf("Enter Number");
	scanf("%d",&value3);

	printf("Enter Number");
	scanf("%d",&value5);

	printf("Enter Choice");
	scanf("%d",&Choice);

	switch(Choice)
	{
	case 1:
		Factorial(value1);
		break;

	case 2:
		SimpleInterest(value3,value2,value5);
		break;

	case 3:
		DisplayComFactorLarge(value1,value2);
		break;

	case 4:
		fret= Avg(value1,value2,value4);
		break;

	case 5:
		fret=Circum(value3);
		break;

	case 6:
		Binary (value1);
		break;

	case 7:
		DisplayRange(value1,value2);
		break;

	case 8:
		DisplayRangeEven(value1, value2);
		break;

	case 9:
		iret=SumRange(value1, value2);
		printf("%d",iret);
		break;

	case 10:
		DisplayRangeRev(value1, value2);
		break;
       }
	return 0;
}
