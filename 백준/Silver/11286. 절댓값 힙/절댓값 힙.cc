#include <bits/stdc++.h>
using namespace std;

#define FASTIO                                                                 \
    ios_base::sync_with_stdio(0);                                              \
    cin.tie(0);                                                                \
    cout.tie(0);

class comp {
  public:
    bool operator()(const long long &a, const long long &b) const {
        if (abs(a) > abs(b)) {
            return true;
        } else if (abs(a) == abs(b)) {
            if (a > b) {
                return true;
            }
        }
        return false;
    }
};

int main() {
    FASTIO;

    int N;
    cin >> N;

    priority_queue<long long, vector<long long>, comp> q;
    long long x;

    for (int i = 0; i < N; i++) {
        cin >> x;

        if (x == 0) {
            if (q.empty()) {
                cout << "0\n";
            } else {
                cout << q.top() << '\n';
                q.pop();
            }
        } else {
            q.push(x);
        }
    };

    return 0;
}