//
// Created by Lakindu on 2024-10-22.
//

#include "Author.h"



Author::Author(int uID, std::string u, std::string e, std::string p, std::string biographyI ):User(uID, u, e, p){
    biography = biographyI;
}
