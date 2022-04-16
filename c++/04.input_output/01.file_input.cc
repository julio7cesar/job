#include <fstream>
#include <iostream>
#include <string>

int main() {
    std::ifstream in("file/first");
    std::string s;

    if(in.is_open()) {
        in.seekg(0, std::ios::end); // move file pointer end
        
        int size = in.tellg();  // calcurate size
        s.resize(size);         // resize

        in.seekg(0, std::ios::beg); //  move file pointer begin

        in.read(&s[0], size);
        std::cout << s << std::endl;
    } else {
        std::cout << "file/first not found!" << std::endl;
    }

    return 0;
}