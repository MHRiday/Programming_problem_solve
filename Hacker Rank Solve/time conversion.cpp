#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int arr[t];
    for(int i = 0;i < t;i++)
    {
        cin >> arr[i];
        if(arr[i] >=38 and arr[i] % 5 == 0)
            cout << arr[i] <<endl;
        else if(arr[i] >=38 && arr[i] % 5 != 0 && ((arr[i]) % 5) >= 3)
        {
            cout << (arr[i] + 5) - ((arr[i] + 5) % 5) <<endl;;
        }
        else if(arr[i] >=38 && arr[i] % 5 != 0 && (arr[i] % 5) < 3)
        {
            cout << arr[i] <<endl;;
        }
        else{
            cout << arr[i] <<endl;
        }
    }
}
