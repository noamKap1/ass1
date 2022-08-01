//
// Created by noamn on 31/07/2022.
//

#ifndef AP1_CLASSIFIABLE_H
#define AP1_CLASSIFIABLE_H

//Classifiable interface
template<class T>
class Classifiable {
    //calculates the euclidean distance
    virtual double calcEucDistance(const T &other) const = 0;

    //calculates the chebyshev distance
    virtual double calcChevDistance(const T &other) const = 0;

    //calculates the manhattan distance
    virtual double calcManDistance(const T &other) const = 0;

    //returns the flower type
    virtual std::string getFlowerType() const = 0;
};


#endif //AP1_CLASSIFIABLE_H
