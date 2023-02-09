//accept one number from user and print that number of even numbers on screen
// input  7
//output  2  4  6  8  10  12  14
#include<stdio.h>
void PrintEven(int iNo)
{
    int iCnt=0;
    if(iNo<=0)
    {
        printf("%d is not allowed\n",iNo);
    }
    printf("First %d  even numbers are\n",iNo);
    for(iCnt=1;iCnt<=iNo*2;iCnt++)
    {
        if(iCnt%2==0)
        {
        printf("%d\n",iCnt);
        }
    }

}
int main()
{
    int ivalue=0;
    printf("Enter Number\n");
    scanf("%d",&ivalue);

    PrintEven(ivalue);

    return 0;
}