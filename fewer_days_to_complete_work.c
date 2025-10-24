/*
https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-programming-a-batch-08/challenges/farmers-1/submissions/code/1399436451
*/
/*
Suppose there are M1 farmers who can complete a work in D days. Fortunately, some other farmers appeard in the village before the start of the work, and now there are M2 additional farmers. Can you determine how many fewer days it will take for them to complete the task?

Note: If the answer is a floating value, take the integer part of the answer.
*/
/*
Sample Input :
4
10 5 15
4 0 5
4 1 5
7 1000 1
Sample Output :
5
0
1
1
*/


#include<stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    int X;
    int Y;
    int Z;
    int R;
    for(int i = 1; i <= T; i++)
    {
        scanf("%d" , &X);
        scanf("%d" , &Y);
        scanf("%d" , &Z);
        

        R= ((X * Z)/(X+Y));
        R = Z- R;
        printf("%d\n" , R);

    }
}



/*
Hackerrank profile link:
https://www.hackerrank.com/profile/rshf01791
*/

/*
Codechef profile link :
https://www.codechef.com/users/rahat01791
*/

/*
Codeforces profile link :
https://codeforces.com/profile/RAHAT01791
*/
