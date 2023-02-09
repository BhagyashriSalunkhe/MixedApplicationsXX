//write a program which accept numbers and print its multiplication
//ip=5 4 7
//op=140


#include<stdio.h>
int Multiplication(int iNo1,int iNo2,int iNo3)
{
    if((iNo1==0)||(iNo2==0)||(iNo3==0))
    {
        return 0;
    }
    int iMult=0;
    iMult=iNo1*iNo2*iNo3;
    return iMult;
}
int main()
{
    int iValue1=0,iValue2=0,iValue3=0;
    int iRet=0;
    printf("Enter three numbers\n");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);
    iRet=Multiplication(iValue1,iValue2,iValue3);
    printf("Multiplication of three numbers is :%d",iRet);

    return 0;
}