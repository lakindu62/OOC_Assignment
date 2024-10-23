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
    p1.login("lakindu62@gmail.com", "12345");

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
    p1.displayBooks();

    //displaying all books published by the Author
    a2.displayBooks();



    //------  Admin Creation------//
    Admin admin1 = Admin(1, "LakinduAdmin", "lakinduAdmin62@gmail.com", "12345");
    //admin can add books. which will prompt the author in the terminal to add the book
    admin1.addBook();


    //------  Adding Reviews to books------//
    Review *r1;
    r1 = new Review(5, "This is a good book", &b1);
    b1.addReview(r1);






    //------ Customer creation and login ------//

    Customer *customer01;
    //creation
    customer01 = new Customer(1, "mark", "mark@gmail.com", "12345", "123, Galle Road, Colombo 03", 0);
    //login
    customer01->login("mark@gmail.com", "12345");




    //------ process ------ purchase a book

    //add to cart
    customer01->addToCart(b1, 1);
    customer01->addToCart(b2, 2);

    customer01->getCart().displayCart();

    //place order
    customer01->placeOrder();


    return 0;
}


