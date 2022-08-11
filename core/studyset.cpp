#include <fstream>

#include "studyset.hpp"

using namespace std;

StudySet::StudySet(): size{0}, set{0} {}

StudySet::StudySet(const StudySet& rhs):size{rhs.size} {
    set = new Card[size];
    for (int i = 0; i < size; i++) {
        set[i] = rhs.set[i];
    }
}

StudySet& StudySet::operator=(const StudySet& rhs) {
    if (set != 0) {
        delete[] set;
    }
    size = rhs.size;
    set = new Card[size];
    for (int i = 0; i < size; i++) {
        set[i] = rhs.set[i];
    }
    return *this;
}

StudySet::~StudySet() {
    if (set != 0) {
        delete[] set;
    }
}

StudySet::StudySet(StudySet&& rhs): size{rhs.size} {
    if (set != 0) {
        delete[] set;
    }
    set = rhs.set;
}

StudySet& StudySet::operator=(StudySet&& rhs) {
    if (set != 0) {
        delete[] set;
    }
    size = rhs.size;
    set = rhs.set;
    return *this;
}

StudySet::StudySet(string filename) {
    ifstream fileIn(filename);
    if (fileIn.fail()) {
        cout << "file read failed" << endl;
        return;
    }
    string buffer;
    getline(fileIn, buffer);
    cout << buffer << endl;
    if (buffer != "LEHRER STUDY SET") {
        cout << "not a valid study set" << endl;
        return;
    }
    //string title, author, date, numCards; //TODO: move some or all of this file reading functionality to studyset constructor
    while (getline(fileIn, buffer)) {
        cout << buffer << endl; //Print contents of file
    }
    set = 0;
}