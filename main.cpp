#include <iostream>
#include <vector>

using namespace std;
using var_t = std::variant<string, int>
int main()
{
   vector<variant<string, int>> vec {"hi", 1234, "hello world"};

   for (auto& word: vec)
   {
      std::cout << word << " ";
   }
   cout << endl;
}