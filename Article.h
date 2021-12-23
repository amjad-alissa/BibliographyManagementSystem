#ifndef BIBLIOGRAPHY_MANAGEMENT_SYSTEM_ARTICLE_H
#define BIBLIOGRAPHY_MANAGEMENT_SYSTEM_ARTICLE_H

#include "Medium.h"

/**
 * Class Article derived from class Medium.
 */
class Article : public Medium {
private:

    //Attributes
    std::string magazineName;
    std::string magazineNumber;
    std::string pageNumber;

public:

    /**
     * Constructor for Article object.
     * @param abbreviation Reference to string (Abbreviation of the Article)
     * @param author Reference to string (The author of the Article)
     * @param title Reference to string (The title of the Article)
     * @param publicationYear Reference to string (The publication year of the Article)
     * @param magazineName Reference to string (Magazine's Name)
     * @param magazineNumber Reference to string (Magazine Number)
     * @param pageNumber Reference to string (Page Number)
     */
    Article(const std::string &abbreviation, const std::string &author, const std::string &title,
            const std::string &publicationYear, const std::string &magazineName, const std::string &magazineNumber,
            const std::string &pageNumber);

    /**
     * Getter for magazineName(Magazine's Name).
     * @return string (Magazine's Name)
     */
    const std::string getMagazineName() const {
        return magazineName;
    }

    /**
     * Setter for magazineName(Magazine's Name).
     * @param magazineName Reference to string (Magazine's Name)
     */
    void setMagazineName(const std::string &magazineName) {
        Article::magazineName = magazineName;
    }

    /**
     * Getter for magazineNumber(Magazine Number).
     * @return string (Magazine Number)
     */
    const std::string getMagazineNumber() const {
        return magazineNumber;
    }

    /**
     * Setter for magazineNumber(Magazine Number).
     * @param magazineNumber Reference to string (Magazine Number)
     */
    void setMagazineNumber(const std::string &magazineNumber) {
        Article::magazineNumber = magazineNumber;
    }

    /**
     * Getter for pageNumber(Page Number).
     * @return string (Page Number)
     */
    const std::string getPageNumber() const {
        return pageNumber;
    }

    /**
     * Setter for pageNumber(Page Number).
     * @param pageNumber Reference to string (Page Number)
     */
    void setPageNumber(const std::string &pageNumber) {
        Article::pageNumber = pageNumber;
    }

    /**
     * Overwritten toString function.
     * Format: [abbreviation] author: title. magazineName, pageNumber, publicationYear, magazineNumber.
     */
    std::string toString() const override;
};


#endif //BIBLIOGRAPHY_MANAGEMENT_SYSTEM_ARTICLE_H
