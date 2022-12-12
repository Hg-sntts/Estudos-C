#include <iostream>
using namespace std;
//For
// for(x=0;x<10;x++)

int main(){

    int x,y,z;

    for(x=0,y=1,z=0;x<=10 and z<=6;x++,y+=2,z+=2){
        cout << x << " - " << y << " - " << z << "\n";
    }

    return 0;
}