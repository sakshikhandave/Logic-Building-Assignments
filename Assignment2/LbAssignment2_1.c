//Accept one number from user and print that number * on screen.

#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
    iCnt = 1;
    while(iCnt <= iNo)
    {
        printf("*\n");
        iCnt ++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}