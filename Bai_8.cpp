// Bài 8: Tính S(n) = 1/2 + 3/4 + 5/6 + ... + 2n + 1/ 2n + 2

#include <iostream>

using namespace std;

float Sum(int n){
	float sum = 0;
	for(int i = 0; i <= n; i++){
		sum += (float)(2 * i + 1) / (2 * i + 2);
	}
	return sum;
}

int main(){
	
	int n;
	cin >> n;
	cout << Sum(n) << endl;
	
	return 0;
}