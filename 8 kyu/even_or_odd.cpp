#include <regex>
using namespace std;

string no_space(string x)
{
    return regex_replace(x, regex(" "), "");
}