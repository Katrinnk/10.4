#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
void Kilkist(char* fname, char*  gname);
int main()
{
	char fname[100];
	cout << "enter name file: ";
	cin >> fname;
	ifstream f(fname);
	if (!f)
	{
		cerr << "file \"f.txt\" not found" << endl;
		return 1;
	}
	char gname[100];
	cout << "enter file name: ";
	cin >> gname;
	ofstream g(gname);
	int x;
	Kilkist(fname, gname);
	f.close();
	g.close();
	return 0;
}
void Kilkist(char* fname, char* gname)
{
	int x;
	ifstream f(fname);
	ofstream g(gname);
	while (f >> x)
	{
		if (x > 0)
			g << "dodtni: " << x << endl;
		if (x < 0)
			g << "videmni: " << x << endl;
		if (x == 0)
			g << "nulovi: " << x << endl;
		else
			g << "inshi symvoly: " << x << endl;
	}
}
