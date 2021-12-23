#ifndef BIBLIOGRAPHY_MANAGEMENT_SYSTEM_BIBLIOGRAPHYTESTDRIVE_H
#define BIBLIOGRAPHY_MANAGEMENT_SYSTEM_BIBLIOGRAPHYTESTDRIVE_H

#include "Bibliography.h"

/**
 * Overloading the operator<< (OutputOperator) for class Bibliography.
 * @param ostream Reference to output stream
 * @param bibliography Reference to Bibliography object
 * @return Reference to the output stream ostream.
 */
std::ostream &operator<<(std::ostream &ostream, const Bibliography &bibliography);

void testBibliography();

#endif //BIBLIOGRAPHY_MANAGEMENT_SYSTEM_BIBLIOGRAPHYTESTDRIVE_H
