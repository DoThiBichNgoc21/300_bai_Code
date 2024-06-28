#include <bits/stdc++.h>

using namespace std;

int main(){
    int T, HS;
    cin >> T >> HS;
    int cnt = T / HS;
    int res = T % HS;
    cout << cnt << " " << res;
    return 0;
}
