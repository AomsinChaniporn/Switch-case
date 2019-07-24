#include<iostream>
using namespace std;
int main()
{
	char Choice;
	int Grade;
	cout << " Menu Score Student Grade " << endl ;
	cout << " 1. 80-100" << endl;
	cout << " 2. 75-79" << endl;
	cout << " 3. 70-74" << endl;
	cout << " 4. 65-69" << endl;
	cout << " 5. 60-64" << endl;
	cout << " 6. 55-59" << endl;
	cout << " 7. 50-54" << endl;
	cout << " 8. 0-49" << endl;
	cout << " 9. Exit" << endl;
	cout << "Please select choice : ";
	cin >> Choice;
	switch (Choice)
	{
		case '1' : 
			cout << "Your score is rang <80-100>" << endl;
			cout << "The student grade is 4.00" << endl;
		break;
		case '2' : 
			cout << "Your score is rang <75-79>" << endl;
			cout << "The student grade is 3.50" << endl;
		break;
		case '3' :
			cout << "Your score is rang <70-74>" << endl;
			cout << "The student grade is 3.00" << endl;
		break;
		case '4' :
			cout << "Your score is rang <65-69>" << endl;
			cout << "The student grade is 2.50" << endl;
		break;
		case '5' :
			cout << "Your score is rang <60-64>" << endl;
			cout << "The student grade is 2.00" << endl;
		break;
		case '6' :
			cout << "Your score is rang <55-59>" << endl;
			cout << "The student grade is 1.50" << endl;
		break;
		case '7' : 
			cout << "Your score is rang <50-54>" << endl;
			cout << "The student grade is 1.00" << endl;
		break;
		case '8' : 
			cout << "Your score is rang <0-49>" << endl;
			cout << "The student grade is 0" << endl;
		break;
		default :
			cout << Choice << "is error" << endl;
			cout << endl;
		return(1);
	}
	return(0);
}