/*
In this problem you will be given an integer N, followed by an array containing N numbers.
Each numbers will be either 0 or 1.
You will also be an integer X.
You will have to toggle the X_th value in the array. Toggle means if the value is 0, you will make it 1 and if it is 1 you have to make it 0.
Then you have to print the array.
*/
/*
Sample Input :
5
0 1 1 0 0
4
Sample Output :
0 1 1 1 0
Sample Input :
4
0 1 1 1
1
Sample Output :
1 1 1 1
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
    int arr[N];

    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &arr[i]);
    }
    int X;
    scanf("%d", &X);

    for (int i = 1; i <= N; i++)
    {
        if (i == X)
        {
            printf("1 ");
        }
        else
        {
            printf("%d ",arr[i]);
        }
    }
    return 0;
}