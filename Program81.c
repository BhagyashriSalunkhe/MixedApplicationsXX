//write a program which accept number from user and if number is less than 50 then print small,if it is grater than 50 
//and less than 100 then print medium ,if it is grater than 100 then print large
//ip=75
//op=Medium
#include<stdio.h>
void Number(int iNo)
{
  if(iNo<50)
  {
    printf("Small\n");
  }
  if((iNo>50)&&(iNo<100))
  {
    printf("Medium\n");
  }
  if(iNo>100)
  {
    printf("Large\n");
  }
}
int main()
{
    int iValue=0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    Number(iValue);
    return 0;
}