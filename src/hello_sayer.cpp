#include "hello_sayer.hpp"

#include <iostream>

using namespace std;

void HelloSayer::SayHello() const {
  cout << "Hello, World! " << value_ << endl;
}

void HelloSayer::SetValue(const int value) { value_ = value; }

int HelloSayer::GetValue() const { return value_; }
