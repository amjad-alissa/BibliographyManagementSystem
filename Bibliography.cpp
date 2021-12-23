#include "Bibliography.h"

//constructor
Bibliography::Bibliography(std::size_t size) : capacity(size) {
    mediumsContainer = new Medium *[size];
    for (std::size_t i = 0; i < size ; ++i) {
        mediumsContainer[i] = nullptr;
    }
}

//Insert new element
void Bibliography::insert(Medium *medium) {

    //Look for the first free index
    std::size_t index = 0;
    while (mediumsContainer[index] != nullptr && index < capacity) {
        ++index;
    }

    //This case means that the bibliography is full.
    //The case I choose to implement is to resize the bibliography.
    if (index == capacity - 1 ) {

        // double the capacity of the bibliography,
        // Create a new mediumsContainer with the new capacity,
        // and copy all the elements of the old container to the new one.
        std::size_t newSize = capacity * 2;
        Medium **pMedium = new Medium *[newSize];
        for (std::size_t i = 0; i < capacity; ++i) {
            pMedium[i] = mediumsContainer[i];
        }

        //Delete the old mediumsContainer
        //Set the attribute capacity of the bibliography = newSize
        //Set the attribute mediumsContainer of the bibliography = the newly created container (pMedium).
        delete[] mediumsContainer;
        capacity = newSize;
        mediumsContainer = pMedium;
    } else {

        //In this case we have a free space in the bibliography, so we just insert the medium;
        mediumsContainer[index] = medium;
    }
}

//Overloading operator[] (indexing operator)
Medium *Bibliography::operator[](const std::string &abbreviation) const {
    for (std::size_t i = 0; i < capacity ; ++i) {
        if(mediumsContainer[i]->getAbbreviation() == abbreviation) {
            return mediumsContainer[i];
        }
    }
    return nullptr;
}
