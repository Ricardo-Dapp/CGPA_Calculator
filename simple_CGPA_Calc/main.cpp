#include <iostream>
#include <string>
#include <cmath>

int main()
{
   
    int     classCounterInput   = 0;
    int     currentClassCounter = 0;
    int     creditInput         = 0;
    int     totalCredits        = 0;

    float GPA                   = 0.0;
    float totalClassGrade       = 0.0;

    char    gradeInput;

    int     creditArr[10];
    char    gradeArr[10];

    std::cout << "Please enter the amount of classes you would like to enter: ";
    std::cin >> classCounterInput;
  
   while(currentClassCounter < classCounterInput)
    {
        std::cout << "Please enter your grade for class "<<  (currentClassCounter + 1) << ": ";
        std::cin >> gradeInput;
        gradeArr[currentClassCounter] = gradeInput;
        
        std::cout << "Please enter how many credit(s) for class "<<  (currentClassCounter + 1) << ": ";
        std::cin >> creditInput;
        creditArr[currentClassCounter] = creditInput;
        totalCredits += creditInput;
        
        currentClassCounter++;
    }

    std::cout << " ........Calculating GPA......." << std::endl;

    for(int i = 0; i < classCounterInput; i++ )
    {
        if(toupper(gradeArr[i]) == 'A')
        {
            totalClassGrade += 4.0 * float(creditArr[i]);
        }
        else if (toupper(gradeArr[i]) == 'B')
        {
             totalClassGrade += 3.0 * float(creditArr[i]);
        }
          else if (toupper(gradeArr[i]) == 'C')
        {
             totalClassGrade += 2.0 * float(creditArr[i]);
        }
          else if (toupper(gradeArr[i]) == 'D')
        {
             totalClassGrade += 1.0 * float(creditArr[i]);
        }
          else if (toupper(gradeArr[i]) == 'F')
        {
             totalClassGrade += 0.0 * float(creditArr[i]);
        }
    }

    GPA = totalClassGrade/totalCredits;

    std::cout << "Your GPA is: " << (ceil((GPA * 100)) / 100) << std::endl;
    
    return 0;
}