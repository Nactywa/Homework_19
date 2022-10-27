// Homework_19.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using std::cout;
using std::endl;

class Animal
{
public:
    virtual void Voice()
    {
        cout << "!" << endl;
    }
};


class Dog : public Animal
{
public:
    void Voice() override
    {
        cout << "WOOF!" << endl;
    }
};


class Cat : public Animal
{
public:
    void Voice() override
    {
        cout << "MEOW!" << endl;
    }
};

class Cow : public Animal
{
public:
    void Voice() override
    {
        cout << "MOO!" << endl;
    }
};

int main()
{
   
}

