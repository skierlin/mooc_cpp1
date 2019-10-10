#include <iostream>
using namespace std;
int main(){
	int a,n;
	cin >> a >> n;
	int pow = 1;
	for(int i = 0; i < n; i++){
		pow *= a;
	}
	cout << pow << endl;
	return 0;
}