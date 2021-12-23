#ifndef BIBLIOGRAPHY_MANAGEMENT_SYSTEM_BIBLIOGRAPHY_H
#define BIBLIOGRAPHY_MANAGEMENT_SYSTEM_BIBLIOGRAPHY_H

#include "Medium.h"

/**
 * Class Bibliography that manages Mediums objects
 */
class Bibliography {
private:

    //Attributes
    std::size_t capacity;
    Medium **mediumsContainer;

public:

    /**
     * Constructor for Bibliography object.
     * Allocate memory dynamically (on the heap) for the mediumsContainer array
     * @param size Number of elements to be stored in the object
     */
    Bibliography(std::size_t size);

    /**
     * Insert a new Medium object into the bibliography.
     * @param medium pointer the to object medium
     */
    void insert(Medium *medium);

    /**
     * Overloading the operator[] (index operator).
     * @param abbreviation string of the Medium's abbreviation
     * @return pointer to the Medium if it exist in the bibliography, otherwise it returns nullptr
     */
    Medium *operator[](const std::string &abbreviation) const;

    /**
     * Getter for capacity.
     * @return capacity of the object
     */
    std::size_t getSize() const {
        return capacity;
    }

    /**
     * Getter for mediumsContainer.
     * @return mediumsContainer of the object
     */
    Medium **getMediumsContainer() const {
        return mediumsContainer;
    }

    /**
     * Destructor
     */
    virtual ~Bibliography() {
        delete[] mediumsContainer;
    }
};


#endif //BIBLIOGRAPHY_MANAGEMENT_SYSTEM_BIBLIOGRAPHY_H
