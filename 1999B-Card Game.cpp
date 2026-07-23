#include <bits/stdc++.h>

using namespace std;

int get_score(int x, int y) {
    if (x > y) return 1;
    if (x < y) return -1;
    return 0;
}

bool suneet_wins(int a1, int b1, int a2, int b2) {
    int score1 = get_score(a1, b1);
    int score2 = get_score(a2, b2);
    return (score1 + score2) > 0;
}

void solve() {
    int a1, a2, b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;

    int wins = 0;

    if (suneet_wins(a1, b1, a2, b2)) wins++;
    if (suneet_wins(a1, b2, a2, b1)) wins++;
    if (suneet_wins(a2, b1, a1, b2)) wins++;
    if (suneet_wins(a2, b2, a1, b1)) wins++;

    cout << wins << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}