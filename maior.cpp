#include <iostream>
#include <cstdlib>

int main(){
    int a,b,c;
    std::cin >> a >> b >> c;
    
    int r = (a + b + abs(a-b))/2;
    int f = (r + c + abs(r-c))/2;

    std::cout << f << " eh o maior" << std::endl;

    return 0;
}