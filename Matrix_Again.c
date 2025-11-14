/*
    Problem Statement :
    You will be given a 2D matrix of N * M size. The matrix will contain integer    values only. You need to print the values of last row and then print the values of     last column in the order they were given.

    Input Format :
    First line will contain N and M the row and column respectively.
    Then the 2D matrix will be given.
    Constraints

    2 <= N,M <= 100
    0 <= Element <= 100

    Output Format :
    First line will contain the values of last row.
    Second line will contain the values of last column.

    Sample Input :   |  Sample Output :
    3 4              |  
    1 2 3 4          |  6 5 4 2
    5 6 7 8          |  4 8 2     
    6 5 4 2          |    
   _____________________________________
   
    Sample Input :   |  Sample Output :
    5 3              |  
    1 2 3            | 1 2 3
    5 6 7            | 3 7 4 4 3
    6 5 4            | 
    3 5 4            |  
    1 2 3            |  

*/

/*
    Author: MD RAHAT
    Linkedin:   https://www.linkedin.com/in/md-rahat-59b4b238b/
    GitHub:     https://github.com/rahat01791
    Hackerrank: https://www.hackerrank.com/profile/rshf01791
    Codeforces: https://codeforces.com/profile/RAHAT01791
    Leetcode:   https://leetcode.com/u/rahat01791/
    CodeChef:   https://www.codechef.com/users/rahat01791
    CodeChef:   https://www.codechef.com/users/rahat_01791
*/


#include<stdio.h>
int main()
{
    int row, column;
    scanf("%d %d", &row, &column);

    int arr[row][column];
    for (int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            if(i == row - 1)
            {
                printf("%d ", arr[i][j]);
            }
        }
    }

    printf("\n");
    for (int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            if(j == column - 1)
            {
                printf("%d ", arr[i][j]);
            }
        }
    }    
    return 0;
}