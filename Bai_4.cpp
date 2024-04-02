// Bài 4: Tính S(n) = 1/2 + 1/4 + ... + 1/2n

#include <iostream>

using namespace std;

float Sum(int n){
    float sum = 0;
    for(int i = 1; i <= n; i++){
        sum += 1 /(float)(2 * i);
    }
    return sum;
}

int main(){

    int n;
    cin >> n;
    cout << Sum(n) << endl;

    return 0;
}