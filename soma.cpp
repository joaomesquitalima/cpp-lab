#include <iostream>
#include <string>


using namespace std;


int main(){
    string texto;
    int a;
    int b;

    cin >> a;
    cin >> b;


    cout << "Hello " << a+b << " !";
    for(int i = 0;i < 10;i++){
        if(i%2 == 0){
            cout << i << endl;
        }
    }
    return 0;

}