#include "Bureaucrat.hpp"

int main()
{
#if 0
    {
        Bureaucrat b("John");
        std::cout << b << std::endl;
        try {
            b.decreaseGrade();
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
        std::cout << b << std::endl;
    }
#else
    {
        Bureaucrat a("Taylor", 5);
        try {
            for (size_t i = 0; i < 5; ++i) {
                std::cout << a << std::endl;
                a.increaseGrade();
            }
            std::cout << a << std::endl;
            for (size_t i = 0; i < 150; --i) {
                a.increaseGrade();
                std::cout << a << std::endl;
            }
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
        std::cout << a << std::endl;
    }
#endif
}
