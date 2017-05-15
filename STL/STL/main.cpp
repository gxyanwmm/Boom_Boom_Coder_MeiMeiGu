#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <class T> class A
{
	void operator () (const T & t)
	{
		cout<<t<<endl;
	}
};



int main()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);

	A<int> a;
	for_each( v.begin(), v.end(), a ); //(*iter)´«¸øprint

	return 0;
}