#include "language.h"

LanguageCard::LanguageCard(std::string vocabword, std::string english) {
    this->englishWord = english;
    this->word = vocabword;
}

std::string LanguageCard::getword() {
    return this->word;
}

std::string LanguageCard::getEnglish() {
    return this->englishWord;
}

void LanguageCard::print() {
    std::cout << "\"" << this->word << "\" translates to " << "\"" << this->englishWord << "\"" << std::endl;
}