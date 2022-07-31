#include <sstream>
#include <iostream>
#include <fstream>
#include "CsvReader.h"

std::vector<std::vector<std::string>> readFromCSV(const char *file) {
    std::ifstream myFile(file);

    std::vector<std::vector<std::string>> storedData;
    while (myFile.good()) {
        std::vector<std::string> line;
        std::string s, word;
        std::getline(myFile, s);
        std::stringstream stst(s);

        while (std::getline(stst, word, ',')) {
            line.push_back(word);
        }
        if (!line.empty()) {
            storedData.push_back(line);
        }
    }
    return storedData;
}

void writeToCSV(std::vector<std::string> vec, std::string) {
    std::ofstream file;
    file.open(s, std::ios_base::app);
    for (const std::string s: vec) {
        file << s << std::endl;
    }
}


