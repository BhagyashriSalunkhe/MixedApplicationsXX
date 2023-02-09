 //write a factorial of given number
//ip=5
//op=120(5*4*3*2*1)
//Time complexity=N
#include<stdio.h>
int Factorial(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
  int iCnt=0;
  int iFact=1;
  for(iCnt=1;iCnt<=iNo;iCnt++)
  {
    iFact=iFact*iCnt;
  }
  return iFact; 
}
int main()
{
    int iValue=0,iRet=0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    iRet=Factorial(iValue);
    printf("Factorial of %d is %d\n",iValue,iRet);
    return 0;
}