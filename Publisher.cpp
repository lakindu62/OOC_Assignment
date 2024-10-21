#include <iostream>
#include "User.h"
#include "Author.h"
#define SIZE 2;

using namespace std;

class Publisher
{
protected:
  Author * auth[SIZE];
  string name;
  string contact;
public:
  void manageBooks();
  void trackSales();
  void manageRight();
};


