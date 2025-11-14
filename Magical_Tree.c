/*
    Problem Statement :
    Jingle Bells, Jingle Bells - It's Christmas today! Ranja, our little friend, is all excited, but there's just one thing missing: a Christmas tree.  

    Ranja will provide us with the size of the tree, N, and we'll work our holiday magic to print out that perfect tree. Let's make Ranja's Christmas tree dreams come true!

    You should see the sample input output to understand how the tree looks like.

    Input Format :
    • Input will contain only N.

    Constraints
    • 1 <= N <= 21 ; and N is odd.

    Output Format :
    • Output the tree of size N.
*/
/*
    Sample Input : 
    1
    Sample Output :
             *
            ***
           *****
          *******
         *********
        ***********
             *
             *
             *
             *
             *       
*//* 
    Sample Input :  
    3
    Sample Output :
              *
             ***
            *****
           *******
          *********
         ***********
        *************
             ***
             ***
             ***
             ***
             ***
*//* 
    Sample Input :  
    5
    Sample Output :
                   *
                  ***
                 *****
                *******
               *********
              ***********
             *************
            ***************
                 *****
                 *****
                 *****
                 *****
                 *****
*/

/*
    Author:     MD RAHAT
    Linkedin:   https://www.linkedin.com/in/md-rahat-59b4b238b/
    GitHub:     https://github.com/rahat01791
    Hackerrank: https://www.hackerrank.com/profile/rshf01791
    Codeforces: https://codeforces.com/profile/RAHAT01791
    Leetcode:   https://leetcode.com/u/rahat01791/
    CodeChef:   https://www.codechef.com/users/rahat01791
    CodeChef:   https://www.codechef.com/users/rahat_01791
*/


#include<stdio.h>
#include<stdbool.h>
int main()
{
    int a;
    scanf("%d", &a);

    int b = 0;

    for(int i = 1; i <= a; i++)
    {
        if(a % 2 == 0 )
        {
            return 0;
        }
        if(i % 2 != 0)
        {
            b++;
        }        
    }

    int N = 5 + b;
    int space = N - 1;
    int star = 1;
    
    for(int i = 1; i <= N ; i++)
    {
        for(int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for(int j = 1; j <= star; j++)
        {
            printf("*");
        }

        printf("\n");       
        star+=2;
        space--;         
    }

    for(int i = 1; i <= 5; i++)
    {        
        printf("     ");
        for(int j= 1; j <= a; j++)
        {
            printf("*");
        }
        printf("\n");
    }


    return 0;
}