#include <bits/stdc++.h>
using namespace std;
void solve(int n)
{
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*n;j++){
            if(i>=j)  cout << j;
            else if(j > (2*n-i)) cout << (2*n-j+1);
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
