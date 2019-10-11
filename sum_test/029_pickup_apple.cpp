#include<iostream>
using namespace std;

int main(){
	int a[10] = {0};
	for(int i = 0; i < 10 ;	i++){
		cin >> a[i];
	}
	int b;
	cin >> b;
	int sum = 0;
	for(int i = 0; i < 10; i++)
		if(a[i] <= b+30)
			sum++;
	cout << sum << endl;
	return 0;
}