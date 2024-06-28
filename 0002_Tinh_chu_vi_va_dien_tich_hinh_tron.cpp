#include <bits/stdc++.h>

using namespace std;

int main(){
    double r;
    cin >> r;
    double C = r * 2 * 3.14;
    double S = r * r * 3.14;
    cout << setprecision(2) << fixed <<  C << " "
         << setprecision(2) << fixed << S;
    return 0;
}
