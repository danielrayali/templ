#pragma once

class HelloSayer {
 public:
    HelloSayer() = default;

    ~HelloSayer() = default;

    void SayHello() const;

    void SetValue(const int value);

    int GetValue() const;

 private:
    int _value = 0;
};

