#include <iostream>
#include <string>

int main()
{
    bool quit = false;
    char gradeInput;
    char gradeArr[] = {};
    char answer;
    int gradeArrSize = sizeof(gradeArr) / sizeof(gradeArr[0]);
 
    
    while(!quit)
    {
        std::cout << "Please enter your grade: " << std::endl;
        std::cin >> gradeInput;
        gradeArr[gradeArrSize] = gradeInput;


        std::cout << "Would you like to enter another grade? y/n" << std::endl;
        std::cin >> answer; 

        if (answer == 'N' || answer == 'n')
        {
            quit = true; 
        }

    }
    std::cout << " ........incoming grades........" << std::endl;
    std::cout << gradeArrSize;
    for(int i = 0; i < gradeArrSize; i++ )
    {
        
        std::cout << "Grades: " << gradeArr[i] << std::endl;
    }

 
    
    return 0;
}