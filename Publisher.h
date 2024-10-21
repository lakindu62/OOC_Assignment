#ifndef PUBLISHER_H
#define PUBLISHER_H
#define SIZE 2;
#include <string>
#include "Book.h"
#include <vector>

class Author; 

class Publisher {
private:
    std::string name;
    std::string contact;
    Author *auth[SIZE]; 
    Book *book[SIZE];


public:
    Publisher(const std::string& name, const std::string& contact);
    ~Publisher();

    // Getters and setters
    std::string getName() const { return name; }
    std::string getContact() const { return contact; }
    void setName(const std::string& name) { this->name = name; }
    void setContact(const std::string& contact) { this->contact = contact; }

    // Author management
    void addAuthor(Author* author);
    void removeAuthor(Author* author);
    const std::vector<Author*>& getAuthors() const { return authors; }

    // Business logic methods
    void manageBooks();
    void trackSales();
    void manageRight();
};

#endif