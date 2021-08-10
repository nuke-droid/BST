#include <iostream>
#include <fstream>
#include <string>

#include "BST.h"
using namespace std;



int main() {
	
	ifstream ifs("1hundrednodes.txt");

	string line;

	BST myTree;

	cout << "Printing the tree in order\nBefore adding numbers\n";
	myTree.traverseInOrder();
	cout << "Printing the tree in order\nAfter adding numbers\n";
	while (getline(ifs, line))
	{
		myTree.addNode(stoi(line));
	}
	myTree.traverseInOrder();
	cout << "\n";
	cout << "Max Key: ";
	myTree.findMax();

	system("pause");
	return 0;
}