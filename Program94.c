//write a program to find odd factorial of given number
//ip=5
//op=15 (5*3*1)
//ip=-5
//op=15 (5*3*1)
//Time complexity=N
#include<stdio.h>
int OddFactorial(int iNo)
{
  if(iNo<0)
  {
    iNo=-iNo;
  }
  int iCnt=0;
  int iFact=1;
  for(iCnt=1;iCnt<=iNo;iCnt++)
  {
    if(iCnt%2!=0)
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
    iRet=OddFactorial(iValue);
    printf("Odd Factorial of number is  %d\n",iRet);
    return 0;
}