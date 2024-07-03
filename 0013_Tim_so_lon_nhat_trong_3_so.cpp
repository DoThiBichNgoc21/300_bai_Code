#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int maxx = -1000;
    if ( a != b && b != c && a != c){
        if ( a > maxx ){
            maxx = a;
        }
        if ( b > maxx ){
            maxx = b;
        }
        if ( c > maxx) {
                maxx = c;
        }
        cout << maxx;
    }
    else cout << "=";
    return 0;
}
