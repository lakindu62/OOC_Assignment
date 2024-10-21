#include <iostream>
using namespace std;
#include "Author.h"
#include "Publisher.h"
#include "Review.h"

class Book
{
protected:
  string book_id;
  string title;
  double price;
  string genre;
  int stockLevel;
  Author *Auth;
  Publisher *Pub ;
  Review *re[SIZE];
public:
  int getDetails();
  int updateStock();
};

