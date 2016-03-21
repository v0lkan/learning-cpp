#include <iostream>

using namespace std;

class Person {
public:
    string name;
    int age;
    string gender;

    Person(string name="", int age=0, string gender="male") :
        name(name), age(age), gender(gender) {}
};

class BaseballPlayer: public Person {
public:
    double battingAverage;
    int homeRuns;

    BaseballPlayer(double battingAverage = 0.0, int homeRuns = 0):
        battingAverage(battingAverage), homeRuns(homeRuns) {}

    BaseballPlayer(string name, int age, string gender, double battingAverage, int homeRuns):
        Person(name, age, gender), battingAverage(battingAverage), homeRuns(homeRuns) {}
};

class Employee: public Person {
public:
    string employerName;
    double hourlySalary;
    long employeeId;

    Employee(string employerName, double hourlySalary, long employeeId):
        employerName(employerName), hourlySalary(hourlySalary), employeeId(employeeId) {}

    void printNameAndSalary() {
        cout << name << ": " << hourlySalary << endl;
    }
};

class SuperVisor: public Employee {
public:
    SuperVisor(const string &employerName, double hourlySalary, long employeeId) : Employee(employerName, hourlySalary,
                                                                                            employeeId) { }

    long overseeIds[5];
};

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}
