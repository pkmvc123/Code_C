// Bài 5: Tính S(n) = 1 + 1/3 + 1/5 + ... + 1/(2n + 1)

#include <iostream>

using namespace std;

float Sum(int n){
	float sum = 0;
	for(int i = 0; i <= n; i++){
		sum += 1 / (float)(2 * i + 1);
	}
	return sum;
}

int main(){
	
	int n;
	cin >> n;
	cout << Sum(n) << endl;
	
	return 0;
}