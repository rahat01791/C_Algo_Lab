/*
https://www.hackerrank.com/contests/assignment-01-a-introduction-to-c-programming-a-batch-08/challenges/divisible-2-1-1/submissions/code/1398746227
*/

/*
sample input
100
output 
21
42
63
84
*/

/*
You will be given a non-negative integer N, you need to print all numbers from 1 to N that are divisible by both 3 and 7.
*/

#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);

    
    for (int i= 1; i<=N; i++){
        int a = 3*7;
        if(i % a == 0)
        {
            printf("%d\n",i);
        }
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