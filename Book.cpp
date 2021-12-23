#include <iostream>
#include "Book.h"

// Constructor
Book::Book(const std::string &abbreviation, const std::string &author, const std::string &title,
           const std::string &publicationYear, const std::string &publisher) :
        Medium(abbreviation, author, title, publicationYear),
        publisher(publisher) {}


// overwritten toString function
// Format: [abbreviation] author: title. publisher, publicationYear.
std::string Book::toString() const {
    return "[" + this->getAbbreviation() + "] " + this->getAuthor() + ": " + this->getTitle()
           + publisher + ", " + this->getPublicationYear() + ". \n";
}
