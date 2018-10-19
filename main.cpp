#include "Data.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v1;
	vector<int> v2 = {5,8,22};
	v1.push_back(12);
	v2.push_back(17);
	v2.pop_back();
	cout << "v2 has " << v2.size() << " elements" << endl;
    
	for (auto x:v2)
	{
		cout << x << endl;
	}
	
	Data d0;
	Data d1 = {7,24.83};
	
	d0.setX(15);
	d0.setY(3.14);
	return 0;
}

void bubbleSort(auto& v)
{
	for (int i = 0; i < v.size(); i++)
	for (int j = 0; j < v.size(); j++)
	if (v[j].getX > v[j+1].getX)
	swap (v[j], v[j+1];
}
