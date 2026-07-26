#include <bits/stdc++.h>
using namespace std;

void printpattern(int total,int row){
        int left = row;
        int right = 2*total-row;
        for(int col=1;col<=2*total;col++){
              if(left>=col|| right<col) cout << "*";
              else cout << " ";
        }
        cout << '\n';
}

void solve(int n)
{
    for(int row=1;row<=n;row++){
      printpattern(n,row);
    }
    for(int row=n-1;row>=1;row--){
      printpattern(n,row);
    }
}

int main()
{
    int n;
    cin >> n;
    solve(n);
    return 0;
}
