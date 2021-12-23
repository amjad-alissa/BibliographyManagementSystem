#include <iostream>

#include "Medium.h"
#include "Book.h"
#include "Article.h"
#include "BibliographyTestDrive.h"

//overloaded function for operator<< (output operator)
std::ostream &operator<<(std::ostream &ostream, const Bibliography &bibliography) {
    std::size_t size = bibliography.getSize();
    Medium **mediums = bibliography.getMediumsContainer();
    for (std::size_t i = 0; i < size; ++i) {
        if (mediums[i] != nullptr) {
            ostream << mediums[i]->toString();
        }
    }
    return ostream;
}

//Test function
void testBibliography() {
    Bibliography mybibliography(10);

    Book *book1 = new Book("Ra01",
                           "Dietmar Ratz",
                           "Grundkurs Programmieren in Java",
                           std::to_string(2001),
                           "Hanser-Verlag");

    Book *book2 = new Book("Kr03",
                           "Guido Krueger",
                           "Handbuch der Java-Programmierung",
                           std::to_string(2003),
                           "Addison-Wesley");

    Article *article1 = new Article("Pa72",
                                    "D. L. Parnas",
                                    "On the Criteria To Be Used in Decomposing Systems into Modules",
                                    std::to_string(1972),
                                    "Communications of the ACM",
                                    std::to_string(15),
                                    std::to_string(1053));

    mybibliography.insert(book1);
    mybibliography.insert(book2);
    mybibliography.insert(article1);

    std::cout << "Bibliography:" << '\n' << mybibliography << '\n';

    std::cout << "Access by index operator:" << '\n';
    std::cout << mybibliography["Pa72"]->toString();
    std::cout << mybibliography["Kr03"]->toString();
    std::cout << mybibliography["Ra01"]->toString();

}

int main() {
    testBibliography();
    return 0;
}