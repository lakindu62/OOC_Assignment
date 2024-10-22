#include <iostream>
#include "User.h"
#include "Customer.h"
#include "Author.h"
#include "Publisher.h"
#include "Book.h"
#include "Admin.h"
#include "Contract.h"
int main() {


    Publisher p1 = Publisher(1, "Lakindu", "lakindu62@gmail.com" , "12345", "0775124585");

    p1.login("lakindu62@gmail.com" , "12345");

    Author a2 = Author(1, "LakinduAuth", "lakinduAuth62@gmail.com"  , "12345", "This is my BIo");

    Book b1 = Book("1", "BookTitle", 200, "Romance", 60 , &a2 , &p1);

//    b1.getDetails();
//    Admin admin1 = Admin(1, "LakinduAdmin", "lakinduAdmin62@gmail.com" , "12345");
//    admin1.addBook();


    Contract *c1;
    c1 = new Contract(&a2, &p1, "10/10/2024", "10/10/2025", "contract Terms");
    c1->displayContract();














    return 0;
}


