
// 1.Write a program which accept number from user and display its multiplication of
// factors.
// Input : 12
// Output : 144 (1 * 2 * 3 * 4 * 6)
// Input : 13
// Output : 1 (1)
// Input : 10
//Output : 10 (1 * 2 * 5) 
#include "header.h"
int main()
{
    int iNo=0;
    int iRet=0;

    printf("enter number\n");
    scanf("%d",&iNo);

    iRet=DisplayFactorMultiplication(iNo);
    
    printf("%d",iRet);

    return 0;
}

