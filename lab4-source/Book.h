#ifndef BOOK_H
#define BOOK_H

#include <string>
#include "Product.h"
/* ======================================
    TODO: Complete the class declaration of Book
    HINT: remember to take the structure figure in the lab website page as reference
   ======================================*/
class Book : public Product
{
private:
    string title;
    string genre;
    string publisher;
    double discount;

public:
    Book(double regular_price, const string &title, const string &genre, const string &publisher, double discount);
    virtual ~Book();
    
    string get_title() const;
    string get_genre() const;
    string get_publisher() const;

    double get_discount() const;
    virtual double get_retail_price() const;
    virtual void print() const;
};
#endif