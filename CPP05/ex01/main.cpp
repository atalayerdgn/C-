#include "Bureaucrat.hpp"

int main()
{
#if 0
    {
        Bureaucrat b("John");
        try {
            Form a("Invalid Form", 0, 100);
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    }
#elif 1
    {
        Bureaucrat a("Taylor", 20);
        Form f("Military Form", 20, 10);
        std::cout << f;
        a.signForm(f);
        std::cout << f;
    }
#else
    {
        Bureaucrat b("Brad", 50);
        Form f("Education Form", 40, 20);
        std::cout << f;
        b.signForm(f);
        std::cout << f;
    }
#endif
}
