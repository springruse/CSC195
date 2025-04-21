
#include <iostream>
#include <array>
#include <vector>
#include <list>
#include <stack>
#include <map>
#include <unordered_map>
using namespace std;

unsigned int getHash(string str) {
	int hash = 0;

	for (char c : str) {
		hash = hash * 31 + (int)c;
	}
	return hash;
}

int main()
{
    
    int i = 5;
    int j = 0xff;

	// cout << &j << endl;
    

    //standard array
    array <int, 5> a = { 1,2,3,4,5 };
    cout << a.size() << endl;
    

    for (int i = 0; i < a.size(); i++) {
		cout << a[i] << endl;
    }

    // vector, very fast
	vector<int> vector1 = { 1,2,3,4,5 };
	vector1.push_back(6);
	cout << vector1.size() << endl;
	cout << vector1.capacity() << endl;

	stack<int> stack1;

	stack1.push(1);
	stack1.push(2);
	stack1.push(3);
	stack1.push(4);
	stack1.push(5);
	stack1.pop();
	 
	cout << stack1.top() << endl; // we popped the 5, so we have 4 now at the top

	

    // list, tree-like structure for retrieval and can quickly go down a chain of command
	list<int> list1 = { 1,2,3,4,5 };
	list1.push_back(6);
	list1.insert(list1.begin(), 0);

	for (auto iterate1 = list1.begin(); iterate1 != list1.end(); iterate1++) {
		cout << *iterate1 << endl;
	}
	list<int>::iterator iterate = list1.begin(); //or you could use auto iterate = list1.begin()
	cout << *iterate << endl; // should be 0

    iterate++;

	cout << *iterate << endl; // should be next number in the list


    //map 
	map<string, int> map1;
	map1["riley"] = 46;
    map1["garret"] = 86;
	map1["nicholas"] = 100;
    
	cout << map1["riley"] << endl;

	for (auto iterate2 = map1.begin(); iterate2 != map1.end(); iterate2++) {
		cout << iterate2->first << " " << iterate2->second << endl;
	}

	//unordered map

	unordered_map<string, string > unordered_map1;
	unordered_map1["riley"] = "allmendinger";
	unordered_map1["garret"] = "oxborrow";

	cout << unordered_map1["riley"] << endl;

	string name = "alec";
	int hash = getHash(name);
	cout << hash << endl;

	int data[10];
	data[hash % 10] = 84025;

	cout << data[hash % 10] << endl;

    return 0;
}
