// Bài 9: Tính T(n) = 1 x 2 x 3...x N

#include <iostream>

using namespace std;

int Res(int n){
	int res = 1;
	for(int i = 1; i <= n; i++){
		res *= i;
	}
	return res;
}

int main(){
	
	int n;
	cin >> n;
	cout << Res(n) << endl;
	
	return 0;
}