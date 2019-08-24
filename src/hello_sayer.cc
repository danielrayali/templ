#include "hello_sayer.h"

#include <iostream>

using namespace std;

void HelloSayer::SayHello() const {
    cout << "Hello, World! " << _value << endl;
}

void HelloSayer::SetValue(const int value) {
    _value = value;
}

int HelloSayer::GetValue() const {
    return _value;
}

