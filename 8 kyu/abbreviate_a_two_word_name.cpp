#include <iostream>

using namespace std;

string abbrevName(string name)
{
    string abbrev = "";
    abbrev = toupper(name[0]);

    for(int i = 0; i < name.size() - 1; i++){
        if(name[i] == ' '){
            char upper = toupper(name[i+1]);
            abbrev = abbrev + "." + upper;
        }
    };
    return abbrev;

}