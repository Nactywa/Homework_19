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
    setlocale(LC_ALL, "ru");
    
    int size;
    size = 3;
    Cat* A = new Cat;
    Dog* B = new Dog;
    Cow* C = new Cow;

    Animal** array = new Animal * [size] {A, B, C};

    for (int f = 0; f < size; f++)
    {
        array[f]->Voice();
    }
    
}

