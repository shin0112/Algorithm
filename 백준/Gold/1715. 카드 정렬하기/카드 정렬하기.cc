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

    priority_queue<int, vector<int>, greater<int>> q;

    int num;
    for (int i = 0; i < N; i++) {
        cin >> num;
        q.push(num);
    }

    int first, second, answer = 0;
    while (q.size() != 1) {
        first = q.top();
        q.pop();
        second = q.top();
        q.pop();

        q.push(first + second);
        answer += first + second;
    }

    cout << answer;

    return 0;
}