#include <iostream>
#include <vector>

using namespace std;

std::vector<int> grades = {};

void TheFirstThree()
{
    for (int i = 0; i < 3; i++)
    {
        std::cout << "[" << i + 1 << "] " << grades[i] << std::endl;
    }
}

int main() {
    
    int studentCounter = 0, passedStudents = 0, flag = 0;
    double average, tempGrade, classGrade = 0;
    
    while(flag == 0){
        cout << "__Welcome to the grade sorter__\n";
        cout << "How many students' grades you want to input? (Min. 5)\n";
        cin >> studentCounter;
        if(studentCounter > 4){
            flag = 1;
        }
    }

    
    for(int i = 0; i < studentCounter; i++){
        cout << "Please input Student " << i + 1 << " percentage: ";
        cin >> tempGrade;
        grades.push_back(tempGrade);
        classGrade = classGrade + tempGrade;
        if (tempGrade > 40){
            passedStudents++;
        }
    }
    //I personally do not think the average calculation is right however this is my attempt
    average = classGrade / studentCounter;
    
    cout << "Class average: " << average << "%\n";
    cout << "Amount of students passed: " << passedStudents << "\n";
    
    cout << "The best 3 grades:" << "\n";
    
    sort(grades.begin(), grades.end(), greater<int>());

    TheFirstThree();
    
    cout << "The worst 3 grades:" << "\n";
    
    sort(grades.begin(), grades.end());
    
    TheFirstThree();
    
    return 0;
}
