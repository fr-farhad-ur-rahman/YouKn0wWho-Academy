#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    int ans;
    if(a > b){
        ans = a + (a - 1);
    }
    else if(b > a){
        ans = b + (b - 1);
    }
    else ans = a + b;

    cout << ans << endl;
    
    return 0;
}