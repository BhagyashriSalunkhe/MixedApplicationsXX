//write a program which accept total marks and obtained marks from user and calculate percentage
//ip=1000 745
//op=74.5%
#include<stdio.h>
double CalculatePercentage(int iNo1,int iNo2)
{
  if((iNo1==0)||(iNo2==0))
  {
     return 0.0;
  }
  double fPercentage=0.0;
  fPercentage=iNo2*100/iNo1;
  return fPercentage;
}
int main()
{
    int oMarks=0;
    int tMarks=0;
    double dRet=0.0;
    printf("please enter total marks\n");
    scanf("%d",&tMarks);
    printf("please enter obtained marks\n");
    scanf("%d",&oMarks);
    dRet=CalculatePercentage(tMarks,oMarks);
    if(dRet==0.0)
    {
        printf("Zero is not allowed\n");
    }
    else
    {
    printf("Percentage are:%lf",dRet);
    }
    return 0;
}