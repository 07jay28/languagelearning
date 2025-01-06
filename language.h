#include <iostream>
#include <string.h>

class LanguageCard {
    public:
    std::string getword();
    std::string getEnglish();
    void print();
    LanguageCard(std::string vocabword, std::string english);

    protected:
    std::string word;
    std::string englishWord;
};