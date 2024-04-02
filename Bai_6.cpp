// Bài 6: Tính S(n) = 1/1x2 + 1/2x3 +...+ 1/n x (n + 1)

#include <iostream>

using namespace std;

float Sum(int n){
	float sum = 0;
	for(int i = 1; i <= n; i++){
		sum += 1 / (float)(n * (n + 1));
	}
	return sum;
}

int main(){
	
	int n;
	cin >> n;
	cout << Sum(n) << endl;
	
	return 0;
}