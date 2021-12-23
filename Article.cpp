#include <iostream>
#include "Article.h"

//Constructor
Article::Article(const std::string &abbreviation, const std::string &author, const std::string &title,
                 const std::string &publicationYear, const std::string &magazineName, const std::string &magazineNumber,
                 const std::string &pageNumber) :
        Medium(abbreviation, author, title, publicationYear),
        magazineName(magazineName), magazineNumber(magazineNumber),
        pageNumber(pageNumber) {}

//overwritten toString function
//Format: [abbreviation] author: title. magazineName, pageNumber, publicationYear, magazineNumber.
std::string Article::toString() const {
    return "[" + this->getAbbreviation() + "] " + this->getAuthor() + ": " + this->getTitle() + ". "
           + magazineName + ", " + pageNumber + ", " + this->getPublicationYear() + ", " + magazineNumber + ". \n";
}
