/*
Function Definition (with parameters)
*/
/*
Input :
50 30
Output :
Enter the num_1 = 50
Enter the num_2 = 30
Your Summation ans is = 80
Your Multiplication ans is = 1500
Your Subtraction  ans is = 20
Your Division ans is = 1
Congratulations! This answer is correct.
*/

/*
Author: MD RAHAT
GitHub: https://github.com/rahat01791
Hackerrank: https://www.hackerrank.com/profile/rshf01791
Codeforces: https://codeforces.com/profile/RAHAT01791
Leetcode: https://leetcode.com/u/rahat01791/
CodeChef: https://www.codechef.com/users/rahat01791
CodeChef: https://www.codechef.com/users/rahat_01791
*/

#include<stdio.h>
#include <stdbool.h>
// Function Definition (with parameters)
int sum(int num_1, int num_2)
{
    int Summation = num_1 + num_2;
    printf("Your Summation ans is = %d\n", Summation);
    return Summation;
}

int Multi(int num_1, int num_2)
{
    int Multiplication = num_1 * num_2;
    printf("Your Multiplication ans is = %d\n", Multiplication);
    return Multiplication;
}

int sub(int num_1, int num_2)
{
    int Subtraction = num_1 - num_2;
    printf("Your Subtraction  ans is = %d\n", Subtraction);
    return Subtraction;
}

int div(int num_1, int num_2)
{
    if (num_2 == 0)
    {
        printf("Division by 0 not possible!\n");
        return 0;
    }
    else
    {
        int Division = num_1 / num_2;
        printf("Your Division ans is = %d\n", Division);
        return Division;
    }
}

int main()
{
    int num_1, num_2;
    printf("Program will exit when all of the following conditions are met:\n");
    printf("1. Summation == 80\n");
    printf("2. Multiplication == 1500\n");
    printf("3. Subtraction == 20\n");
    printf("4. Division == 1\n");


    while(true)
    {
        printf("Enter the num_1 = ");
        scanf("%d", &num_1); 
        printf("Enter the num_2 = ");  
        scanf("%d", &num_2);

        int Summation = sum(num_1,num_2);
        int Multiplication = Multi(num_1,num_2);
        int Subtraction = sub(num_1,num_2);
        int Division = div(num_1,num_2);
        
        if(Summation == 80 && Multiplication == 1500 && Subtraction == 20 && Division == 1)
        {
            printf("Congratulation, this ans is Correct.");
            break;
        }
        else if(Summation == 100)
        {
            printf("Congratulations! This answer is correct.\n");           
        }    
    }
    return 0;
}


