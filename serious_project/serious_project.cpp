#include <iostream>
#include <string>

template<typename T>
void print(T v) {
    std::cout << v << '\n';
}

int main()
{
    std::string name = "Ali";
    class Person {
    public: 
        std::string name = "";
        int age = 0;

        void greet() const{
            std::cout << "hi " << this->name << '\n';
        }

        std::string toString() const {
            return "Person { name: " + this->name + ", age: " + std::to_string(age) + " }";
        }
    };

    Person me;

    me.name = "Fazliddin";
    me.age = 23;
    me.greet();

    std::cout << me.toString() << '\n';
    std::cout << "Hello Bro" << '\n';

    return 0;
}
