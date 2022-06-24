#include <iostream>

using namespace std;

int table[5][5] = {
    {  1,   4,   5, 16, 17},
    {  2,   3,   6, 15, 18},
    {  9,   8,   7, 14, 19},
    {20,  13, 12, 11, 10},
    {21,  22, 23, 24, 25}
};

int main(void){
    int test_case;
    cin >> test_case;

    for(int i = 1; i <= test_case; i++){
        // get secound
        long long int secound;
        cin >> secound;
        secound = secound > 25 ? secound % 25 : secound;

        // get cell
        int col,row; 
        
        row = 0;
        while(row < 5){
            bool is_find = false;

            col = 0;
            while (col < 5){
                if(table[row][col] == secound){
                    is_find = true;
                    break;
                }

                col++;
            }

            if(is_find) break;
            row++;
        }
        
        cout << "Case " << i <<": " << col+1 << " " << row+1 << endl;
    }
    return 0;
}