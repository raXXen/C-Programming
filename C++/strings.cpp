#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main(void){

    string str = "Ein String und kein Char-Array";
    cout << str << endl;
    
    char c = 'a';

    cout << (c == 'a');
    
    str += " Weiß nicht ob es besser als C ist...\n";
    str.insert(10, "... "); //etwas ins Array/String einfügen
    int hint = str.find("C");

    cout << str << hint << endl;

    return 0;
}

