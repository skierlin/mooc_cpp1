#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	long long a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n; i++){
		long int b[a[i]];
		if(a[i] == 1){
			cout << 1 << endl;
			continue;
		}
		b[0] = 1;
		b[1] = 2;
		for(int j = 2; j < a[i]; j++){
			b[j] = 2*b[j-1] + b[j-2];
			b[j] %= 32767;
		}
		cout << b[a[i]-1] << endl;
	}
	return 0;

}