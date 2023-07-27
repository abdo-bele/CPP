#include <iostream>
#include <string>

int main() {
    std::string str = "Hello, World! World, meet Hello!";
    std::string toFind = "World";
    std::string toReplace = "Earth";

    size_t pos = 0;
    while ((pos = str.find(toFind, pos)) != std::string::npos) {
        // Erase the found substring
        str.erase(pos, toFind.length());

        // Insert the new substring
        str.insert(pos, toReplace);

        // Move 'pos' forward, so the search can continue.
        pos += toReplace.length();
    }

    std::cout << str << std::endl;

    return 0;
}
