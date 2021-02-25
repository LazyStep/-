#include <iostream>
#include<time.h>
using namespace std;
int** task(int n){
    srand(time(0));
    int** M = new int* [n];
    int* len = new int[n];
    for (int i = 0; i < n; i++) {
        int m = abs(rand());
        len[i] = m;
        M[i] = new int[m];
        for (int j = 0; j < m; j++)
            M[i][j] = rand();
    }
    int a;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < len[i]; j++) {
            for (int k = 1; k < len[i]; k++) {
                if (i % 2 == 0) {
                    if (M[i][k] < M[i][k - 1]) {
                        a = M[i][k];
                        M[i][k] = M[i][k - 1];
                        M[i][k - 1] = a;
                    }
                }
                else {
                    if (M[i][k] > M[i][k - 1]) {
                        a = M[i][k];
                        M[i][k] = M[i][k - 1];
                        M[i][k - 1] = a;
                    }
                }
            }
        }
    }
    return M;
}
void main() {
    int n;
    cout << "Enter n ";
    cin >> n;
    cout << endl;
    int** M = task(n);
 }

