using namespace std;
class Account {
    string id;
    string name;
    int balance;
    public:
        Account(string id, string name);
        Account(string id, string name, int balance);
        string getID();
        string getName();
        int getBalance();
        int credit(int amount);
        int debit(int amount);
        int transferTo(Account& acc, int amount);
        string toString();
};