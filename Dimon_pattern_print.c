/*
Author: MD RAHAT
GitHub: https://github.com/rahat01791
Hackerrank: https://www.hackerrank.com/profile/rshf01791
Codeforces: https://codeforces.com/profile/RAHAT01791
Leetcode: https://leetcode.com/u/rahat01791/
CodeChef: https://www.codechef.com/users/rahat01791
CodeChef: https://www.codechef.com/users/rahat_01791
*/


/*
Problem Statement :
You will be given a positive integer N, you need to print a pattern shown below using this N. For example: If N=5, the pattern will look like below.
*/

/*
Sample Input :
7
Sample Output :

      #
     ---
    #####
   -------
  #########
 -----------
#############
 -----------
  #########
   -------
    #####
     ---
      #

*/


#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);

    int ch = 1;
    int space = N - 1 ;

    for(int i = 1; i <= N; i++)
    {    
        for(int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for(int j =1; j <= ch; j++)
        {
            if(i % 2 == 0)
            {
                printf("-");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
        ch+=2;
        space--;
    }

    ch-=4;
    space = 1;

    for(int i = N - 1; i > 0; i--)
    {
        for(int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for(int j =1; j <= ch; j++)
        {
            if(i % 2 == 0)
            {
                printf("-");
            }
            else
            {
                printf("#");
            }    
        }
        printf("\n");
        ch-=2;
        space++;

    }
    printf("\n");
    return 0;
}
