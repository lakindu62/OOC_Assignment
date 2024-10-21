#include "Publisher.h"
#include "Author.h"
#include <algorithm>

Publisher::Publisher(const std::string& name, const std::string& contact)
    : name(name), contact(contact) {}

Publisher::~Publisher() {
    authors.clear(); // Note: doesn't delete Author objects, just clears references
}

void Publisher::addAuthor(Author* author) {
    if (author && std::find(authors.begin(), authors.end(), author) == authors.end()) {
        authors.push_back(author);
        author->addPublisher(this); // Maintain bidirectional relationship
    }
}

void Publisher::removeAuthor(Author* author) {
    auto it = std::find(authors.begin(), authors.end(), author);
    if (it != authors.end()) {
        authors.erase(it);
        author->removePublisher(this); // Maintain bidirectional relationship
    }
}

void Publisher::manageBooks() {
    // Implement book management logic
}

void Publisher::trackSales() {
    // Implement sales tracking logic
}

void Publisher::manageRight() {
    // Implement rights management logic
}