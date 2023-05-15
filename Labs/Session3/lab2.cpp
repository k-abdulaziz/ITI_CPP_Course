#include <iostream>
#include <string>

using namespace std;

class Market
{
private:
    string marketName;
    float earnings;

public:
    Market() : earnings(100000) {}
    Market(float earnings) : earnings(earnings) {}

    string getName();
    float getEarnings();
    void setName(string name);
    void setEarnings(float earnings);
    void print();

    Market operator ++ ()
    {
       Market temp;
       temp.earnings = earnings;
       ++temp.earnings;
       return temp;
    }

    Market operator -- ()
    {
       Market temp;
       temp.earnings = earnings;
       --temp.earnings;
       return temp;
    }

    Market operator+(Market &other)
    {
        int sum = earnings + other.earnings;
        return Market(sum);
    }

    Market operator-(Market &other)
    {
        int sub = earnings - other.earnings;
        return Market(sub);
    }
    Market operator*(Market &other)
    {
        int mul = earnings * other.earnings;
        return Market(mul);
    }
    Market operator/(Market &other)
    {
        int div = earnings / other.earnings;
        return Market(div);
    }
};

int main(void)
{
    Market Metro(100);
    Metro.setName("Metro");

    Market Fathalla(++Metro);
    Fathalla.setName("Fathalla");

    Market Carrefour(--Metro);
    Carrefour.setName("Carrefour");

    Market AlfaMarket(Metro + Fathalla);
    AlfaMarket.setName("AlfaMarket");

    Market BIM(AlfaMarket - Carrefour);
    BIM.setName("BIM");

    Market Kazyon((Metro * Fathalla));
    Kazyon.setName("Kazyon");

    Metro.print();
    Fathalla.print();
    Carrefour.print();
    AlfaMarket.print();
    BIM.print();
    Kazyon.print();

    return 0;
}

string Market::getName()
{
    return marketName;
}

float Market::getEarnings()
{
    return earnings;
}

void Market::setName(string name)
{
    marketName = name;
}

void Market::setEarnings(float earnings)
{
    this->earnings = earnings;
}

void Market::print()
{
    cout << "Market Name: " << marketName << endl;
    cout << "Earnings: " << earnings << endl;
}