#include <fstream>
#include <iostream>
#include <string>

int main() {
    std::ofstream out("file/out_test1", std::ios::app);
    std::string s;

    if(out.is_open()) {
        out << "add more...";
    }

    return 0;
}

