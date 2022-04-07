// C++ program to demonstrate syntax of switch
#include <iostream>
using namespace std;

// Driver Code
int main()
{
	int x, y, z, a;
	cout<<"Enter marks :";
	std::cin>>x >>y>>z;
	x = x/10;

	a = (x+y+z)/3;
	a=a/10;
	switch (a) {
	case 1:
		cout << "F";
		break;
	case 2:
		cout << "D";
		break;
	case 3:
		cout << "D+";
		break;

    case 4:
		cout << "C+";
		break;
	case 5:
		cout << "C";
		break;
	case 6:
		cout << "B";
		break;
    case 7:
		cout << "B+";
		break;
	case 8:
		cout << "A";
		break;
	case 9:
		cout << "A+";
		break;
	}
	return 0;
}
