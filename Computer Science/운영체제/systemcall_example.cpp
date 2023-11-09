#include <iostream>
#include <fstream>

using std::ifstream;
using std::ofstream;

int main() {
    //파일 핸들 Get
    ifstream in("in.txt");
    ofstream out("out.txt");

    char c;
    while (in >> c)
    {
        out << c;    
    }
    
    in.close();
    out.close();

    return 0;
}