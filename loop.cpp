#include <iostream>

using namespace std;

int Output(int n) {
    for(int i = 0; i < n - 1; ++i) {
        cout << i << " ";
    }
    cout << "0" << endl;
}

int main() {
    int n = 7;
     Output(n);
    return 0;
}
