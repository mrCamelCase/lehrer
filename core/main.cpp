#include <iostream>
#include <fstream>

#include "studyset.hpp"

using namespace std;

int main(int argc, char **argv) {
    cout << "Please input Study Set to read. (placeholder)" << endl;
    string resp;
    cin >> resp;
    StudySet sets("./sets/" + resp + ".txt");
    
    
    return 0;
}