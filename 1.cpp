#include <iostream>
using namespace std;
#include <vector>

int main() {
    int n;
    
    cin >> n;
    
    vector<int> a(n);
    vector<int> b(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }
    
    for (int i = 0; i < n; ++i) {
        int tmp = a[i];
        a[i] = b[i];
        b[i] = tmp;
    }
    
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; ++i) {
        cout << b[i] << " ";
    }
    
    return 0;
}