#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
    int n;
    cin >> n;
    int res = 0;
    for(int i = 1 ; i <= n ; i++){
        int a;
        cin >> a;
        res += a;
    }
    cout<<res<<'\n';
    return 0;
}