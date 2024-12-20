#include <bits/stdc++.h>
using namespace std;

#define FASTIO                                                                 \
    ios_base::sync_with_stdio(0);                                              \
    cin.tie(0);                                                                \
    cout.tie(0);

int main() {
    FASTIO;

    int N;
    cin >> N;

    priority_queue<long long, vector<long long>, greater<long long>> q;
    long long x;

    for (int i = 0; i < N; i++) {
        cin >> x;

        if (x == 0) {
            if (!q.empty()) {
                cout << q.top() << '\n';
                q.pop();
            } else {
                cout << "0\n";
            }
        } else {
            q.push(x);
        }
    }

    return 0;
}
