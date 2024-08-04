#include <unordered_map>
#include <string>
#include <vector>

std::unordered_map <std::string, std::string> vocabulary;
std::vector<std::string> macros;
std::vector<std::string> includes;


void loadVocabulary() {
    vocabulary["import"] = "#include";

    vocabulary["def"] = "void";

    vocabulary["prv"] = "private";
    vocabulary["pub"] = "public";

    vocabulary["ret"] = "return";

    vocabulary["write"] = "std::cout<<";
    vocabulary["endLine"] = "<<std::endl";

    vocabulary["AND"] = "&&";
    vocabulary["OR"] = "||";
    vocabulary["equ"] = "=";
    vocabulary["is"] = "==";
    vocabulary["!is"] = "!=";
    vocabulary["ternary"] = "?";
    vocabulary["add"] = "+=";
    vocabulary["take"] = "-=";

    vocabulary["main"] = "int main(int argc, char* argv[])";

    vocabulary["read"] = "std::cin>>";
    vocabulary["readLine"] = "std::getline(std::cin, ";

    vocabulary["if"] = "if(";
    vocabulary["elif"] = "else if(";

    vocabulary["while"] = "while(";
    vocabulary["switch"] = "switch(";
    vocabulary["for"] = "for(";
    vocabulary["foreach"] = "for( const auto& ";
    vocabulary["loop"] = "loop(";
    vocabulary["loopStep"] = "loopStep(";
    vocabulary["in"] = ":";

    vocabulary["catch"] = "catch(";
    vocabulary["ecatch"] = "catch(std::exception& e)";

    vocabulary["define"] = "#define";

    vocabulary["wordToInt"] = "std::stoi";
    vocabulary["stringToInt"] = "std::stoi";
    vocabulary["wordToNum"] = "std::stoi";
    vocabulary["stringToNum"] = "std::stoi";
    vocabulary["wordToFloat"] = "std::stof";
    vocabulary["stringToFloat"] = "std::stof";
    vocabulary["wordToDouble"] = "std::stod";
    vocabulary["stringToDouble"] = "std::stod";
    vocabulary["toInt"] = "static_cast<int>";
    vocabulary["toNum"] = "static_cast<int>";
    vocabulary["toFloat"] = "static_cast<float>";
    vocabulary["toDouble"] = "static_cast<double>";

    vocabulary["plus"] = "+";
    vocabulary["minus"] = "-";
    vocabulary["mult"] = "*";
    vocabulary["div"] = "/";
    vocabulary["mod"] = "%";

    vocabulary["len"] = "length()";
    vocabulary["size"] = "size()";
    vocabulary["push"] = "push_back";
    vocabulary["pop"] = "pop_back";

    vocabulary["word"] = "std::string";
    vocabulary["string"] = "std::string";
    vocabulary["num"] = "int";
    vocabulary["var"] = "auto";

    vocabulary["assigned"] = "";

    vocabulary["sort"] = "std::sort";

    vocabulary["scope"] = "::";

    vocabulary["exitCode"] = "return 0";

}

void loadMacros() {
    macros.push_back("#define PI 3.1415926535");
    macros.push_back("#define loop(a, b, c) for (int(a) = (b); (a) < (c); ++(a))");
    macros.push_back("#define loopStep(a, b, c, d) for (int(a) = (b); (a) < (c); (a)+=(d))");
    macros.push_back("#define DynArray(type) std::vector<type>");
    macros.push_back("#define DynArray2D(type) std::vector<std::vector<type>>");
    macros.push_back("#define DynArray3D(type) std::vector<std::vector<std::vector<type>>>");
    macros.push_back("std::string input(const std::string& prompt) { \
                    std::cout << prompt; \
                    std::string line; \
                    std::getline(std::cin, line); \
                    return line; \
                }");
    macros.push_back("int randomNumber(int min, int max) { \
                    if (min > max) { \
                        std::cerr << \"Error: min cannot be greater than max\" << std::endl; \
                        return -1;\
                    } \
                    std::random_device rd; \
                    std::mt19937 gen(rd()); \
                    std::uniform_int_distribution<> dis(min, max); \
                    return dis(gen); \
                    }");
}

void loadIncludes() {
    includes.push_back("#include <iostream>");
    includes.push_back("#include <string>");
    includes.push_back("#include <vector>");
    includes.push_back("#include <algorithm>");
    includes.push_back("#include <random>");
}