#include <iostream>

class HelloWorld {
public:
    void sayHi() {
        std::cout << "yo yo yo!";
    }
};

int main() {
    HelloWorld obj;
    obj.sayHi();
    return 0;
}
