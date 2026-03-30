#include <iostream>
#include <string>

struct employee
{
    int id;
    std::string name;
    int salary;
};

int main()
{
    employee em[5];

    for (int i = 0; i < 5; i++)
    {
        std::cout << "Enter Id:";
        std::cin >> em[i].id;

        std::cout << "Enter name:";
        std::cin >> em[i].name;

        std::cout << "Enter salary:";
        std::cin >> em[i].salary;
    }

    int more = em[0].salary;
    std::string newName = em[0].name;
    for (int i = 1; i < 5; i++)
    {
        // more = more < em[i].salary ? em[i].salary ; : more;
        if (more < em[i].salary)
        {
            more = em[i].salary;
            newName = em[i].name;
        }
        else
        {
            more = more;
        }
    }

    std::cout << "'''''''''''''''''''''''''''''''''''''" << std::endl;
    std::cout << "heighest salary : " << more << std::endl;
    std::cout << "Name of Employee : " << newName << std::endl;
    std::cout << "'''''''''''''''''''''''''''''''''''''" << std::endl;

    return 0;
}