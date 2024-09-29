#include<bits/stdc++.h>

#define int long long
#define double long double


using namespace std;

signed main() {
    double x, sinx = 0, term;
    int n = 0;

    cin >> x;

    // Tính giá trị sin(x) theo công thức khai triển Taylor
    do {
        term = pow(-1, n) * pow(x, 2 * n + 1) / tgamma(2 * n + 2);
        sinx += term;
        n++;
    } while (fabs(term) >= 0.00001); // Điều kiện dừng khi sai số nhỏ hơn 0.00001

    cout << "sin(" << x << ") = " << sinx << endl;

    return 0;
}
