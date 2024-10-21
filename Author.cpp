#include "Author.h"
#include "Publisher.h"
#include <algorithm>

Author::Author(const std::string& biography, const std::string& publisherInfo)
    : biography(biography), publisherInfo(publisherInfo) {
      
    }

Author::~Author() {
    publishers.clear(); // Note: doesn't delete Publisher objects, just clears references
}

void Author::addPublisher(Publisher* publisher) {
    if (publisher && std::find(publishers.begin(), publishers.end(), publisher) == publishers.end()) {
        publishers.push_back(publisher);
    }
}

void Author::removePublisher(Publisher* publisher) {
    auto it = std::find(publishers.begin(), publishers.end(), publisher);
    if (it != publishers.end()) {
        publishers.erase(it);
    }
}

void Author::viewSalesAnalytics() {
    // Implement sales analytics viewing logic
}

void Author::updateProfile() {
    // Implement profile update logic
}