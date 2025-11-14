/*
    You will be given an array A and the size of that array N. You need to make a copy of this  array named B. Then sort the array B in ascending order.
    After that, you need to make another array C, where each index i (0 <= i < N) of array C is the     absolute difference between array A[i] and B[i].
*/

/*
    That means,

    C[0] = |A[0] - B[0]|
    C[1] = |A[1] - B[1]|
    C[2] = |A[2] - B[2]|
    .....
    .....
    C[N-1] = |A[N-1] - B[N-1]|
*/

/*
    Here, || means the absolute value. After making the array C, print that array.
    Input Format :
    First line will contain T, the number of test cases.
    First line of each test case will contain N.
    Second line of each test case will contain the array A.
    Constraints

    1 <= T <= 100
    1 <= N <= 1000
    0 <= A[i] <= 1000

    Output Format :
    Output the array C.
*/

/*
    Sample Input :
    2                      // test_case
    5                     //  Array_size
    5 4 3 2 1            //   Array_element
    6                   //    2nd_array_size
    2 4 5 6 5 1        //     2nd_array_element
    
    Sample Output :
    4 2 0 2 4 
    1 2 1 1 0 5 
*/

/*
    Explanation :
    In the first test case, A=[5,4,3,2,1], B=[1,2,3,4,5], so array C=[|5-1|,|4-2|,|3-3|,|2-4|,|1-5|]
    In the second test case, A=[2,4,5,6,5,1], B=[1,2,4,5,5,6], so array C=[|2-1|,|4-2|,|5-4|,|6-5|,|5-5|,|1-6|] 
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
#include<stdlib.h>
int main()
{
    int Test_case;
    scanf("%d", &Test_case);

    for(int i = 1; i <= Test_case; i++)
    {
        int array_size;
        scanf("%d", &array_size);

        int A[array_size], B[array_size];
        for(int i = 0; i < array_size; i++)
        {
            scanf("%d", &A[i]);
            B[i] = A[i];    
        }

        for(int i = 0; i < array_size - 1; i++){
            for(int j = i + 1; j < array_size; j++){
                if(B[i] > B[j]){
                    int Temporary_variable;
                    Temporary_variable = B[i];
                    B[i] = B[j];
                    B[j] = Temporary_variable;                    
                }
            }
        }

        int C[array_size];
        for(int i = 0; i < array_size; i++){
            C[i] = abs(A[i] - B[i]);
        }
        
        for(int i = 0; i < array_size; i++){
            printf("%d ", C[i]);
        }

        printf("\n");
    }
    return 0;
}