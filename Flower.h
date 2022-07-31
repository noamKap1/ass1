#include <string>
#include "vector"

class Flower {

private:
    double lengthOfSepal, widthOfSepal, lengthOfPetal, widthOfPetal;
    std::string irisType = "noType";

public:
     explicit Flower(std::vector<std::string> vec);

     std::vector<Flower> strVecToIrisVec(std::vector<std::vector<std::string>> vec);

    std::string getIrisType();

    double calcEucDistance(Flower flower);
    double calcChevDistance(Flower flower);
    double calcManDistance(Flower flower);




};


