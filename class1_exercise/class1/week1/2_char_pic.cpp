#include <iostream>
using namespace std;
int main()
{
    char a;
    cin >> a;
    for(int i=0; i<=2; i++)
    {
        for(int j=0; j<2-i; j++)
            cout << " ";
        for(int k=0; k<2*i+1; k++)
            cout << a;
        cout << endl;
    }
    for(int i=0; i<=1; i++)
    {
        for(int j=0; j<i+1; j++)
            cout << " ";;
        for(int k=0; k<3-i*2; k++)
            cout << a;
        cout << endl;
    }
    return 0;
}
