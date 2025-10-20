/*
https://codeforces.com/group/MWSDmqGsZm/contest/219158/my
*/
/*
Given 3 numbers A, B and C, Print the minimum and the maximum numbers.
*/
/*
Sample Input :
1 2 3
-1 -2 -3
Sample Output :
1 3
-3 -1
*/

#include<stdio.h>
int main()
{
	int a;
    scanf("%d", &a);
    int b;
    scanf("%d", &b);
    int c;
    scanf("%d", &c);
	
    if(a <= b && a <= c)
	{
	    printf("%d ",a);
	}
	else if (b <= c && b <= a)
	{
		printf("%d ",b);
	}	
	else 
	{
	    printf("%d ", c);
	}

	if(a >= b && a >= c)
	{
		printf("%d",a);
    }
    else if (b >= c && b >= a)
	{
		printf("%d",b);
	}
    else
    {
        printf("%d",c);
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