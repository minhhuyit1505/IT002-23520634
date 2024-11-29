#include<Fx.h>
#include<bits/stdc++.h> 

using namespace std;

Fx::Fx(double a, double b) {
    if (a == 0) {
        throw invalid_argument("a cannot be 0");
    }
    this->a = a;
    this->b = b;
}

double Fx::calc(double x) const {
    return a * x + b;
}

double Fx::solve() const {
    return -b / a;
}

Fx Fx::operator+(const Fx& other) const {
    return Fx(this->a + other.a, this->b + other.b);
}

istream& operator>>(istream& in, Fx& f) {
    in >> f.a >> f.b;
    return in;
}

ostream& operator<<(ostream& out, const Fx& f) {
    out << f.a << "x + " << f.b;
    return out;
}

