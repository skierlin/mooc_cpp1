#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a = 0,b = 0,c = 0;
	int data1,data2,data3;
	for(int i = 0; i < n; i++){
		cin >> data1 >> data2 >> data3;
		a += data1;
		b += data2;
		c += data3;
	}
	cout << a << " " << b << " " << c << " " << a+b+c << endl;
	return 0;
}