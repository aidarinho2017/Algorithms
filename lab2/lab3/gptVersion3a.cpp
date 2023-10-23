#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int matrix[804][805];

void findCoordinates(int n, int row, int col) {
    int i = 0;
    int j = col - 1;

    while (i < row && j >= 0) {
        if (matrix[i][j] == n) {
            cout << i << " " << j << endl;
            return;
        } else if (matrix[i][j] < n) {
            i++;
        } else {
            j--;
        }
    }

    cout << -1 << endl;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int row, col;
    cin >> row >> col;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin >> matrix[i][j];
        }
    }
    for(int i=0;i<n;i++){
        findCoordinates(a[i], row, col);
    }
    return 0;
}