#pragma once

class ClassA {
private:
    int a;

public:
    ClassA();
    ClassA(int a);

    int get() const;
    void set(int a);
};