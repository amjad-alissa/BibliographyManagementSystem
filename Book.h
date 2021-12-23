#ifndef BIBLIOGRAPHY_MANAGEMENT_SYSTEM_BOOK_H
#define BIBLIOGRAPHY_MANAGEMENT_SYSTEM_BOOK_H

#include "Medium.h"

/**
 * Class Book derived from class Medium.
 */
class Book : public Medium {
private:

    //Attributes
    std::string publisher;

public:

    /**
     * Constructor for a Book object.
     * @param abbreviation Reference to string (Abbreviation of the Book)
     * @param author Reference to string (The author of the Book)
     * @param title Reference to string (The title of the Book)
     * @param publicationYear Reference to string (The publication year of the Book)
     * @param publisher Reference to string (The publisher of the Book)
     */
    Book(const std::string &abbreviation, const std::string &author, const std::string &title,
         const std::string &publicationYear, const std::string &publisher);

    /**
     * Getter for publisher(The publisher of the Book).
     * @return string (The publisher of the Book)
     */
    const std::string getPublisher() const {
        return publisher;
    }

    /**
     * Setter for publisher(The publisher of the Book).
     * @param publisher Reference to string (The publisher of the Book)
     */
    void setPublisher(const std::string &publisher) {
        Book::publisher = publisher;
    }

    /**
     * Overwritten toString function.
     * Format: [abbreviation] author: title. publisher, publicationYear.
     */
    std::string toString() const override;
};


#endif //BIBLIOGRAPHY_MANAGEMENT_SYSTEM_BOOK_H
