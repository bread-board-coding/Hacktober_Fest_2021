// static members are also called class members
// static functions are created to access the static variable . note a normal class non-static function can also access the static members.
// but it is recommended to use static member functions
#include <iostream>
using namespace std;
struct S
{
    int x = 0; // we can define and initalise at the same time
};
/////////////////////////////////////////////////////////////////////////
class Player
{
public:
    static int count;
    int x = 0; // we can define and initalise at the same time
    Player() { count++; }
    ~Player() { count--; }
};
int Player::count = 0; // we must define static members thisway always outside the class
// remember it youdo not define a static member variable it will cause error
/////////////////////////////////////////////////////////////////////////////////////////
class Avdplayer
{
    static int count;

public:
    Avdplayer() { count++; }
    ~Avdplayer() { count--; }
    static int print() { return count; }
};
int Avdplayer::count = 0;

int main()
{ // static members means both the data members and the member functions
    Player P1;
    // cout << Player::x; // remember a non static cannot be called like this .
    cout << "Count :" << Player::count << endl; //1
                                                // note - Player::count | P1.count | P2.count will produce the same result because just like member functions
                                                // static members  are created once for a class and all the objects share it .
                                                // Player::count is the recommended way to access the static variable
    {
        Player P2;
        cout << "Count :" << Player::count << endl; //2
    }
    cout << "Count :" << Player::count << endl; //1
                                                ///////////////////////////////////////////////////////////////////////////
    Avdplayer Ap1, Ap2;
    cout << "Avdplayer count : ";
    cout << Avdplayer::print();

    return 0;
}

// static function can only access static part of class/struct they cant access non static data members
// or  even call  non static functions for obvious reason and this point is also not availabe to static functions