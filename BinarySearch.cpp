
#include <iostream>

#include <bits/stdc++.h>
using namespace std;
int BinarySearch(int A[],int n,int find,int low,int high)
{
    while(low<high)
    {
        int mid=low+(high-low)/2;
        if(A[mid]==find)
        {
             return mid;
        }
        else if(A[mid]>find)
        {
            low=mid-1;
        }
        else if(A[mid]<find)
        {
            high=mid+1;
        }
    }
    return 0;
}
 int main()
{
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    int find;
    cin>>find;
   int ans= BinarySearch(A,n,find,0,n-1);
   return ans;
}