#include "LList.h"
#include <iostream>
using namespace std;

int main(){
	ElmtLList<int> e1(3);
	LList<int> List1;
	List1.add(10);
	List1.add(20);
	List1.add(20);
	List1.remove(20);
	LList<int> List2 = List1;
	List2.add(100);
	
	cout << List1 << endl;
	
	cout << List2 << endl;
	
	LList<int> List3;
	List3 = List2;
	List3.add(200);
	
	cout << List3 << endl;
	
	cout << List3.get(1) << endl << endl;
	
	cout << List3.find(200) << endl << endl;
	
	bool b = List3.isEmpty();
	
	cout << b << endl << endl;
	
	LList<int> List4;
	b = List4.isEmpty();
	
	cout << b << endl << endl;
	
}
