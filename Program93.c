//write a program to find even factorial of given number
//ip=5
//op=8 (4*2)
//ip=-5
//op=8 (4*2)
//Time complexity=N
#include<stdio.h>
int EvenFactorial(int iNo)
{
  if(iNo<0)
  {
    iNo=-iNo;
  }
  int iCnt=0;
  int iFact=1;
  for(iCnt=1;iCnt<=iNo;iCnt++)
  {
    if(iCnt%2==0)
    {
    iFact=iFact*iCnt;
    }
  } 
  return iFact;
}
int main()
{
    int iValue=0,iRet=0;
    printf("Enter number \n");
    scanf("%d",&iValue);
    iRet=EvenFactorial(iValue);
    printf("Even Factorial of number is  %d\n",iRet);
    return 0;
}