#include <iostream>
#include <stack>
#include <cctype>

int main(int ac, char **av) {
    std::stack<int> a;
    int i = 0;
    if (ac == 2) {
        while(av[1][i]) {
            if (isdigit(av[1][i])) {
                a.push(av[1][i] - '0');
            } else if (av[1][i] == '*' || av[1][i] == '+' || av[1][i] == '-' || av[1][i] == '/') {
                if (a.size() < 2) {
                    std::cerr << "Error" << av[1][i] << std::endl;
                    return 1;
                }
                int s2 = a.top();
                a.pop();
                int s1 = a.top();
                a.pop();
                if (av[1][i] == '*')
                    a.push(s1 * s2);
                else if (av[1][i] == '+')
                    a.push(s1 + s2);
                else if (av[1][i] == '-')
                    a.push(s1 - s2);
                else if (av[1][i] == '/')
                    a.push(s1 / s2);
            } 
            i++;
        }
    } else {
        std::cerr << "Error"<< std::endl;
        return 1;
    }
    
    if (a.size() == 1)
        std::cout << "Result: " << a.top() << std::endl;
    else
        std::cerr << "Error" << std::endl;
    
    return 0;
}
