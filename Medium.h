#ifndef BIBLIOGRAPHY_MANAGEMENT_SYSTEM_MEDIUM_H
#define BIBLIOGRAPHY_MANAGEMENT_SYSTEM_MEDIUM_H

#include <string>

class Medium {
private:

    //Attributes
    std::string abbreviation;
    std::string author;
    std::string title;
    std::string publicationYear;

public:

    /**
     * Default Constructor
     */
    Medium();

    /**
    * Constructor for a Medium object.
    * @param abbreviation Reference to string (Abbreviation of the Medium)
    * @param author Reference to string (The author of the Medium)
    * @param title Reference to string (The title of the Medium)
    * @param publicationYear Reference to string (The publication year of the Medium)
    */
    Medium(const std::string &abbreviation, const std::string &author, const std::string &title,
           const std::string &publicationYear);

    /**
     * Getter for abbreviation(Abbreviation of the Medium).
     * @return string (Abbreviation of the Medium)
     */
    const std::string getAbbreviation() const {
        return abbreviation;
    }

    /**
     * Setter for abbreviation.
     * @param abbreviation Reference to string (Abbreviation for the Medium)
     */
    void setAbbreviation(const std::string &abbreviation) {
        Medium::abbreviation = abbreviation;
    }

    /**
     * Getter for author(The author of the Medium).
     * @return string (The author of the Medium)
     */
    const std::string getAuthor() const {
        return author;
    }

    /**
     * Setter for author(The author of the Medium).
     * @param author Reference to string (The author of the Medium)
     */
    void setAuthor(const std::string &author) {
        Medium::author = author;
    }

    /**
     * Getter for title(The title of the Medium).
     * @return string (The title of the Medium)
     */
    const std::string getTitle() const {
        return title;
    }

    /**
     * Setter for title(The title of the Medium).
     * @param title Reference to string (The title of the Medium)
     */
    void setTitle(const std::string &title) {
        Medium::title = title;
    }

    /**
     * Getter for publicationYear(The publication year of the Medium).
     * @return string (The publication year of the Medium)
     */
    const std::string getPublicationYear() const {
        return publicationYear;
    }

    /**
     * Setter for publicationYear(The publication year of the Medium).
     * @param publicationYear Reference to string (The publication year of the Medium)
     */
    void setPublicationYear(const std::string &publicationYear) {
        Medium::publicationYear = publicationYear;
    }

    /**
     * toString function.
     * Format: [abbreviation] author: title.
     */
    virtual std::string toString() const;
};


#endif //BIBLIOGRAPHY_MANAGEMENT_SYSTEM_MEDIUM_H
