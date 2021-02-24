#include <iostream>
using namespace std;
#include <vector>

int main() {
    int n;
    
    cin >> n;
    
    vector<int> a(n);
    vector<double> b(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    for (int i = 0; i < n; ++i) {
        double sum = 0;
        for (int j = 0; j <= i; ++j) {
            sum += a[j];
        }
        
        b[i] = sum / (i + 1);
    }
    
    for (int i = 0; i < n; ++i) {
        cout << b[i] << " ";
    }
    
    return 0;
}