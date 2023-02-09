//write a program which returns difference between Even factorial and odd factorial of given number
//ip=5
//op=-7 (8-15)
//ip=-5
//op=-7 (8-15)
//Time complexity=N
#include<stdio.h>
int FactorialDiff(int iNo)
{
  if(iNo<0)
  {
    iNo=-iNo;
  }
  int iCnt=0;
  int iEvenFact=1,iOddFact=1;
  for(iCnt=1;iCnt<=iNo;iCnt++)
  {
    if(iCnt%2==0)
    {
    iEvenFact=iEvenFact*iCnt;
    }
    else
    {
     iOddFact=iOddFact*iCnt;
    }
  } 
  return iEvenFact-iOddFact;
}
int main()
{
    int iValue=0,iRet=0;
    printf("Enter number \n");
    scanf("%d",&iValue);
    iRet=FactorialDiff(iValue);
    printf("Factorial difference is  %d\n",iRet);
    return 0;
}