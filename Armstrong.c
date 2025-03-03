/*
    Find whether a number is Armstrong number or not.
    Armstrong number is a number that is equal to the sum of its digits each raised to the power of the number of digits.
*/

#include<stdio.h>
#include<math.h>

int isArmstrong(int num)
{
    int n=num;
    double numberOfDigits=0,sum=0;
    while(n != 0)
    {
        n /= 10;
        numberOfDigits++;
    }
    n=num;
    while(n != 0)
    {
        double digit = n%10;
        sum += pow(digit,numberOfDigits);
        n /= 10;
    }
    return (sum == num) ? 1 : 0;
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(isArmstrong(num))
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.",num);
    return 0;
}