/*
Fill in this comment header with the relevant information.
*/

#include <iostream>
#include <cmath>

// Write your functions here!

int main()
{
    int user_choice;
    do
    {
        std::cout << "What would you like to do?\n";
        std::cout << "1. Calculate the diameter of a circle.\n";
        std::cout << "2. Calculate the circumference of a circle.\n";
        std::cout << "3. Calculate the area of a circle.\n";
        std::cout << "4. Exit.\n";
        std::cout << "Enter your choice >> ";
        std::cin >> user_choice;
        while (user_choice != 1 && user_choice != 2 && user_choice != 3 && user_choice != 4)
        {
            std::cout << "Invalid choice.\n\n";
            std::cout << "What would you like to do?\n";
            std::cout << "1. Calculate the diameter of a circle.\n";
            std::cout << "2. Calculate the circumference of a circle.\n";
            std::cout << "3. Calculate the area of a circle.\n";
            std::cout << "4. Exit.\n";
            std::cout << "Enter your choice >> ";
            std::cin >> user_choice;
        }

        double radius;
        switch (user_choice)
        {
        case 1:
            
            std::cout << "Enter the radius of the circle >> ";
            std::cin >> radius;
            std::cout << "The diameter of the circle is: " << CalculateDiameter(radius) << std::endl;
            break;
        case 2:
            std::cout << "Enter the radius of the circle >> ";
            std::cin >> radius;
            std::cout << "The circumference of the circle is: " << CalculateCircumference(radius) << std::endl;
            break;
        case 3:
            std::cout << "Enter the radius of the circle >> ";
            std::cin >> radius;
            std::cout << "The area of the circle is: " << CalculateArea(radius) << std::endl;
            break;
        }
        std::cout << std::endl;
    } while (user_choice != 4);
}
