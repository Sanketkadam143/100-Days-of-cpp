// Snake and Ladder

#include <iostream>
#include <time.h>
using namespace std;
int position;

int game(int position)
{

  srand(time(0));
  int random = rand() % 6 + 1;

  cout << "you got " << random << endl;
  position = position + random;

  if (position > 100)
  {
    position = position - random;
  }

  switch (position)
  {
  case 2:
    position = 23;
    cout << "Woah..! you got a ladder and your position is " << position << endl;
    break;

  case 8:
    position = 34;
    cout << "Woah..! you got a ladder and your position is " << position << endl;
    break;

  case 20:
    position = 77;
    cout << "Woah..! you got a ladder and your position is " << position << endl;
    break;

  case 32:
    position = 68;
    cout << "Woah..! you got a ladder and your position is " << position << endl;
    break;

  case 41:
    position = 79;
    cout << "Woah..! you got a ladder and your position is " << position << endl;
    break;

  case 74:
    position = 88;
    cout << "Woah..! you got a ladder and your position is " << position << endl;
    break;

  case 85:
    position = 95;
    cout << "Woah..! you got a ladder and your position is " << position << endl;
    break;

  case 82:
    position = 100;
    cout << "Woah..! you got a ladder and you won..! " << position << endl;
    break;

  case 29:
    position = 9;
    cout << "Oops..! you got a snake and your position is " << position << endl;
    break;

  case 38:
    position = 15;
    cout << "Oops..! you got a snake and your position is " << position << endl;
    break;

  case 47:
    position = 5;
    cout << "Oops..! you got a snake and your position is " << position << endl;
    break;

  case 53:
    position = 33;
    cout << "Oops..! you got a snake and your position is " << position << endl;
    break;

  case 62:
    position = 37;
    cout << "Oops..! you got a snake and your position is " << position << endl;
    break;

  case 86:
    position = 54;
    cout << "Oops..! you got a snake and your position is " << position << endl;
    break;

  case 92:
    position = 70;
    cout << "Oops..! you got a snake and your position is " << position << endl;
    break;

  case 97:
    position = 25;
    cout << "Oops..! you got a snake and your position is " << position << endl;
    break;

  default:
    cout << "Your current position is at " << position << endl;
    break;
  }

  return position;
}

int player1(int playera)
{
  if (playera < 100)
  {
    cout << "Its Player 1 turn to roll..Press Enter to roll" << endl;
    cin.get();

    playera = game(playera);
    if (playera == 100)
    {
      cout << "Congratulations..! Player 1 won" << endl;
    }
  }
  return playera;
}

int player2(int playerb)
{
  if (playerb < 100)
  {
    cout << "Its Player 2 turn to roll..Press Enter to roll" << endl;
    cin.get();

    playerb = game(playerb);

    if (playerb == 100)
    {
      cout << "Congratulations..! Player 2 won" << endl;
    }
  }
  return playerb;
}

int player3(int playerc)
{
  if (playerc < 100)
  {
    cout << "Its Player 3 turn to roll..Press Enter to roll" << endl;
    cin.get();

    playerc = game(playerc);

    if (playerc == 100)
    {
      cout << "Congratulations..! Player 3 won" << endl;
    }
  }
  return playerc;
}

int player4(int playerd)
{
  if (playerd < 100)
  {
    cout << "Its Player 4 turn to roll..Press Enter to roll" << endl;
    cin.get();

    playerd = game(playerd);

    if (playerd == 100)
    {
      cout << "Congratulations..! Player 4 won" << endl;
    }
  }
  return playerd;
}

int main()
{

  int n;
  int position1 = 0, position2 = 0, position3 = 0, position4 = 0;
  bool exit = true;

  cout << "Press Enter to Start the game ";
  cin.get();
  cout << "Enter the total no of players (max 4)" << endl;
  cin >> n;
  if (n != 1,2,3,4)
  {
    cout << "Please enter no of players upto 4" << endl;
  }

  while (n == 1 && position1 < 100)
  {

    position1 = player1(position1);
  }

  while (n == 2 && exit == true)
  {
    if (position2 == 100)
    {
      cout << "Player 1 lost" << endl;
      exit = false;
    }
    else
    {
      position1 = player1(position1);
    }

    if (position1 == 100)
    {
      cout << "Player 2 lost" << endl;
      exit = false;
    }
    else
    {
      position2 = player2(position2);
    }
  }

  while (n == 3 && exit == true)
  {
    if (position2 == 100 && position3 == 100)
    {
      cout << "Player 1 lost" << endl;
      exit = false;
    }
    else
    {
      position1 = player1(position1);
    }

    if (position1 == 100 && position3 == 100)
    {
      cout << "Player 2 lost" << endl;
      exit = false;
    }
    else
    {
      position2 = player2(position2);
    }

    if (position1 == 100 && position2 == 100)
    {
      cout << "Player 3 lost" << endl;
      exit = false;
    }
    else
    {
      position3 = player3(position3);
    }
  }

  while (n == 4 && exit == true)
  {
    if (position2 == 100 && position3 == 100 && position4 == 100)
    {
      cout << "Player 1 lost" << endl;
      exit = false;
    }
    else
    {
      position1 = player1(position1);
    }

    if (position1 == 100 && position3 == 100 && position4 == 100)
    {
      cout << "Player 2 lost" << endl;
      exit = false;
    }
    else
    {
      position2 = player2(position2);
    }

    if (position1 == 100 && position2 == 100 && position4 == 100)
    {
      cout << "Player 3 lost" << endl;
      exit = false;
    }
    else
    {
      position3 = player3(position3);
    }

    if (position1 == 100 && position2 == 100 && position3 == 100)
    {
      cout << "Player 4 lost" << endl;
    }
    else
    {
      position4 = player4(position4);
    }
  }

  cout << "Thanks for Playing";
  return 0;
}