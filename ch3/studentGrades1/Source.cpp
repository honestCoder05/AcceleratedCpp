#include<iomanip>
#include<ios>
#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::setprecision;
using std::string;
using std::streamsize;

int main()
{
	// ask for and read the student's name
	cout << "Please enter your first name:";
	string name;
	cin >> name;
	cout << "Hello " << name << endl;

	//ask for and read midterm and final grades
	cout << "Please enter your midterm and final exam grades: ";
	double midterm, final;
	cin >> midterm >> final;

	// ask for homework grade
	cout << "Please enter your homework grades followed by end-of file: ";
	// # and sum of grades read so far
	int count = 0;
	double sum = 0;

	// a variable to read into
	double x;

	while (cin >> x)
	{
		++count;
		sum += x;
	}
	streamsize prec = cout.precision();
	cout << "Your final grade is " << setprecision(3) << (0.2 * midterm + 0.4 * final + 0.4 * sum) / count << setprecision(prec) << endl;
	return 0;
}
