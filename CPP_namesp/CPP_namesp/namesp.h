
#include<string>
namespace pers
{
    struct Person
    {
        std::string fname;
        std::string lname;
    };
    void getPerson(Person&);
    void showPerson(const Person&);
}
namespace debts
{
    using namespace pers;//pers 네임스페이스를 사용함
    struct Debt
    {
        Person name;
        double amount;
    };
    void getDebt(Debt&);
    void showDebt(const Debt&);
    double sumDebts(const Debt ar[], int n);
}