#include <iostream>
using namespace std;

int variable(int x){
    x = 21;
    int x;
    x = 42;

    return x;
}

int main(){
    int z;
    z = variable(4);
    cout << "The result is " << z;
}