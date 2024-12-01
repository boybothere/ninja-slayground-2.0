#include <bits/stdc++.h> 
vector<int> addOneToNumber(vector<int> arr)
{
    int n=arr.size(),carry=1;
    for(int i=n-1;i>=0;i--){
        int sum=arr[i]+carry;
        arr[i]=sum%10;
        carry=sum/10;

    }
    if(carry>0){
        arr.insert(arr.begin(),carry);
    }
    while(arr[0]==0){
        arr.erase(arr.begin());
    }
    return arr;
}