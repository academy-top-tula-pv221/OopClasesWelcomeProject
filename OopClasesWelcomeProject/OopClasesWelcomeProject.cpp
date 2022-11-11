// OopClasesWelcomeProject.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>

struct Date
{
    int day;
    int month;
    int year;
};

class DateTime
{
    int day;
    int month;
    int year;

public:

    // classic init
    /*DateTime()
    {
        day = 1;
        month = 1;
        year = 0;
    }*/

    //uniform init
    DateTime() : day{ 1 }, month{ 1 }, year{ 1 } {};

    DateTime(int day, int month, int year) : DateTime()
    {
        if (day > 0 && day < 32)
            this->day = day;

        if (month > 0 && month < 13)
            this->month = month;

        if (year != 0)
            this->year = year;
    }

    DateTime(int d, int m) : DateTime(d, m, 1) {}
    DateTime(int y) : DateTime(1, 1, y) {}
    

    void SetDay(int d)
    {
        if (d > 0 && d < 32)
            day = d;
    }
    int GetDay() { return day; }

    void SetMonth(int month)
    {
        if (month > 0 && month < 13)
            this->month = month;
    }
    int GetMonth() { return month; }

    void SetYear(int y) { year = y; }
    int GetYear() { return year; }

    void Print()
    {
        std::cout << this->day << ":" << this->month << ":" << this->year;
    }
};


class Vector
{
    int size;
    int* array;
public:
    Vector() : size{ 0 }, array{ nullptr } {}

    Vector(int s) : size{ s }
    {
        array = new int[size];
    }

    ~Vector()
    {
        if(array)
            delete[]array;
    }

    int GetSize() { return size; }
};


int main()
{
    {
        Vector vector(10);
    }


    //DateTime dateTime(5, 10);

    //dateTime.Print();
    //std::cout << "\n";
    //
    //dateTime.SetDay(15);
    //dateTime.SetMonth(3);
    //dateTime.SetYear(2011);

    //dateTime.Print();
    //std::cout << "\n";

    return 0;
}
