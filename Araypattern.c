#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

//
// Every below pattern function accepts base address of array
// and number of elements from user
//
// 1. Write a program which print below pattern as
///////////////////////////////////////////
//
// Innput : 89 67 45 45 78
// 5
//
// Output
// 89 67 45 45 78
// 89 67 45 45 78
// 89 67 45 45 78
// 89 67 45 45 78
// 89 67 45 45 78
//
///////////////////////////////////////////

void Pattern1(int arr[], int iSize)
{
 int i=0,j=0;
 for(i=0;i<iSize;i++)
 {
	 for(j=0;j<iSize;j++)
	 {
		 printf("%d\t",arr[j]);
	 }
	 printf("\n");
 }

}

// 2. Write a program which print below pattern as
///////////////////////////////////////////
//
// Innput : 89 67 45 11 78
// 5
//
// Output
// 89 67 45 11 78
// 78 11 45 67 89
// 89 67 45 11 78
// 78 11 45 67 89
// 89 67 45 11 78
//
///////////////////////////////////////////
void Pattern2(int arr[], int iSize)
{
 int i=0,j=0,k=iSize-1;
 
 for(i=0;i<iSize;i++)
 {
	 for(j=0;j<iSize;j++)
	 {
		 if(i%2==0)
		 {
			 printf("%d\t",arr[k]);
			 k--;
		 }
		 else

		 {
            printf("%d\t",arr[j]);
		 }
	 }
	 printf("\n");
 }

}
 

 // 3. Write a program which print below pattern as
///////////////////////////////////////////
//
// Innput : 89 67 45 11 78
// 5
//
// Output
// 89 67 45 11 78
// 89 67 45 11
// 89 67 45
// 89 67
// 89
//
///////////////////////////////////////////

void Pattern3(int arr[], int iSize)
{
 
 int i=0,j=0;
 for(i=0;i<iSize;i++)
 {
	 for(j=0;j<iSize;j++)
	 {
		 if(i<=j);
		 {
			 printf("%d\t",arr[j]);
		 }
		
	 }
	 printf("\n");
 }

}

// 4. Write a program which print below pattern as
///////////////////////////////////////////
//
// Innput : 89 67 45 11 78
// 5
//
// Output
// 89
// 89 67
// 89 67 45
// 89 67 45 11
// 89 67 45 11 78
//
///////////////////////////////////////////
void Pattern4(int arr[], int iSize)
{
 
 int i=0,j=0;
 for(i=0;i<iSize;i++)
 {
	 for(j=0;j<iSize;j++)
	 {
		 if(i>=j)
		 {
			 printf("%d\t",arr[j]);
		 }
	 }
	 printf("\n");
 }

}

// 5. Write a program which print below pattern as
///////////////////////////////////////////
//
// Innput : 89 67 45 11 78
// 5
//
// Output
// 89 67 45 11 78
// 89 0 0 0 78
// 89 0 0 0 78
// 89 0 0 0 78
// 89 67 45 11 78
//
///////////////////////////////////////////
void Pattern5(int arr[], int iSize)
{

 int i=0,j=0;
 for(i=0;i<iSize;i++)
 {
	 for(j=0;j<iSize;j++)
	 {
		 if((i==0)||(i==(iSize-1))||(j==0)||(j==(iSize-1)))
		 {
			printf("%d\t",arr[j]);
		 }
		 else
		 {
			 printf("0\t");
		 }
	 }
	 printf("\n");
 }

}

/////////////////////////////////////////// 
// 6. Write a program which print below pattern as
///////////////////////////////////////////
//
// Input : 89 67 45 45 78
// 5
//
// Output
// 89 67 45 45 78
// 00 67 45 45 78
// 00 00 45 45 78
// 00 00 00 45 78
// 00 00 00 00 78
//
///////////////////////////////////////////

void Pattern6(int arr[], int iSize)
{
 int i=0,j=0;
 for(i=0;i<iSize;i++)
 {
	 for(j=0;j<iSize;j++)
	 {
		 if(j>=i)
		 {
			 printf("%d\t",arr[j]);
		 }
		 else
		 {
			 printf("00\t");
		 }
	 }
	 printf("\n");
 }

}

// 7. Write a program which print below pattern as
///////////////////////////////////////////
//
// Input : 89 67 45 11 78
// 5
//
// Output
// 89 00 45 00 78
// 78 00 45 00 89
// 89 00 45 00 78
// 78 00 45 00 89
// 89 00 45 00 78
//
///////////////////////////////////////////
void Pattern7(int arr[], int iSize)
{
 int i=0,j=0,k=(iSize-1);
 for(i=0;i<iSize;i++)
 {
	 k=(iSize-1);
	 for(j=0;j<iSize;j++)
	 {
		 if(j%2==0)
		 {
			 printf("00\t");
		 }
		 if(i%2==0)
		 {
			 printf("%d",arr[k]);
			 k--;
		 }
		 else
		 {
			 printf("%d",arr[j]);
		 }
		 
	 }
	 printf("\n");
 }

}

 // 8. Write a program which print below pattern as
///////////////////////////////////////////
//
// Input : 89 67 45 11 78
// 5
// Output
// 89 67 45 11 78
// 89 67 45 11 00
// 89 67 45 00 00
// 89 67 00 00 00
// 89 00 00 00 00
///////////////////////////////////////////

void Pattern8(int arr[], int iSize)
{
 int i=0,j=0;
 for(i=0;i<iSize;i++)
 {
	 for(j=0;j<iSize;j++)
	 {
		 if(i<=j)
		 {
			 printf("%d\t",arr[j]);
		 }
		 else
		 {
			 printf("00\t");
		 }
	 }
	 printf("\n");
 }

}

// 9. Write a program which print below pattern as
///////////////////////////////////////////
//
// Innput : 89 67 45 11
// 4
//
// Output
// 89 89 89 89
// 67 67 67 67
// 45 45 45 45
// 11 11 11 11
//
///////////////////////////////////////////
void Pattern9(int arr[], int iSize)
{
 int i=0,j=0;
 for(i=0;i<iSize;i++)
 {
	 for(j=0;j<iSize;j++)
	 {
			 printf("%d\t",arr[i]);
		 
	 }
	 printf("\n");
 }

}

// 10. Write a program which print below pattern as
///////////////////////////////////////////
//
// Input : 89 67 45 11
// 4
//
// Output
// 89 00 89 00
// 67 00 67 00
// 45 00 45 00
// 11 00 11 00
//
///////////////////////////////////////////

void Pattern10(int arr[], int iSize)
{
 int i=0,j=0;
 for(i=0;i<iSize;i++)
 {
	 for(j=0;j<iSize;j++)
	 {
		 if(j%2==0)
		 {
			 printf("00\t");
		 }
		 else
		 {
			 printf("%d\t",arr[i]);
		 }
	 }
	 printf("\n");
 }

}

/////////////////////////////////////


int main()
{
 BOOL Running = TRUE;
 int *ptr = NULL;

 int iLength = 0,i = 0,iChoice = 0;

 printf("\n-- Marvellous Innfosystems : Array Pattern Printing Application --\n\n");
 printf("Enter number of Elements : \t");
 scanf("%d",&iLength);

 ptr = (int *)malloc(iLength * sizeof(int));
 if(NULL == ptr)
 {
 printf("Error in memory allocation\n");
 return -1;
 }
 for(i = 0; i< iLength; i++)
 {
 printf("Enter elemennt no : %d\t",i+1);
 scanf("%d",&ptr[i]); 
 }
 while(Running)
 {
 printf("\nEnter your choice\n");
 scanf("%d",&iChoice);

 switch(iChoice)
 {
 case 1:
 Pattern1(ptr,iLength);
 break;

 case 2:
 Pattern2(ptr,iLength);
 break;

 case 3:
 Pattern3(ptr,iLength);
 break;

 case 4:
 Pattern4(ptr,iLength);
 break;

 case 5:
 Pattern5(ptr,iLength);
 break;

 case 6:
 Pattern6(ptr,iLength);
 break;

 case 7:
 Pattern7(ptr,iLength);
 break;

 case 8:
 Pattern8(ptr,iLength);
 break;

 case 9:
 Pattern9(ptr,iLength);
 break;

 case 10:
 Pattern10(ptr,iLength);
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






