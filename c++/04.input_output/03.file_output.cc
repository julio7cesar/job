#include <fstream>
#include <iostream>
#include <string>

int main() {
    std::ofstream out("file/out_test1");
    std::string s;

    if(out.is_open()) {
        out << "This is a new message!";
    }

    return 0;
}

