#include <bits/stdc++.h>
using namespace std;

#define FASTIO                                                                 \
    ios_base::sync_with_stdio(0);                                              \
    cin.tie(0);                                                                \
    cout.tie(0);

int main() {
    FASTIO;

    string S;
    cin >> S;

    int N = S.length();

    vector<string> s(N);

    for (int i = 0; i < N; i++) {
        s[i] = S.substr(i, S.length());
    }

    sort(s.begin(), s.end());

    for (int i = 0; i < N; i++) {
        cout << s[i] << '\n';
    }
    return 0;
}