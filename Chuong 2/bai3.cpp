#include <bits/stdc++.h>
using namespace std;

#define int long long

class Matrix {
private:
    vector<vector<int>> data;
    int rows, cols;

public:
    Matrix(int r, int c) : rows(r), cols(c), data(r, vector<int>(c)) {
        nhap();
    }

    void nhap() {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cin >> data[i][j];
            }
        }
    }

    void xuat() const {
        for (const auto& row : data) {
            for (int val : row) {
                cout << val << " ";
            }
            cout << endl;
        }
    }

    Matrix tong(const Matrix& m) const {
        Matrix result(rows, cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result.data[i][j] = data[i][j] + m.data[i][j];
            }
        }
        return result;
    }

    Matrix hieu(const Matrix& m) const {
        Matrix result(rows, cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result.data[i][j] = data[i][j] - m.data[i][j];
            }
        }
        return result;
    }

    Matrix tich(const Matrix& m) const {
        Matrix result(rows, m.cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < m.cols; ++j) {
                for (int k = 0; k < cols; ++k) {
                    result.data[i][j] += data[i][k] * m.data[k][j];
                }
            }
        }
        return result;
    }

    int getRows() const { return rows; }
    int getCols() const { return cols; }
};

signed main() {

    #ifndef ONLINE_JUDGE
    freopen("ab.inp", "r", stdin);
    freopen("ab.out", "w", stdout);
    #else
    // freopen("task.inp", "r", stdin);
    // freopen("task.out", "w", stdout);
    #endif

    int r1, c1;
    cin >> r1 >> c1;
    Matrix m1(r1, c1);

    int r2, c2;
    cin >> r2 >> c2;
    Matrix m2(r2, c2);

    if (r1 != r2 || c1 != c2) {
        cout << "Kích thước ma trận không tương thích để tính tổng và hiệu!" << endl;
        return 0;
    }

    cout << "Tổng hai ma trận:" << endl;
    Matrix sum = m1.tong(m2);
    sum.xuat();

    cout << "Hiệu hai ma trận:" << endl;
    Matrix diff = m1.hieu(m2);
    diff.xuat();

    if (c1 != r2) {
        cout << "Kích thước ma trận không tương thích để tính tích!" << endl;
        return 0;
    }

    cout << "Tích hai ma trận:" << endl;
    Matrix product = m1.tich(m2);
    product.xuat();

    return 0;
}
