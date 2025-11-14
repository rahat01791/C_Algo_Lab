/*
    Problem Statement : 
    You will be given a matrix of size N * M. You need to tell if it is Jadu Matrix or not.
    • Note: A Jadu Matrix is a square matrix, where the values of primary diagonal and secondary diagonal are 1. Rest of the cell will contain only 0.

    Input Format :
    • First line will contain N, the row and M, the column of the matrix.
    • hen the N * M sized matrix will be given.

    Constraints :
    • 1 <= N, M <= 100
    • 0 <= Values <= 100
    
    Output Format :
    • Ouput "YES" if the matrix is Jadu Matrix, otherwise output "NO" without the quotation marks.
*/

  /* Sample 0 */    
/*
    Input:
    5 5
    1 0 0 0 1
    0 1 0 1 0
    0 0 1 0 0
    0 1 0 1 0
    1 0 0 0 1

    Output:
    YES
    
*/
    /* Sample 1 *//*
    Input:
    5 5
    1 0 0 0 1
    0 1 0 1 0
    0 0 0 0 0
    0 1 0 1 0
    1 0 0 0 1

    Output:
    NO 
*/

    /* Sample 2 *//*
    Input:
    5 5
    1 0 0 0 1
    0 1 0 1 0
    0 0 1 0 1
    0 1 0 1 0
    1 0 0 0 1

    Output:
    NO
*/
    /* Sample 3 *//*
    Input:
    5 5
    2 0 0 0 1
    0 1 0 1 0
    0 0 1 0 0
    0 1 0 1 0
    1 0 0 0 1

    Output:
    NO
*/
    /* Sample 4 *//*
    Input:
    6 6
    1 0 0 0 0 1
    0 1 0 0 1 0
    0 0 1 1 0 0
    0 0 1 1 0 0
    0 1 0 0 1 0
    1 0 0 0 0 1

    Output:
    YES
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
#include<stdbool.h>
int main()
{
    int row;
    scanf("%d ", &row);

    int column;
    scanf("%d", &column);

    int arr[row][column];
    for(int r = 0; r < row; r++){
        for(int c = 0; c < column; c++){
            scanf("%d", &arr[r][c]);
        }
    }

    bool checking_1 = true;
    if(row != column)
    {
        printf("NO\n");
        return 0;        
    }

    else
    {
        for(int r = 0; r < row; r++)
        {
             for(int c = 0; c < column; c++)
            {
                if((r == c && arr[r][c] != 1) || (r + c == row - 1 && arr[r][c] != 1) || (r != c && r + c != row - 1 && arr[r][c] != 0))
                {
                    printf("NO");
                    checking_1 == false;
                    return 0;
                    
                }               
            }
        }
    }

    if(checking_1 == true){
        printf("YES");
    }

    else{
        printf("NO");
    }
} 


