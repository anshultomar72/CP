#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

bool hasDistinctIndices(const vector<int>& A, int N) {
    unordered_set<int> uniqueSums;

    for (int i = 0; i < N; i+2) {
        for (int j = i + 1; j < N; ++j) {
            int currentSum = A[i] + A[j];

            if (uniqueSums.count(currentSum) > 0) {
                return true;
            }

            uniqueSums.insert(currentSum);
        }
    }

    return false;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        if (hasDistinctIndices(A, N)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
