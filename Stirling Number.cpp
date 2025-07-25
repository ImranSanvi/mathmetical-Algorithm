#include<bits/stdc++.h>
using namespace std;

long long stirlingNumberFirstKind(int n , int k){
    if(n == 0 || k == 0){
        return 0;
    }
    else if(n == k){
        return 1;
    }
    else{
        return stirlingNumberFirstKind(n-1 , k-1) + (n-1) * stirlingNumberFirstKind(n-1 , k);
    }
}
int main(){
    int n , k;
    cin >> n >> k;
    cout << stirlingNumberFirstKind(n , k) << endl;

    return 0;
}
