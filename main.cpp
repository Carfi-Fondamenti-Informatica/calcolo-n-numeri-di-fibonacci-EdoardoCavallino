#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    if(n >= 2){
        int a=1,b=0, c;
        cout << a << endl;
        for(int i=1 ; i<n ; i++){

            c = a+b;
            b = a;
            a = c;

            cout << c << endl;
        }

    }else {
        cout << "errore" << endl;
    }

    return 0;
}


