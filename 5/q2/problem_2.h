#include <string>
using namespace std;

class Employee {
    private:
        int id;
        string firstName;
        string lastName;
        int salary;
    public:
        Employee(int id, string firstName, string lastName, int salary);
        int getId();
        string getFirstName();
        string getLastName();
        string getName();
        int getSalary();
        void setSalary(int salary);
        int getAnnualSalary();
        int raiseSalary(int percent);
        string toString();
};