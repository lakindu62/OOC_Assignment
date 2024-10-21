#include <iostream>
#include "User.h"
#define SIZE 2;

using namespace std;

class Author: public User
{
protected:
  string biography;
  string publisherInfor;
  Publisher *Pbli[SIZE];

private:
  void viewSalesAnalytics();
  void updateProfile();
};

