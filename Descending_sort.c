// Descending

/*
Input :
4
20 40 10 30
*/

/*
Output :
40 30 20 10
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
    int unsort[N]; 
    
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &unsort[i]);
    }
    
    for(int i = 0; i < N - 1; i++)
    {
        for(int j = i + 1; j < N; j++)
        {
            if(unsort[i] > unsort[j])
            {
                int swap = unsort[i];
                unsort[i] = unsort[j];
                unsort[j] = swap;
            }
            
        }
    }
    for(int i = 0; i < N; i++)
    {
        printf("%d\n", unsort[i]);
    }
    return 0;
}

