#include <iostream>

using namespace std;


int main(void){
    long long int hex[10010],n;

    int t;
    cin >> t;

    for(int i = 1; i <= t; i++){
        // take the all six input
        cin >> hex[0] >> hex[1] >> hex[2] >> hex[3] >> hex[4] >> hex[5] >> n;

        // create fibo : 
        for(int i = 6; i <= n; i++){
            hex[i] = (hex[i-1]+hex[i-2] + hex[i-3] + hex[i-4] + hex[i-5] + hex[i - 6]) % 10000007 ;
        }

        cout << "Case " << i << ": " << hex[n] % 10000007 << endl; 
    }
    return 0;
}