// Bài 3: Tính S(n) = 1 + 1/2 + 1/3 + ... + 1/n

#include <iostream>

using namespace std;

float Sum(int n){
    float sum = 0;
    for(float i = 1; i <= n; i++){
        sum += 1 / i;
    }
    return sum;
}

int main(){

    int n;
    cin >> n;
    cout << Sum(n) << endl;

    return 0;
}