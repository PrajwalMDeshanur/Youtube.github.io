#include <bits/stdc++.h>
using namespace std;

long long Kadane(vector<int> arr, int n)
{
    // Write your code here.
    long long sum=0;
        long long maxi=INT_MIN;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum>=0)
        maxi=max(sum,maxi);
        else
        {
            sum=0;
        }
      
    }
  if(maxi<0)
  return 0;
    return maxi;
}

int main()
{
    int n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
       cin>>arr[i];   
    }

    int ans = Kadane(arr , n);
    cout << ans;
}