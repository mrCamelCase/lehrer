#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char **argv) {
    cout << "Please input Study Set to read. (placeholder)" << endl;
    string resp;
    cin >> resp;
    ifstream fileIn("../sets/" + resp + ".txt");
    if (fileIn.fail()) {
        cout << "file read failed" << endl;
        return 1;
    }
    string buffer;
    fileIn >> buffer;
    if (buffer != "LEHRER STUDY SET") {
        cout << "not a valid study set" << endl;
        return 1;
    }
    string author, date, numCards; //TODO: move some or all of this file reading functionality to studyset constructor
    while (fileIn >> buffer) {
        cout << buffer << endl; //Print contents of file
    }
    return 0;
}