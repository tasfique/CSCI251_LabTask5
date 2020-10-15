//Name- Tasfique Enam
//Student ID- 5886429
//LabTask5 Q2
#include <iostream>

using namespace std;

class Person {
    private:
        string fName;
        string lName;
        int age;

    public:
        Person();
        Person(string, string, int);

        void DisplayPerson() {
            cout << " First Name " << fName << endl;
            cout << " Last Name " << lName << endl;
            cout << " Age " << age << endl;
        }
};

Person::Person()
{
    fName="";
    lName="";
    age=0;
}

Person::Person(string fName, string lName, int age)
{
    this->fName=fName;
    this->lName=lName;
    this->age=age;
}



class Date {
    private:
        int month;
        int day;
        int year;

    public:
        Date();
        Date(int, int, int);

        void DisplayDate() {
            cout << " Month " << month << endl;
            cout << " Day " << day << endl;
            cout << " Year " << year << endl;
        }

};

Date::Date() {
    month = 0;
    day = 0;
    year = 0;

}

Date::Date(int month, int day, int year) {
    this->month = month;
    this->day = day;
    this->year = year;

}

class DentalAppointment {
    private:
        Person person;
        Date date;
        int duration;

    public:
        DentalAppointment(Person, Date, int);

        void DisplayDentalAppointment() {
            person.DisplayPerson();
            date.DisplayDate();
            cout << " Duration " << duration << " Minutes "<<endl;
        }
};


DentalAppointment::DentalAppointment(Person person, Date date, int duration) {
    this->person = person;
    this->date = date;
    this->duration = duration;
}


int main() {

    Person person1("John", "Long", 23);
    Person person2("Kim", "Ron", 44);

    Date date1(12, 2, 2000);
    Date date2(10, 9, 1999);

    DentalAppointment dentalappointment1(person1, date1, 30);
    DentalAppointment dentalappointment2(person2, date2, 50);

    dentalappointment1.DisplayDentalAppointment();
    dentalappointment2.DisplayDentalAppointment();


    return 0;
}


