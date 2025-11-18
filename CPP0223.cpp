#include <iostream>
#include <vector>
using namespace std;

void spiralPrint(vector<vector<int>>& matrix, int N, int M) {
    int top = 0, bottom = N - 1;
    int left = 0, right = M - 1;

    while (top <= bottom && left <= right) {
        
        for (int i = left; i <= right; ++i)
            cout << matrix[top][i] << " ";
        ++top;

    
        for (int i = top; i <= bottom; ++i)
            cout << matrix[i][right] << " ";
        --right;

    
        if (top <= bottom) {
            for (int i = right; i >= left; --i)
                cout << matrix[bottom][i] << " ";
            --bottom;
        }

        
        if (left <= right) {
            for (int i = bottom; i >= top; --i)
                cout << matrix[i][left] << " ";
            ++left;
        }
    }
    cout << endl;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;

        vector<vector<int>> matrix(N, vector<int>(M));
        for (int i = 0; i < N; ++i)
            for (int j = 0; j < M; ++j)
                cin >> matrix[i][j];

        spiralPrint(matrix, N, M);
    }

    return 0;
}

