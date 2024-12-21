#include <bits/stdc++.h>
using namespace std;

#define FASTIO                                                                 \
    ios_base::sync_with_stdio(0);                                              \
    cin.tie(0);                                                                \
    cout.tie(0);

int main() {
    FASTIO;
    int N, K, index = 0;
    cin >> N >> K;

    vector<int> v(N, 0);
    for (int i = 0; i < N; i++) {
        v[i] = i + 1;
    }

    cout << "<";

    for (int i = 0; i < N; i++) {
        index += K;
        index = index % v.size() - 1;

        if (index < 0) {
            index = v.size() - 1;
        }

        cout << v[index];
        v.erase(v.begin() + index);
        if (i < N - 1) {
            cout << ", ";
        }
    }

    cout << ">";

    return 0;
}