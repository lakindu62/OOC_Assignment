//
// Created by Lakindu on 2024-10-21.
//

#ifndef ASSIGNMENT_USER_H
#define ASSIGNMENT_USER_H
#include <string>



class User {
    int userID;
    std::string username;
    std::string email;
    std::string password;

public:
    User(int uID , std::string u , std::string e , std::string p );
    bool login(std::string Iemail , std::string Ipassword);
    void logout();
    void updateProfile();

};


#endif //ASSIGNMENT_USER_H
