/*
Input :
5
4 9 3 2 5
9
*/

/*
Output :
4 + 5 = 9
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
    scanf("%d", &N);
    int vlue[N];
    
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &vlue[i]);
    }

    int output_vlue;
    scanf("%d", &output_vlue);
    
    int Not_finding_index = 0;

    for(int i = 0; i < N - 1; i++)
    {
        for(int j = 1; j < N; j++)
        {
            if( vlue[i] + vlue[j] == output_vlue)
            {
                Not_finding_index = 1;
                printf("%d + %d = %d\n",vlue[i],vlue[j]);        
            }
        }
    }

    if (Not_finding_index == 0)
    {
        printf("Sorry, we could not find the index");
    }

    return 0;
}