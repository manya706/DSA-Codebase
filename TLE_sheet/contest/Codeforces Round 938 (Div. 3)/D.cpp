#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

void countProgressiveSquares() {
    int N, M, K;
    cin >> N >> M >> K;
    map<int, int> freqB, freqA;
    vector<int> arrayA(N), arrayB(M);

    for (int i = 0; i < N; ++i) {
        cin >> arrayA[i];
    }
    for (int i = 0; i < M; ++i) {
        cin >> arrayB[i];
        freqB[arrayB[i]]++;
    }

    int currentMatches = 0, progressiveSquaresCount = 0;
    for (int i = 0; i < M; i++) {
        freqA[arrayA[i]]++;
    }

    for (auto it : freqB) {
        int val = it.first;
        if (freqA.find(val) != freqA.end()) {
            currentMatches += min(it.second, freqA[val]);
        }
    }

    if (currentMatches >= K) {
        progressiveSquaresCount++;
    }

    if (N == M) {
        cout << progressiveSquaresCount << endl;
        return;
    }

    for (int i = 0; i < N - M; i++) {
        if (arrayA[i] != arrayA[i + M]) {
            currentMatches -= min(freqB[arrayA[i]], freqA[arrayA[i]]);
            currentMatches -= min(freqB[arrayA[i + M]], freqA[arrayA[i + M]]);

            freqA[arrayA[i]]--;
            freqA[arrayA[i + M]]++;

            currentMatches += min(freqB[arrayA[i]], freqA[arrayA[i]]);
            currentMatches += min(freqB[arrayA[i + M]], freqA[arrayA[i + M]]);
        }
        if (currentMatches >= K) {
            progressiveSquaresCount++;
        }
    }

    cout << progressiveSquaresCount << endl;
}

int main() {
    int T;
    cin >> T;
    while (T-- > 0) {
        countProgressiveSquares();
    }
    return 0;
}
