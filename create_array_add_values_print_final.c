/*
9-3 Insert a value in an array implementation from phitron.io :
https://phitron.io/ph028/video/ph028-9-3-insert-a-value-in-an-array-implementation
*/
/*
5
10 30 40 50 60
1 20
*/
/*
Sample intput
Input:
5
10 30 40 50 60
1 20
Output:
10 20 30 40 50 60
*/

#include<stdio.h>
int main()
{   
    
    int N;
    scanf("%d", &N);
    int Arr[N + 1];

    for(int i = 0; i < N; i++)
    {
        scanf("%d", &Arr[i]);
    }
  
    int index;
    scanf("%d", &index);
    int value;
    scanf("%d", &value);
    
    for(int i = N ; i >= index + 1; i--)
    {
        Arr[i] = Arr[i - 1];
    }
    
    Arr[index] = value;

    for(int i = 0; i < N + 1; i++)
    {
        printf("%d ", Arr[i]);
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
