#include "lines.ih"

Lines::Lines(std::istream &in)
{
    std::vector<std::string> strVector;
    std::string line;
                                
    while (std::getline(in, line) and not line.empty())
        strVector.push_back(line);        //push every line into the vector

    LinesMap.insert({ this, strVector }); //add vector to extern map
}
