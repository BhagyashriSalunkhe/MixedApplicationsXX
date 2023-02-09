//write a program which accept number from user and return difference between summation of all its factors and non factors

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt=0,Fsum=0,Nsum=0;
    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if((iNo%iCnt)==0)
        {
            Fsum=Fsum+iCnt;
        }
        else
        {
            Nsum=Nsum+iCnt;
        }
    }
    return (Fsum-Nsum);

}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet=FactDiff(iValue);
    printf("%d",iRet);
    return 0;
}
