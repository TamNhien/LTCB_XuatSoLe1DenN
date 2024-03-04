#include <iostream>
using namespace std;

int main() {
    int n;

    // Nhập số nguyên n từ người dùng
    cout << "Nhap so nguyen n: ";
    cin >> n;

    // In các số lẻ từ 1 đến n
    cout << "Cac so le tu 1 den " << n << " la : ";
    for (int i = 1; i <= n; i += 2) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
