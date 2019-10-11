#include <iostream>
using namespace std;

int main(){
	long long a[5][5];
	for(int i = 0; i < 5; i++){
		for(int j =0; j < 5; j++){
			cin >> a[i][j];
		}
	}
	long long max = -2;
	int flag = 0;
	int i,j,k;
	int col = -1;
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			if(a[i][j] > max){
				max = a[i][j];
				col = j;
			}
		}
//		cout << max << endl;
		for(k = 0; k < 5; k++){
			if(max > a[k][col]){
//				cout << "max = " << max << " " << "a[k][j] = "  << a[k][col] << endl; 
				flag = 1;
				break;
			}
		}
//		cout << flag << endl;
		if(flag == 0){
			cout << i+1 << " " << col+1 << " " << a[i][col] << endl;
			return 0;
		}
		max = -1;
		col = -1;
		flag = 0;
	}	
	cout << "not found" << endl;
	return 0;
}