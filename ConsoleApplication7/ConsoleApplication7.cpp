#include <iostream>
using namespace std;
//  The singleton:
class University {

private:
    static University* instance;
   /* string departement;
    int proffesors;*/

    University() { }

public:
    static University* getInstance(){
        if (instance == nullptr) {
            instance = new University();
        }
    return instance;
}

//////////////////////////////////


class professor {
private:
    string degree; 
    string department; 
    double salary;
    string gender;
    int id;
    int age ;

public:
   
    professor() {
        degree = "";
        department = "";
        salary = 0.0;
    }

  
    professor( string g,string d, double s,int id, string ge , int a ) {
        department = d;
        salary = s;
        degree = g;
        gender = ge;
        age = a;
    }

    ///// Setters /////
 
    void setAge(string g ) {
        degree = g;
    }
    void setDepartment(string d) {
        department = d;
    }
    void setSalary(double s) {
        salary = s;
    }

    ///// Getters /////
    string getName() {
        return degree;
    }
    string getDepartment() {
        return department;
    }
    double getSalary() {
        return salary;
    }
};

int main()
{
   
}



