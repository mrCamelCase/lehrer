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

StudySet::StudySet(ifstream file) {
    file; //TODO: read input from file and use it to populate card array
}