#include <iostream>
#include <algorithm>
using namespace std;

string no_space(string x){
    x.erase(remove(x.begin(), x.end(), ' '), x.end());
    return x;
};