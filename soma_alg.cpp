#include <iostream>

using namespace std;
int main(){
	int a;
	
	cout << "Digite um numero:" << endl;
	cin >> a;
	int r;
	int s = 0;
	while(r != 0){
		r = a%10;
		s = s + r;
		a = a/10;
	}
	
	cout << "A soma de todos seus algarismos eh "<< s << endl;
	
	return 0;
}
