#include "hello_sayer.h"

#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    HelloSayer hello_sayer;
    hello_sayer.SetValue(10);
    if (hello_sayer.GetValue() != 10) {
        cout << "FAIL" << endl;
    } else {
        cout << "PASS" << endl;
    }
    return 0;
}

