#include"Fx.h"

#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

signed main() {

    Fx f1(1, 2);
    Fx f2(3, 4);

    cout << f1.calc(5) << endl;
    cout << f1.solve() << endl;

    Fx f3 = f1 + f2;

    cout << f3.calc(5) << endl;
    cout << f3.solve() << endl;

    return 0;

}
