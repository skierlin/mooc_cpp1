#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int l,r;
	cin >> l >> r;
	int temp = r;
	int size = 0;
	while(temp != 0){
		temp /= 10;
		size++;
	} 
	int sum = 0;
	for(int i = l; i <= r; i++){
		for(int j = 0; j < size; j++){
			if( ( (i/(int)pow(10,j)) % 10)==2 )	
				sum++;
		}
	}
	cout << sum << endl;
	return 0;
}