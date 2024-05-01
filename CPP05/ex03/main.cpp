#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
    Intern someRandomIntern;
    try
    {
        AForm* rrf;
        rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");

        Bureaucrat a("John", 42);
        a.signAForm(*rrf);
        a.executeForm(*rrf);
        delete rrf;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    AForm* zpf;
    try {
        zpf = someRandomIntern.makeForm("some random form", "xd");
        delete zpf;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}
