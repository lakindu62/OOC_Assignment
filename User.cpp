//
// Created by Lakindu on 2024-10-21.
//

#include "User.h"
#include <string>
#include <iostream>

User::User(int uID ,  std::string u , std::string e , std::string p ){
    userID = uID;
    username = u;
    email = e;
    password = p;
}

bool User::login(std::string Iemail , std::string Ipassword){


    bool isLoggedIn =  email == Iemail and password == Ipassword;

    if(isLoggedIn){
        std::cout << "Logged in" << std::endl;
        return true;
    }else{
        std::cout << "Invalid email or password" << std::endl;
        return false;
    }

}

void User::logout() {
    std::cout << "Logged out" << std::endl;
}
