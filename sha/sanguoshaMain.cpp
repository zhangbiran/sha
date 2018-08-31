#include <iostream>
using namespace std;
#include <map>
#include <string>
using namespace std;

class A
{
public:
	//string s("hee");
	string s = "hee";
	int a[10]{};
	int b[10]{ 0 };
};


int main(void)
{

	std::map < int, std::pair<int, int> > _map;
	_map[1].first = 100;
	_map[1].second = 200;
	_map[2].first = 300;
	_map[2].second = 400;

	std::map < int, std::pair<int, int> > temp = _map;

	for (auto it = temp.begin(); it != temp.end(); ++it)
	{
		cout << it->second.first << " " << it->second.second << endl;
	}

	static const char *MTOB_CROSS_MATCH_KEYS[] = { "1", "2", "3", "4", "5", "5", "7" };
	int size = sizeof(MTOB_CROSS_MATCH_KEYS) / sizeof(char*);
	cout << size << endl;


	getchar();
	return 0;
}