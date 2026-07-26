#include <bits/stdc++.h>
using namespace std;

void solve(int n)
{
    for(int i=n;i>=1;i--){
        for(int j=1;j<=2*n;j++){
            if(i>=j||j>2*n-i) cout << "*";
            else cout << " ";
        }
        cout << '\n';
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*n;j++){
            if(i>=j||j>2*n-i) cout << "*";
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
