//Name- Tasfique Enam
//Student ID- 5886429
//LabTask5 Q1
#include <iostream>

using namespace std;

class Troll { //troll class
    private:
        string name;
        string type;
        int age;
        static double tollFee;
        //tollFee = 15.00;
    public:
        Troll(); //default constructor

        static double changeToll(double toll) {
            tollFee = toll;
        }

        void setField(string n, string t, int a) {
            name = n;
            type = t;
            age = a;
        }

        void Display() {
            cout << name << " is a " << type << " troll!! " << endl;
            cout << name << " is " << age << " years old. " << endl;
            cout << "The Troll toll is RM" << tollFee << endl;
        }
};

Troll::Troll() { //default constructor
    name = "";
    type = "";
    age = 0;
}

double Troll::tollFee = 15.00;


int main()
{
    double toll;

    Troll aTroll;
    aTroll.setField("Boris","Mountain",8);
    aTroll.Display();
    cout << " " << endl;

    Troll bTroll;
    bTroll.setField("Igor","Forest",100);
    bTroll.Display();
    cout << " " << endl;

    cout << "Enter new value for the toll: ";
    cin >> toll;
    aTroll.changeToll(toll);
    aTroll.Display();
    cout << " " << endl;
    bTroll.Display();


    return 0;
}

