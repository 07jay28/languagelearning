#include <iostream>
#include <fstream>
#include <vector>
#include "language.h"

int main(int arg, char** argv) {
    std::ifstream infile("italian.txt");
    std::vector<LanguageCard*>* cards = new std::vector<LanguageCard*>; 
    std::string word, english;

    while(infile >> word >> english) {
        LanguageCard* card = new LanguageCard(word, english);
        cards->push_back(card);
    }

    cards->at(0)->print();
    return 0;
}