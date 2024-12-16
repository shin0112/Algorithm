#include <bits/stdc++.h>
using namespace std;

#define FASTIO                                                                 \
    ios_base::sync_with_stdio(0);                                              \
    cin.tie(0);                                                                \
    cout.tie(0);

bool compare(pair<int, int> a, pair<int, int> b) {
    if (a.first < b.first) {
        return true;
    } else {
        return false;
    }
}

int main() {
    FASTIO;

    int T, N;
    cin >> T;

    while (T--) {
        cin >> N;
        vector<pair<int, int>> v(N, {0, 0});

        for (int i = 0; i < N; i++) {
            cin >> v[i].first >> v[i].second;
        }
        sort(v.begin(), v.end(), compare);

        int cnt = 1, temp = v[0].second;

        for (int i = 1; i < N; i++) {
            if (v[i].second < temp) {
                cnt++;
                temp = v[i].second;
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}