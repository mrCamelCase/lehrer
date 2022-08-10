#include <string>

using namespace std;

class Card {
    public:
        Card(); //constructor
        Card(const Card& rhs); //copy cons
        Card& operator=(const Card& rhs); //copy assign operator
        ~Card(); //destructor
        Card(Card&& rhs); //move cons
        Card& operator=(Card&& rhs); //move assign operator

        Card(string t, string d): term{t}, definition{d} {}

        string getTerm() { return term; }
        string getDefinition() { return definition; }
    private:
        string term;
        string definition;
};