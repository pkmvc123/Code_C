// Bài 7: Tính S(n) = 1/2 + 2/3 + 3/4 + .... + n / n + 1

#include <iostream>

using namespace std;

float Sum(int n){
	float sum = 0;
	for(int i = 1; i <= n; i++){
		sum += (float)n / (n + 1);
	}
	return sum;
}

int main(){
	
	int n;
	cin >> n;
	cout << Sum(n) << endl;
	
	return 0;
}