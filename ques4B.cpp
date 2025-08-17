#include <iostream>
using namespace std;

int main() {
    int n, m, p, q;
    cin >> n >> m;
    int a[100][100];
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin >> a[i][j];
        }
    }
    cin >> p >> q;
    int b[100][100];
    for(int i=0; i<p; i++) {
        for(int j=0; j<q; j++) {
            cin >> b[i][j];
        }
    }
    if(m != p) {
        cout << "Matrix multiplication not possible" << endl;
        return 0;
    }
    int c[100][100] = {0};
    for(int i=0; i<n; i++) {
        for(int j=0; j<q; j++) {
            c[i][j] = 0;
            for(int k=0; k<m; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for(int i=0; i<n; i++) {
        for(int j=0; j<q; j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
