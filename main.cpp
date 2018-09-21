
#include <iostream>
#include "CRB.h"

Interpreter* interpreter = nullptr;
int main(int argc, char **argv)
{
    //std::FILE* fp = std::fopen("/home/frank/FrankMaterials/DIYProgramLang/gitCPlusVers/CrowBarCPlus/test.crb", "r");
    std::FILE* fp = std::fopen("test.crb", "r");
    if (!fp) {
        std::cout << "File opening failed";
        return EXIT_FAILURE;
    }
    parseFile(fp);
    if (interpreter) {
        interpreter->interpret();
    }
    //std::cout << "main cpp";
    //std::cin.get();
}
