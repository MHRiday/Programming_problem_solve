#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,maxValue = 0,Count = 0;
    cin >> t;
    int arr[t];
    for(int i = 0;i < t;i++)
    {
        cin >> arr[i];
        maxValue = max(maxValue,arr[i]);
    }
    for(int j = 0; j < t;j++)
    {
        if(arr[j] == maxValue)
        {
            Count++;
        }
    }
    cout << Count <<endl;
}

