#include <bits/stdc++.h>

using namespace std;

int main(){
    double a, b, c;
    cin >> a >> b >> c;
    double C = a + b + c;
    double p = C / 2;
    double S = sqrt( p*(p-a)*(p-b)*(p-c));
    cout << setprecision(1) << fixed << C << " "
         << setprecision(3) << fixed << S;
    return 0;
}
