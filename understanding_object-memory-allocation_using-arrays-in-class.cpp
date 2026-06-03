#include <iostream>
#include <string>
using namespace std;

class employee
{
private:
    string name[10];
    int id[10], salary[10], bonus = 5000, count = 0;

public:
    void set_data(), display_data(int i), salary_increase(), bonus_output();
};

int main()
{
    employee e;
    e.set_data();
    for (int i = 0; i < 3; i++)
    {
        e.salary_increase();
        e.display_data(i);
    }
    return 0;
}

void employee::set_data()
{
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter name: ";
        cin >> name[i];
        cout << "Enter id: ";
        cin >> id[i];
        cout << "Enter initial salary: ";
        cin >> salary[i];
        count++;
    }
}

void employee::salary_increase()
{
    for (int i = 0; i < 10; i++)
    {
        salary[i] = salary[i] + 1000;
    }
}

void employee::display_data(int i)
{
    for (int j = 0; j < count; j++)
    {
        cout << "Name: " << name[j] << endl;
        cout << "ID: " << id[j] << endl;
        cout << "Salary: " << salary[j] << endl;
        if (i == 2)
        {
            bonus_output();
        }
    }
}

void employee::bonus_output()
{
    cout << "Bonus: " << bonus << endl;
}