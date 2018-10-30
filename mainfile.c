#include<stdio.h>

/*1.Write a program which accept one number from user and print that
number of even numbers on screen.
Input : 7
Output : 2 4 6 8 10 12 14*/

void PrintEven(int iNo)
{
	int i=0;
 if(iNo <= 0)
 {
 return;
 }
 for(i=1;i<=iNo;i++)
 {
	 printf("%d\t",2*i);
 }
}
 

/*2. Write a program which accept number from user and print even factors of
that number.
Input : 24
Output : 2 4 6 8 12*/

void DisplayEvenFactor(int iNo)
{
	int i=0;
 if(iNo <= 0)
 {
  iNo = -iNo;
 }
 
 for(i = 1; i<= iNo ;i++)
 {
  if(iNo%2==0)
 {
	 printf("%d\t",i);
  }
 }
}
/*3. Write a program which accept two numbers from user and display its
common factors.
Input : 12 18
Output : 2 3 6*/

void DisplayComFactor(int iNo1, int iNo2)
{
 int i = 1;
 while( (i<= iNo1/2) && (i<=iNo2/2) )
 {
 if((iNo1%i == 0) && (iNo2%i==0))
 printf("%d",i);
 i++;
 }
}

/*4. Write a program which accept two numbers from user and display its
largest common factors.
Input : 12 18
Output : 6*/

void DisplayComFactorLarge(int iNo1, int iNo2)
{
 int i = 1;
 while( (i<= iNo1/2) && (i<=iNo2/2) )
 {
 if((iNo1%i == 0) && (iNo2%i==0))
 {
	  i++;
 }
 }
 printf("%d",i);

 }

/* Accept two characters from user and swap contents of that two
characters.*/

void Swap(char *ptr1, char *ptr2)
{
 char temp;
 temp=*ptr1;
 *ptr1=*ptr2;
 *ptr2=temp;
 printf("%c\t,%c\t",*ptr1,*ptr2);
}

/*6. Accept two integers from user and swap contents of that two integers
without using temporary variable.*/

void Swap1(int *ptr1, int *ptr2)
{
 *ptr1=*ptr1+*ptr2;
 *ptr2=*ptr1-*ptr2;
 *ptr1=*ptr1-*ptr2;
 printf("%d\t%d\t",*ptr1,*ptr2);
}

//7. Accept one number from user and print that number of * on screen.

void Accept(int iNo)
{
 while( iNo > 0 )
 {
 printf(" * ");
 iNo --;
 }
}

//8. Accept one character from user and convert case of that character.
//Input : a
//Output : A

//Input : D
//Output : d
void DisplayConvert ( char CValue)
{
 if((CValue>='a')&&(CValue<='z'))
 {
	 CValue=CValue-32;
 printf("%c",CValue);
 }
 else if((CValue>='A')&&(CValue<='Z'))
 {
	 CValue=CValue+32;
 printf("%c" ,CValue);
 }
}

/*9. Accept one number and print that number of elements from Fibonacci
series.
Input : 9
Output : 1 1 2 3 5 8 13 21 43*/

void Fibonacci (int iNo)
{
 int i=0,isum=0;
 int ino1=0,ino2=1;
 for(i=0;i<=iNo;i++)
 {
	 isum=ino1+ino2;
	 printf("%d",isum);
	 ino1=ino2;
	 ino2=isum;
 }

}

/*10. Accept on character from user and check whether that character is vowel
(a,e,i,o,u) or not.
Input : E
Output : TRUE
Input : d
Output : FALSE*/

void ChkVowel ( char ch)
{
 if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')||(ch=='A')||(ch=='B')||(ch=='C')||(ch=='D')||(ch=='E'))
 {
 printf("it is vowel");
 }
 else
 {
 printf("it is not vowel");
 }
}
int main()
{
	int ivalue1=0,ivalue2=0;
	//int choice=0;
	//char ch1='\0';char ch2='\0';

	printf("enter one number");
	scanf("%d",&ivalue1);

	printf("enter second number");
	scanf("%d",&ivalue2);

	Fibonacci(ivalue1);

	//PrintEven(ivalue1);

   /* printf("enter choice");
	scanf("%d",&choice);
	

	printf("enter character");
	scanf("%c\n",&ch1);
	fflush(stdin);

	printf("enter character");
	scanf("%c\n",&ch2);

	switch(choice)
	{

	case 1:
		PrintEven(ivalue1);
		break;

	case 2:
		DisplayEvenFactor(ivalue1);
		break;

	case 3:
		DisplayComFactor(ivalue1,ivalue2);
		break;

	case 4:
		DisplayComFactorLarge(ivalue1,ivalue2);
		break;

	case 5:
		Swap(&ch1,&ch2);
		break;

	case 6:
		Swap1(&ivalue1,&ivalue2);
		break;

	case 7:
		Accept(ivalue1);
		break;

	case 8:
		DisplayConvert(ch1);
		break;

	case 9:
		Fibonacci(ivalue1);
		break;

	case 10:
		ChkVowel(ch1);
		break;

	default:
		printf("invalid input");
		break;

	}*/

	return 0;
}
