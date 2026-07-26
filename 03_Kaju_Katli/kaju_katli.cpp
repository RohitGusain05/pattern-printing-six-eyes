#include <bits/stdc++.h>
using namespace std;

void solve(int n)
{
    for(int i=1;i<=n;i++){
        int left = n-i+1;
        int right = n+i-1;
        for(int j=1;j<=n+i-1;j++){
           if(left==j|| right==j) cout << "*";
           else cout << " ";
        }
        cout << '\n';
    }
    for(int i=n-1;i>=1;i--){
        int left = n-i+1;
        int right = n+i-1;
        for(int j=1;j<=n+i-1;j++){
            if(left==j|| right==j) cout << "*";
            else cout << " ";  
        }
        cout << '\n';
    }
}

int main()
{
    int n;
    cin >> n;
    solve(n);
    return 0;
}
