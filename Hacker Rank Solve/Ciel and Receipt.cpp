#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main(){
    int T,A,B ,res;
    scanf("%d", &T);
    for(int i = 0;i < T;i++)
    {
      scanf("%d %d",&A,&B);
      int total = (A + B);
      printf("%d %d",A,total);
    }
    return 0;
}
