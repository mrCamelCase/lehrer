//#include "card.hpp"
#include <string>

using namespace std;

class StudySet {
    public:
        StudySet(); //constructor
        StudySet(const StudySet& rhs); //copy cons
        StudySet& operator=(const StudySet& rhs); //copy assign operator
        ~StudySet(); //destructor
        StudySet(StudySet&& rhs); //move cons
        StudySet& operator=(StudySet&& rhs); //move assign operator

        StudySet(ifstream file);

        struct Card {
            string term;
            string definition;
        };
    private:
        int size; //size of set
        Card* set; //array of card objects
};