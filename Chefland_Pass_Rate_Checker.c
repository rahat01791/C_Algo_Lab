/*                           Exams
In Chefland, there are X schools, and each school has Y students.
The year end results are in and a total of Z students passed the exams.
Assuming that all students appeared for the exams, find whether the number of students who passed in Chefland was strictly greater than 50%.
*/
/*Sample input
4
2 10 12
2 10 3
1 5 3
3 6 9
*/

/* samle output
YES
NO
YES
NO
*/

/*
From codechef https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/EXAMCHEF
*/

#include<stdio.h>
int main (){
    int T;
    scanf("%d" , &T);
    int X , Y;
    int Z;

    for (int i = 1; i <= T ; i++) {
        scanf("%d" , &X);
        scanf("%d" , &Y);
        scanf("%d" , &Z);
        
        if(Z > (X*Y)/2)
        {
            printf("Yes\n");
        }
        else
        {
            printf("NO\n");
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