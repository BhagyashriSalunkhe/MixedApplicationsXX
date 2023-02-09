//write a program which accept number from user display its multiplication of factors

#include<stdio.h>

int MultiFact(int iNo)
{
    int iMult=1;
     int iCnt=0;
   
    for(iCnt=1;iCnt<=(iNo/2);iCnt++)
    {
        if(iNo%iCnt==0)
        {
        iMult=iMult*iCnt;
        }
    }
   
    return iMult;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet=MultiFact(iValue);

    printf(" Multiplication of all the factors of %d is %d",iValue,iRet);
    return 0;
}