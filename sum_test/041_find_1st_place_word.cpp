#include <iostream>
#include <cstring>
using namespace std;
int main(){
	char a[100000];
	cin.getline(a,100000);
	int len=strlen(a);
	int b[256]={0};
	for(int i = 0; i < len; i++){
		b[a[i]]++;
	}
	for(int i = 0; i < len; i++){
		if(b[a[i]]==1){
			cout << a[i] << endl; 
			return 0;
		}
	}
	cout << "no" << endl;
	return 0;
}