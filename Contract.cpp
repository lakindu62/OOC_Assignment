//
// Created by Lakindu on 2024-10-22.
//

#include "Contract.h"
#include <iostream>

Contract::Contract(Author* a, Publisher* p, std::string sD, std::string eD, std::string cT) {
    author = a;
    publisher = p;
    startDate = sD;
    endDate = eD;
    contractTerms = cT;
}


void Contract::displayContract() {
    std::cout << "Author: " << author->getName() << std::endl;
    std::cout << "Publisher: " << publisher->getName() << std::endl;
    std::cout << "Start Date: " << startDate << std::endl;
    std::cout << "End Date: " << endDate << std::endl;
    std::cout << "Contract Terms: " << contractTerms << std::endl;
}