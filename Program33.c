////write a program which  accept number from user and print even factors of that number
//input 36
//output  2  4 6  12  18 
#include<stdio.h>
void DisplayEvenFactor(int iNo)
{
    int i=0;
    if(iNo<=0)
    {
        iNo=-iNo;
    }
    for(i=1;i<=iNo/2;i++)
    {
        if((iNo%i==0)&&(i%2==0))
        {
            printf("%d\n",i);
        }
    }
}
int main()
{
    int iValue=0;
    printf("Enter Number\n");
    scanf("%d",&iValue);
    DisplayEvenFactor(iValue);
    return 0;
}