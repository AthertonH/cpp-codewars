#include <iostream>

using namespace std;

string bool_to_word(bool value)
{
  if(value == true){
    return "Yes";
  } else if(value == false){
    return "No";
  }
}