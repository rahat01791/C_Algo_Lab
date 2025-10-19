/*
https://www.hackerrank.com/contests/assignment-02-a-introduction-to-c-programming-a-batch-08/challenges/say-it/submissions/code/1399146441
*/
/*
Problem Statement
You will be given a positive integer N. You need to print "I Want More Assignments" N times without the quotation mark. Also print from 1 to N with it. See the sample input output for more clarifications.
*/

/*
sample input:
5
output:
1. I Want More Assignments
2. I Want More Assignments
3. I Want More Assignments
4. I Want More Assignments
5. I Want More Assignments
*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);
    for(int i = 1; i <=N; i++)
    {
        printf("%d. I Want More Assignments\n",i);
    }
    return 0;
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