#include <iostream>

using namespace std;

int main(void){
    int T; 
    cin >> T;
    int n = 1;

    while(n++ <= T){
        int a ,b;
        cin >> a;
        cin >> b;

        cout << "Case "<< n - 1 << ": " << a+b << endl;
    }
    return 0;
}