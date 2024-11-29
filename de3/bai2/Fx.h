class Fx {
    private:
        double a, b;
    public:
        Fx(double a, double b);

        double calc(double x) const;

        double solve() const;

        Fx operator+(const Fx& other) const;

        friend istream& operator>>(istream& in, Fx& f);
        friend ostream& operator<<(ostream& out, const Fx& f);  
};
