#include <bits/stdc++.h>

using namespace std;

int main(){
    int s;
    cin >> s;
    int m = s / 60;
    s = s % 60;
    int h = m / 60;
    m = m % 60;
    cout << h << ":" << m << ":" << s;
    return 0;
}
