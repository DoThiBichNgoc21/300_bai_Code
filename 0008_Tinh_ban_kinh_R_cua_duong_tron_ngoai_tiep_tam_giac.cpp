#include <bits/stdc++.h>

using namespace std;

int main(){
    double a, b, c;
    cin >> a >> b >> c;
    double p = ( a + b + c )/2;
    double S = sqrt( p*(p-a)*(p-b)*(p-c));
    double R = ( a*b*c )/( 4*S );
    cout << setprecision(3) << fixed << R;
    return 0;
}


