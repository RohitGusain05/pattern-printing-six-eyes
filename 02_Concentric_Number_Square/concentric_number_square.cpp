#include <bits/stdc++.h>
using namespace std;
void solve(int n)
{
    for(int i=1;i<=n;i++){
        int track = n;
        int count = i;
        for(int j=1;j<=2*n-1;j++){
           cout << track << " ";
           if(count>1){
                track--;
                count--;
            }
            else if(j >= 2*n-i) track++;
         }
        cout << '\n';
    }

    for(int i=n-1;i>=1;i--){
        int track = n;
        int count = i;
        for(int j=1;j<=2*n-1;j++){
            cout << track << " ";
            if(count>1){
                track--;
                count--;
            }
            else if(j >= 2*n-i) track++;
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
