#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int data,min=1000,max=0;
	for(int i = 0; i < n; i++){
		cin >> data;
		if(data < min)
			min = data;
		if(data > max)
			max = data;
	}
	cout << max - min << endl;
	return 0;
}