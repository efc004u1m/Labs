#include <iostream>
#include <string>
using namespace std;

class Employee {
    private:
        int id;
        string firstName;
        string lastName;
        int salary;
    public:
        Employee(int id, string firstName, string lastName, int salary) {
            this->id = id;
            this->firstName = firstName;
            this->lastName = lastName;
            this->salary = salary;
        }
        int getId() {
            return id;
        }
        string getFirstName() {
            return firstName;
        }
        string getLastName() {
            return lastName;
        }
        string getName() {
            return firstName + " " + lastName;
        }
        int getSalary() {
            return salary;
        }
        void setSalary(int salary) {
            this->salary = salary;
        }
        int getAnnualSalary() {
            return 12*salary;
        }
        int raiseSalary(int percent) {
            salary = salary + 0.01*percent*salary;
            return salary;
        }
        string toString() {
            return "Employee[id=" + to_string(id) + ",name=" + firstName + " " + lastName
                + ",salary=" + to_string(salary) + "]";
        }
};

/*
int main () {
    Employee e(1, "aaa", "bbb", 100000);
    cout << e.toString() << endl;
    cout << e.getAnnualSalary() << endl;
    cout << e.raiseSalary(10) << endl;
    return 0;
}
*/