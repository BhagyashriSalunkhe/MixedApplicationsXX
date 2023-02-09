//Accept one character from user and check whether that characher is vowel(a,e,i,o,u) or not
//input :E   Output:TRUE
//Input :d   Output:FALSE
#include<stdio.h>
#include<stdbool.h>


bool ChkVowel(char Value)
{
    if(Value== 'a' || Value== 'e' || Value=='i' || Value=='o'|| Value=='u'||
        Value== 'A' || Value== 'E' || Value=='I' || Value=='O'|| Value=='U'  )
    {
       return true;
    }
    else
    {
        return false;
    }
} 
int main()
{
    char cValue='\0';
    bool bRet=false;

    printf("Enter Character\n");
    scanf("%c",&cValue);
    bRet=ChkVowel(cValue);
    if(bRet==true)
    {
        printf("It is vowel\n");
    }
    else
    {
       printf("It is not Vowel\n");
    }
    return 0;
}