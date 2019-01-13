#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,A,B,C;
    cin >> t;
    while(t--)
    {
        cin >> A >> B >> C;
        if((A > B && A < C )||( A > C && A < B))
            printf("%d\n",A);
        else if((B > A && B < C) || (B > C && B < A))
            printf("%d\n",B);
        else printf("%d\n",C);
    }

    return 0;
}
