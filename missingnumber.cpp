/*ou are given all numbers between 1,2,…,n except one. Your task is to find the missing number.

Input

The first input line contains an integer n.

The second line contains n−1 numbers. Each number is distinct and between 1 and n (inclusive).

Output

Print the missing number.

Constraints
2≤n≤2⋅105
Example

Input:
5
2 3 1 5

Output:
4
*/
#include<iostream>
using namespace std;
int main()
{
    int n,a[10000000],val;
    cin>>n;
    int sum1=0;
    for(int i=0;i<n-1;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++)
    {
        sum1+=a[i];
    }
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=i;

    }
    val=sum-sum1;
    cout<<val;
}
