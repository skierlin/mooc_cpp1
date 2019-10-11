#include <iostream>
#include <string>
using namespace std;

int main(){
	char a[256];
	cin.getline(a,256);
	int sum = 0;
	for(int i = 0; a[i] != '\0'; i++){
		if(a[i] >= '0' && a[i] <= '9'){
			sum++;
		}
	}
	cout << sum << endl;
	return 0;
	
}