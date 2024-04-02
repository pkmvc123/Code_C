// Bài 10: Tính T(x, n) = x^n

#include <iostream>

using namespace std;

int Pow(int x, int n){
	int pow = x;
	for(int i = 2; i <= n; i++){
		pow *= x;
	}
	return pow;
}

int main(){
	
	int x, n;
	cin >> x >> n;
	cout << Pow(x, n) << endl;
	
	return 0;
}