#include <iostream>

using namespace std;

int main(void){
    int T;
    cin >> T;

    while(T--){
        int n;
        cin >> n;
        if(n > 10){
            cout << n - 10 <<" " << 10 << endl;
        }else{
            cout << n << " " << "0" << endl;
        }
    }
    return 0;
}