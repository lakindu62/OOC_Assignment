#include <iostream>
#include "User.h"

int main() {


    User user1(1, "Lakindu", "lakindu62@gmail.com" , "12345");

    user1.login("lakindu62@gmail.com" , "12345");
    user1.logout();

    return 0;
}


