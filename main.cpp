#include <iostream>

using namespace std;
int steps = 1;

void moveDisk(int disk, char origin, char spare, char destiny)
{
    if(disk == 1)
    {
        cout << steps++ << "- Move disk 1 from " << origin << " to " << destiny << endl;
        return;
    }
    moveDisk(disk-1, origin, destiny, spare);
    cout << steps++ <<"- Move disk " << disk << " from " << origin << " to " << destiny <<endl;
    moveDisk(disk-1, spare, origin, destiny);
}


int main()
{

    int disks;
    cout << "Hanoi Tower Solver v0.1 by Raydelto Hernandez (raydelto@gmail.com)" << endl;
    cout << "Enter the amount of disks: ";
    cin >> disks;
    moveDisk(disks, 'A','B','C');
    return 0;
}
