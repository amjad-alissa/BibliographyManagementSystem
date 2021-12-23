
#include <iostream>
#include "Medium.h"

// Constructor
Medium::Medium(const std::string &abbreviation, const std::string &author, const std::string &title,
               const std::string &publicationYear) :
        abbreviation(abbreviation), author(author), title(title),
        publicationYear(publicationYear) {}

// toString function
// Format: [abbreviation] author: title
std::string Medium::toString() const {
    return "[" + abbreviation + "] " + author + ": " + title + ". \n";
}

