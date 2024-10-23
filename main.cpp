#include <iostream>
#include "User.h"
#include "Customer.h"
#include "Author.h"
#include "Publisher.h"
#include "Book.h"
#include "Admin.h"
#include "Contract.h"
#include "Review.h"


int main() {



    //------  Author and Publisher Creation ------//

    Author a2 = Author(1, "LakinduAuth", "lakinduAuth62@gmail.com", "12345", "This is my BIo");
    Publisher p1 = Publisher(1, "Lakindu", "lakindu62@gmail.com", "12345", "0775124585");

    //creating association between author and publisher using a intermediate class Contract
    Contract *c1;
    c1 = new Contract(&a2, &p1, "10/10/2024", "10/10/2025", "contract Terms");
    c1->displayContract();


    //publisher Login
    p1.login("lakindu62@gmail.com", "12345"); //login is available for both author and publisher as it inherits of User class

    //------  Book Creation  ------//
    Book b1 = Book("1", "BookTitle", 200, "Romance", 60, &a2, &p1);
    Book b2 = Book("2", "Book2Title", 300, "Fiction", 40, &a2, &p1);

    //getting Book details
    b1.getDetails();

    //association of books to author
    a2.addBook(b1);
    a2.addBook(b2);
    //association of books to publisher
    p1.addBook(b1);
    p1.addBook(b2);



    //displaying all books published by the publisher
//    p1.displayBooks();

    //displaying all books published by the Author
//    a2.displayBooks();
    //above is possible due to association between author and book as well as publisher and book



    //------  Admin Creation------//
    Admin admin1 = Admin(1, "LakinduAdmin", "lakinduAdmin62@gmail.com", "12345");
    //admin can add books. which will prompt the author in the terminal to add the book
//    admin1.addBook();


    //------  Adding Reviews to books------//







    //------ Customer creation and login ------//

    Customer *customer01;
    //creation
    customer01 = new Customer(1, "mark", "mark@gmail.com", "12345", "123, Galle Road, Colombo 03", 0);
    //login
    customer01->login("mark@gmail.com", "12345"); //login is customer as it inherits of User class


    //------  Adding Reviews to books------//
    Review *r1;
    r1 = new Review(5, "This is a good book", &b1 ,customer01 );
    b1.addReview(r1);
    r1->displayReview();



    //------ process ------ purchase a book

    //add to cart -- dependency relationship between Customer and Book as addToCart users bookObject
    customer01->addToCart(b1, 1);
    customer01->addToCart(b2, 2);

    customer01->getCart().displayCart();

    //place order
    customer01->placeOrder();

    delete customer01; // free memory // this will delete the customer object and the cart object as well
    // --> deleting the cart object will delete the cartItems array of CartItem objects due to composition relationship


    return 0;
}


