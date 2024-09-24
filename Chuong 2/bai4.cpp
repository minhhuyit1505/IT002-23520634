#include <bits/stdc++.h>
using namespace std;

struct Student {
    string id, name, gender;
    float mathScore, physicsScore, chemistryScore;
};

int main() {

    #ifndef ONLINE_JUDGE
    freopen("ab.inp", "r", stdin);
    freopen("ab.out", "w", stdout);
    #else
    // freopen("task.inp", "r", stdin);
    // freopen("task.out", "w", stdout);
    #endif

    Student student;

    cin >> student.id;
    cin.ignore();
    
    getline(cin, student.name);
    cin >> student.gender;
    cin >> student.mathScore;
    cin >> student.physicsScore;
    cin >> student.chemistryScore;

    cout << "Ma hoc sinh: " << student.id << endl
         << "Ho va ten: " << student.name << endl
         << "Gioi tinh: " << student.gender << endl
         << "Diem toan: " << student.mathScore << endl
         << "Diem ly: " << student.physicsScore << endl
         << "Diem hoa: " << student.chemistryScore << endl
         << "Diem trung binh: " 
         << (student.mathScore + student.physicsScore + student.chemistryScore) / 3.0 << endl;

    return 0;
}
