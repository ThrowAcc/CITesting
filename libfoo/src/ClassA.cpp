#include "ClassA.h"

ClassA::ClassA() : a(0) {
}

ClassA::ClassA(int a) : a(a) {
}

int ClassA::get() const {
    return a;
}

void ClassA::set(int a) {
    this->a = a;
}
