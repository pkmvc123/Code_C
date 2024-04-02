// Bài 2: Tính S(n) = 1^2 + 2^2 + ... + n^2

#include <iostream>

using namespace std;

int Sum(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i * i;
    }
    return sum;
}

int main() {

    int n;
    cin >> n;
    cout << Sum(n) << endl;

    return 0;
}
