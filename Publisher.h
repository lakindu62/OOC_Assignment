//
// Created by Lakindu on 2024-10-22.
//

#ifndef ASSIGNMENT_PUBLISHER_H
#define ASSIGNMENT_PUBLISHER_H
#include "User.h"

class Publisher : public User {
    std::string contact;
public:
    Publisher(int uID, std::string u, std::string e, std::string p, std::string contactI );

};


#endif //ASSIGNMENT_PUBLISHER_H
