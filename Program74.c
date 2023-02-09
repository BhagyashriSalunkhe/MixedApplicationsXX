//write a progra which accepts N number from user and print all odd numbers up to N
//IP=18
//OP= 1 3 5 7 9 11 13 15 17

#include<stdio.h>
void OddDisplay(int iNo)
{
  int iCnt=0;
  for(iCnt=0;iCnt<=iNo;iCnt++)
  {
    if((iCnt%2)!=0)
    {
    printf("%d\t",iCnt);
    }
  }
}

int main()
{
    int iValue=0;
    printf("Enter the number\n");
    scanf("%d",&iValue);

    OddDisplay(iValue);
    return 0;
}