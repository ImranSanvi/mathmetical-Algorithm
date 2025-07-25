// Optimized DP-based solution to count 
// derangements with O(1) space
//recurrence relation : F(n) = (n – 1) * (F(n – 1) + F(n – 2)


#include <bits/stdc++.h>
using namespace std;
const long long M = 1e9+7;

int derangements(int n) {
  
    // Base cases
    if (n == 1) return 0;
    if (n == 2) return 1;
    
    // Variables to store previous two results
      // Equivalent to dp[1]
    int prev2 = 0; 
  
      // Equivalent to dp[2]
    int prev1 = 1; 

    // Calculate derangements using the optimized 
      // space approach
    for (int i = 3; i <= n; i++) {
        int curr = ( (i - 1)%M * (prev1 + prev2)%M )%M;
        prev2 = prev1%M;
        prev1 = curr%M;
    }

    return prev1;
}

void solve(){
    int n;
    cin >> n;
    cout << derangements(n) << endl;
}

int main() {
    solve();
    return 0;
}
