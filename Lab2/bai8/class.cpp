#include "class.h"

// Constructor mặc định, khởi tạo list rỗng
List::List() : arr(nullptr), size(0) {}

// Destructor, giải phóng bộ nhớ của mảng
List::~List() {
    delete[] arr;
}

// Thêm phần tử vào list
void List::Add(double x) {
    // Tạo một mảng mới với kích thước lớn hơn
    double *newArr = new double[size + 1];

    // Copy các phần tử từ mảng cũ sang mảng mới
    for (unsigned int i = 0; i < size; i++) {
        newArr[i] = arr[i];
    }

    // Thêm phần tử mới vào cuối mảng
    newArr[size] = x;

    // Xóa mảng cũ và cập nhật mảng mới
    delete[] arr;
    arr = newArr;
    size++;
}

// Xóa phần tử đầu tiên có giá trị x trong list
void List::RemoveFirst(double x) {
    for (unsigned int i = 0; i < size; i++) {
        if (arr[i] == x) {
            // Tạo mảng mới với kích thước nhỏ hơn
            double *newArr = new double[size - 1];

            // Copy các phần tử trước và sau phần tử cần xóa
            for (unsigned int j = 0; j < i; j++) {
                newArr[j] = arr[j];
            }
            for (unsigned int j = i + 1; j < size; j++) {
                newArr[j - 1] = arr[j];
            }

            // Xóa mảng cũ và cập nhật mảng mới
            delete[] arr;
            arr = newArr;
            size--;
            return;
        }
    }
}

// Xóa tất cả các phần tử có giá trị x trong list
void List::RemoveAll(double x) {
    unsigned int newSize = 0;

    // Đếm số lượng phần tử không phải x
    for (unsigned int i = 0; i < size; i++) {
        if (arr[i] != x) {
            newSize++;
        }
    }

    // Tạo mảng mới với kích thước bằng newSize
    double *newArr = new double[newSize];
    unsigned int index = 0;

    // Copy các phần tử không phải x vào mảng mới
    for (unsigned int i = 0; i < size; i++) {
        if (arr[i] != x) {
            newArr[index++] = arr[i];
        }
    }

    // Xóa mảng cũ và cập nhật mảng mới
    delete[] arr;
    arr = newArr;
    size = newSize;
}

// Thay thế phần tử tại vị trí index bằng y
void List::Replace(unsigned int index, double y) {
    if (index < size) {
        arr[index] = y;
    }
}

// In list hiện tại theo định dạng [a,b,c,...]
void List::Print() const {
    cout << "[";
    for (unsigned int i = 0; i < size; i++) {
        cout << fixed << setprecision(1) << arr[i];
        if (i < size - 1) {
            cout << ",";
        }
    }
    cout << "]" << endl;
}

