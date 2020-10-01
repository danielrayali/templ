#include "hello_sayer.hpp"

#include <iostream>

using namespace std;

void HelloSayer::SayHello() const {
    cout << "Hello, World! " << value_m << endl;
}

void HelloSayer::SetValue(const int value) {
    value_m = value;
}

int HelloSayer::GetValue() const {
    return value_m;
}

