#include <iostream>
using namespace std;
int main(){
	int n = 0;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int res = 0;
	cin >> res;
	int sum = 0;;
	for(int i = 0; i < n; i++){
		if(a[i] == res)
			sum++;
	}
	cout << sum << endl;
	return 0;
}