#include <cmath>
#include <iostream>

using namespace std;

void zadanie_1();
void zadanie_2();
double zadanie_2_funkcja(int x);
void zadanie_3();
bool zadanie_3_czy_trojkat(int bok1, int bok2, int bok3);
int zadanie_3_pole(int bok1, int bok2, int bok3);
void zadanie_4();

int main() 
{
    zadanie_1();
    zadanie_2();
    zadanie_3();
    zadanie_4();

    return 0;
}


//Zadanie 1
void zadanie_1() 
{
    int num1, num2;
    cout << "Podaj po sobie dwie liczby z przedzialu <100,500>: ";
    cin >> num1 >> num2;

    if((num1 < 100 || num1 > 500) || (num2 < 100 || num2 > 500))
    {
        cout << "Podano liczby spoza przedzialu, uruchom ponownie program.";
        system("PAUSE");
    }

    for(int i = max(num1,num2); i >= min(num1,num2); i--)
    {
        cout << i << endl;
    }
}

//Zadanie 2
void zadanie_2() 
{
    int x;
    cout << "Podaj wartosc x: ";
    cin >> x;

    double y = zadanie_2_funkcja(x);
    
    cout << "Wartosc y wynosi: " << y << endl;
}


double zadanie_2_funkcja(int x) 
{
    double y = 0;

    if(x > 0)
    {
        y = sqrt(x) + 1;
    }
    else if(x == 0)
    {
        y = -2;
    }
    else
    {
        y = 4*x*2;
    }

    return y;
}

//Zadanie 3
void zadanie_3()
{

    int bok1, bok2, bok3;
    cout << "Podaj trzy boki trójkąta: ";
    cin >> bok1 >> bok2 >> bok3;

    bool czyJestTrojkatem = zadanie_3_czy_trojkat(bok1, bok2, bok3);
    
    if(czyJestTrojkatem)
    {
        cout << "Jest trójkątem." << endl;
        int pole = zadanie_3_pole(bok1, bok2, bok3);
        cout << "Pole wynosi: " << pole << endl;

    }
    else
    {
        cout << "Nie jest trójkątem." << endl;
    }

}

bool zadanie_3_czy_trojkat(int bok1, int bok2, int bok3)
{
    if(bok1+bok2 < bok3)
    {
        return false;
    }

    if(bok1+bok3 < bok2)
    {
        return false;
    }

    if(bok3+bok2 < bok1)
    {
        return false;
    }

    return true;
}

int zadanie_3_pole(int bok1, int bok2, int bok3)
{
    int p = (bok1+bok2+bok3)/2;

    return sqrt(p*(p-bok1)*(p-bok2)*(p-bok3));
}

//Zadanie 4
void zadanie_4() 
{
    int tab[8];

    for (int i = 0; i < 8; i++)
    {
        int num = 0;
        cout << "Podaj liczbe: " << endl;
        cin >> num;

        tab[i] = num;
    }

    //podpunkt: a
    int suma = 0;
    for(int i = 0; i < 8; i++)
    {
        suma += tab[i];
    }

    double srednia = (double)suma / 8;
    cout << "Srednia wynosi: " << srednia << endl;

    //podpunkt: b
    int najmniejszy = tab[0];

    for(int i = 0; i < 8; i++)
    {
        if(tab[i] < najmniejszy)
            najmniejszy = tab[i];
    }

    cout << "Najmniejszy element wynosi: " << najmniejszy << endl;

    //podpunkt: c
    int sumaNieparzysta = 0;

    for(int i = 0; i < 8; i++)
    {
        if(tab[i] % 2)
            sumaNieparzysta += tab[i];
    }

    cout << "Suma elementów nieparzystych wynosi: " << sumaNieparzysta << endl;

    //podpunkt: d
    int sumaNieparzystaNaMiejscachParzystych = 0;

    for(int i = 1; i < 8; i += 2)
    {
        if(tab[i] % 2)
            sumaNieparzystaNaMiejscachParzystych += tab[i];
    }

    cout << "Suma elementów nieparzystych stojących na pozycjach parzystych wynosi: " << sumaNieparzystaNaMiejscachParzystych << endl;
}