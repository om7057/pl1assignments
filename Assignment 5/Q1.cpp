#include <iostream>


namespace Library1 {
    class LibraryClass {
    public:
        void show() {
            std::cout << "Library1::LibraryClass::show()" << std::endl;
        }
    };

    void show() {
        std::cout << "Library1::show()" << std::endl;
    }
}


namespace Library2 {
    class LibraryClass {
    public:
        void show() {
            std::cout << "Library2::LibraryClass::show()" << std::endl;
        }
    };

    void show() {
        std::cout << "Library2::show()" << std::endl;
    }
}

int main() {

    Library1::LibraryClass obj1;
    Library2::LibraryClass obj2;


    Library1::show();
    Library2::show();

    
    obj1.show();
    obj2.show();

    return 0;
}
