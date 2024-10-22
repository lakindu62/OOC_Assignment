//
// Created by Lakindu on 2024-10-22.
//

#ifndef ASSIGNMENT_CONTRACT_H
#define ASSIGNMENT_CONTRACT_H
#include "Author.h"
#include "Publisher.h"
#include <string>

class Contract {
    Author* author;
    Publisher* publisher;
    std::string startDate;
    std::string endDate;
    std::string contractTerms;

public:
    Contract(Author* a, Publisher* p, std::string sD, std::string eD, std::string cT);
    void displayContract();
};


#endif //ASSIGNMENT_CONTRACT_H
