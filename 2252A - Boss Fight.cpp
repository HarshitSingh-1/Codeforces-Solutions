#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    
    map<int, int> freq;
    long long total_sum = 0;
    int max_f = 0;
    int max_val = 0;
 
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        freq[a]++;
        total_sum += a;
        
        if (freq[a] > max_f) {
            max_f = freq[a];
            max_val = a;
        }
    }
 
    int s = n - max_f;
    
    if (max_f > s + 2) {
        long long max_damage = total_sum - 1LL * (max_f - (s + 2)) * max_val;
        cout << max_damage << "\n";
    } else {
        cout << total_sum << "\n";
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}