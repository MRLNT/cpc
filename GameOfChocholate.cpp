#include <iostream>

using namespace std;

int main() {
    int a,b,inpu;
    int temp = 0;
    cin >> a >> b >> inpu;
    for(int i = 0;i<inpu;i++){
        if(i % 2 == 0){
            if(a % 2 == 0){
                temp = a / 2;
                a -= temp;
                b += temp;
            } else{
                a -= 1;
                b += a/2;
                a -= a/2;
            }
        } else{
            if(b % 2 == 0){
                temp = b / 2;
                b -= temp;
                a += temp;
            } else{
                b -= 1;
                a += b/2;
                b -= b/2;
            }
        }
        
    }
    cout << a << " " << b << endl;
}