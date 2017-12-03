#include <iostream>
#include <iomanip>
using namespace std;

double calculateRetail();
int main()
{
        double RetalPrice;
        cout << "This program calculates and displays the retail price of an item.\n";
        RetalPrice = calculateRetail();
        cout << fixed << showpoint << setprecision(2);
        cout << "The retail price of the item is $"<< RetalPrice <<endl;
        return 0;
}
double calculateRetail()
{
        double Cost,Markup;
        do
        {
                cout << "What is the items wholesale cost?";
                cin >> Cost;
        if (Cost < 0)
        {
                cout << "Error!\n << Wholesale cost must be a positive number.\n";
        }
        }
        while (!(Cost > 0));
        do
        {
        cout << "What is the items markup percentage?";
        cin >> Markup;
        if (Markup < 0)
        {
        cout << "Error!\n" << "The markup percentage must be a positive number.\n";
        }
        }
        while (!(Markup > 0));
        Markup /= 100;
        return Cost * (1 + Markup);
}
