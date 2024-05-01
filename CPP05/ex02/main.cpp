#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
#if 0
    {
        Bureaucrat a("Trillian", 25);
        Bureaucrat b("Ford Prefect", 1);
        AForm* rqf = new RobotomyRequestForm("Marvin");
        PresidentialPardonForm ppf("Arthur Dent");
        a.signAForm(*rqf);
        a.signAForm(ppf);
        a.executeForm(*rqf);
        a.executeForm(ppf);
        b.executeForm(ppf);
        delete rqf;
    }
#else
    {
        Bureaucrat z("The whale in Magrathea");
        ShrubberyCreationForm scf("shrub");
        z.executeForm(scf);
        z.signAForm(scf);
        for (size_t i = 0; i < 10; ++i) {
            z.increaseGrade();
        }
        z.signAForm(scf);
        z.executeForm(scf);
        for (size_t i = 0; i < 10; ++i) {
            z.increaseGrade();
        }
        z.executeForm(scf);
    }
#endif
}
