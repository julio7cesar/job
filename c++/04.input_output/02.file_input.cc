#include <fstream>
#include <iostream>
#include <string>

int main() {
    std::ifstream in("file/second");
    char buf[100];

    if(false == in.is_open()) {
        std::cout << "file/second not found!" << std::endl;
        return 1;
    }

    while(in) {
        in.getline(buf, 100);
        std::cout << buf << std::endl;
    }

    return 0;
}