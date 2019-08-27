#include <iostream>
#include <vector>

using namespace std;

class Solution{
	
public:
	void result(vector<int>& in){
		for(int i = 1; i < in.size(); i++){
			for(int j = 0; j < i; j++)
				if(in[i] < in[j]){
					int temp = in[i];
					for(int k = i; k > j; k--)
						in[k] = in[k-1];
					in[j] = temp;
				}
		}
	}
};


int main(){
	vector<int> in = {4,5,3,1,2};
	Solution res;
	res.result(in);
	for(int i = 0; i < in.size(); i++){
		cout << in[i] << " ";
	}
	cout << endl;
	return 0;
}