#include "Flower.h"
#include <math.h>

Flower::Flower(double lengthOfSepal, double widthOfSepal,
               double lengthOfPetal, double widthOfPetal, std::std::string irisType) {
    this->
            lengthOfPetal = lengthOfPetal;
    this->
            lengthOfSepal = lengthOfSepal;
    this->
            widthOfPetal = widthOfPetal;
    this->
            widthOfSepal = widthOfSepal;
    this->
            irisType = irisType;

}

std::string Flower::getIrisType() {
    return irisType;
}

double Flower::calcEucDistance(Flower flower) {
    return sqrt(pow(this->widthOfSepal - flower.widthOfSepal, 2)
                + pow(this->widthOfpetal - flower.widthOfPetal, 2)
                + pow(this->lengthOfPetal - flower.lengthOfPetal, 2)
                + pow(this->lengthOfSepal - flower.lengthOfSepal, 2));
}

double Flower::calcChevDistance(Flower flower) {
    return std::max(std::abs(this->widthOfPetal - flower.widthOfPetal),
                    std::abs(this->widthOfSepal - flower.widthOfSepal),
                    std::abs(this->lengthOfPetal - flower.lengthOfPetal),
                    std::abs(this->lengthOfSepal - flower.lengthOfSepal));
}

double Flower::calcManDistance(Flower flower) {
    return std::abs(this->widthOfPetal - flower.widthOfPetal) +
           std::abs(this->widthOfSepal - flower.widthOfSepal) +
           std::abs(this->lengthOfPetal - flower.lengthOfPetal) +
           std::abs(this->lengthOfSepal - flower.lengthOfSepal));
}

Flower::Flower(std::vector<std::string> vec) {
    if (vector.size() > 4) {
        this->irisType = vec.at(4);
    }
    this->widthOfPetal = (std::stod(vec.at(0)));
    this->lengthOfPetal = (std::stod(vec.at(1)));
    this->widthOfSepal = (std::stod(vec.at(2)));
    this->lengthOfSepal = (std::stod(vec.at(3)));
}

std::vector<Flower> Flower::strVecToIrisVec(std::vector<std::vector<std::string>> vec) {
    std::vector<Flower> flVec;
    for(std::vector<std::string> s : vec ){
        Flower f = Flower(s);
        flVec.push_back(f);
    }
    return flVec;
}
