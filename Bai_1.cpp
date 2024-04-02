// Bài 1: Tính S(n) = 1 + 2 + 3 + ... + n

#include <iostream>

using namespace std;

int Sum(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    return sum;
}

int main() {

    int n;
    cin >> n;
    cout << Sum(n) << endl;

    return 0;
}
