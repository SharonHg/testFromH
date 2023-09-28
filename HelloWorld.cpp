#include <iostream>

class HelloWorld {
public:
    void sayHi() {
        std::cout << "Hello world";
    }
};

int main() {
    HelloWorld obj;
    obj.sayHi();
    return 0;
}
