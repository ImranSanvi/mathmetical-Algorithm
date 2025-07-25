#include<bits/stdc++.h>
using namespace std;

long long stirlingNumberSecondKind(int n , int k){
    if(n == 0 || k == 0){
        return 0;
    }
    else if(n == k || k==1){
        return 1;
    }
    else{
        return stirlingNumberSecondKind(n-1 , k-1) + k * stirlingNumberSecondKind(n-1 , k);
    }
}
int main(){
    int n , k;
    cin >> n >> k;
    cout << stirlingNumberSecondKind(n , k) << endl;

    return 0;
}
