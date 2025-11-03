// pyramid pattern
/*
Input :
    4
*/

/*  
Output :
           * 
          * * 
         * * * 
        * * * *
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
int main()
{
    int N; 
    int star = 1;
    scanf("%d", &N);
    int space = N - 1 ;

    for(int i = 1; i <= N; i++)
    {

        for(int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for(int j = 1; j <= star; j++)
        {
        
            printf("* ");
        }
        printf("\n");
        star++;
        space--;
        
    }
    return 0;
}