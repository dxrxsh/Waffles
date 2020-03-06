#include <iostream>
#include <ctime>
#include <windows.h>
#include <string>
#include <math.h>
#include <stdio.h>
#include <cstdlib>
#include <list>
#include "Source.h"
#include "Calc.h"
#include "stringworker.h"
using namespace std;

//#define CLEAR system("cls")
//#define PI 3.14
//#define TAB "\t"
//#define beginDyzka{
//#define END}

int main(){
	
	int result = Calc::sum(10,5);
	cout << result << endl;

	stringworker::sum("IT","Step");

    Calc::show();
	stringworker::show();










	/*cout << "HELLO 1" << endl;
	CLEAR;
	cout << "HELLO 2" << endl;
	CLEAR;
	cout << "HELLO 3" << TAB << "WORLD" << endl;

	cout << " PI " << endl;
	cout << PI << endl;
*/
	/*for (int i = 0; i < 10; i++)
		beginDyzka
		cout << i << endl;
	    END
*/







	system("pause");
	return 0;
}