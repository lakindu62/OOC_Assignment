//
// Created by Lakindu on 2024-10-22.
//

#include "Publisher.h"

Publisher::Publisher(int uID, std::string u, std::string e, std::string p, std::string contactI ):User(uID, u, e, p){
    contact = std::move(contactI);
}

