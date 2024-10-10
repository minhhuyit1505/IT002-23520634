#ifndef LIST_H
#define LIST_H

#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

class List {
private:
    double *arr;         // Con trỏ quản lý mảng
    unsigned int size;   // Kích thước của list

public:
    List();                                // Constructor mặc định
    ~List();                               // Destructor để giải phóng bộ nhớ
    void Add(double x);                    // Thêm phần tử vào list
    void RemoveFirst(double x);            // Xóa phần tử đầu tiên có giá trị x
    void RemoveAll(double x);              // Xóa tất cả phần tử có giá trị x
    void Replace(unsigned int index, double y); // Thay thế phần tử tại vị trí index
    void Print() const;                    // In list hiện tại
};

#endif

