#ifndef AUTHOR_H
#define AUTHOR_H

#include <string>
#include "Book.h"
#include "Publisher.h"
#include "User.h" 
#define SIZE 2;

class Publisher; 

class Author : public User {
private:
    std::string biography;
    std::string publisherInfo;
    Publishers *pub[SIZE]; 
    Book *book[SIZE];

    void viewSalesAnalytics();
    void updateProfile();

public:
    Author(const std::string& biography, const std::string& publisherInfo);
    ~Author();

    // Getters and setters
    std::string getBiography() const { return biography; }
    std::string getPublisherInfo() const { return publisherInfo; }
    void setBiography(const std::string& bio) { biography = bio; }
    void setPublisherInfo(const std::string& info) { publisherInfo = info; }

    // Publisher management
    void addPublisher(Publisher* publisher);
    void removePublisher(Publisher* publisher);
    const std::vector<Publisher*>& getPublishers() const { return publishers; }
};

#endif