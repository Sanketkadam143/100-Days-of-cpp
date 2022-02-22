//Stone Paper Scissor game

#include <iostream>
#include <time.h>
using namespace std;

void stone(int random)
{

    if (random == 2)
    {
        cout << "You lost" << endl;
    }
    else if (random == 3)
    {
        cout << "You Won" << endl;
    }
    else
    {
        cout << "Draw" << endl;
    }
}

void paper(int random)
{

    if (random == 3)
    {
        cout << "You lost" << endl;
    }
    else if (random == 1)
    {
        cout << "You Won" << endl;
    }
    else
    {
        cout << "Draw" << endl;
    }
}
void scissor(int random)
{

    if (random == 1)
    {
        cout << "You lost" << endl;
    }
    else if (random == 2)
    {
        cout << "You Won" << endl;
    }
    else
    {
        cout << "Draw" << endl;
    }
}

void fav()
{

    int n;
    cout << "select 1.Stone 2.Paper 3.Scissor ";
    cin >> n;

    srand(time(0));
    int random = rand() % 3 + 1;

    switch (n)
    {
    case 1:
        stone(random);
        break;
    case 2:
        paper(random);
        break;

    case 3:
        scissor(random);
        break;

    default:
        cout << "It's not a valid Selection \n";
        break;
    }
}

int main()
{
    int a;
    bool validator = true;

    fav();

    while (validator == true)
    {
        cout << "1.Play Again  2.Exit " << endl;
        cin >> a;
        if (a == 1)
        {
            fav();
        }
        else if (a == 2)
        {
            validator = false;
            cout << "Thanks for playing";
        }
        else
        {
            cout << "Oops..! That's the invalid input \n";
        }
    }

    return 0;
}