/*
9-3 Insert a value in an array implementation from phitron.io :
https://phitron.io/ph028/video/ph028-9-3-insert-a-value-in-an-array-implementation
*/
/*
Given an integer N, create an array of size N. Then take input from the user in the form of:
    • an index, and
    • a value.
You need to add the value to the array at the given index.
After all inputs, print the final array..
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

