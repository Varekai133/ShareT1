// Task3v2.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include "Graph.h"
#include <iostream>
#include <stdexcept>
#include <vector>
#include <stdio.h>
using namespace std;

template<class T>
void DPrintAll(Graph<T> &g)
{
	g.DSearch();

	auto a = g.begin();
	auto b = g.end();
	a._res = g._sortnodes;
	while (a != b)
	{
		cout << a._cur->_data << " -> ";
		a++;
	}
	cout << b._cur->_data << endl;
	g.UnvisitAll();
}

template<class T>
void WPrintAll(Graph<T> &g)
{
	g.WSearch();

	auto a = g.begin();
	auto b = g.end();
	a._res = g._sortnodes;
	while (a != b)
	{
		cout << a._cur->_data << " -> ";
		a++;
	}
	cout << b._cur->_data << endl;
	g.UnvisitAll();
}

template<class T>
void WPrintbyindex(Graph<T> &g, int index)
{
	g.WSearch();

	auto a = g.begin();
	a._res = g._sortnodes;
	Node<T> node = a + index;
	cout << node._data << endl;
	g.UnvisitAll();
}

template<class T>
void DPrintbyindex(Graph<T> &g, int index)
{
	g.DSearch();

	auto a = g.begin();
	a._res = g._sortnodes;
	Node<T> node = a + index;
	cout << node._data << endl;
	g.UnvisitAll();
}


int main()
{
	int choice = 0;
	cout << "Choose graph type: 1)int 2)string ";
	cin >> choice;
	if (choice == 1)
	{
		Graph<int> g = Graph<int>();
		while (true)
		{
			cout << "1)Make new node\n2)Make new edge\n3)Print martix\n4)WPrint all\n5)DPrint all\n6)WPrint by index\n7)DPring by index\n8)Delete node\n9)Delete edge\n";
			int choice2 = 0;
			cin >> choice2;
			if (choice2 == 1)
			{
				cout << "Print int data: ";
				int data = 0;
				cin >> data;
				g.AddNode(data);
			}
			else if (choice2 == 2)
			{
				g.Printindex();
				int index1 = 0;
				int index2 = 0;
				cout << "Print index of 1 node: ";
				cin >> index1;
				cout << endl;
				cout << "Print index of 2 node: ";
				cin >> index2;
				g.AddEdge(*g._nodes[index1], *g._nodes[index2]);
			}
			else if (choice2 == 3)
			{
				g.Print();
			}
			else if (choice2 == 4)
			{
				WPrintAll(g);
			}
			else if (choice2 == 5)
			{
				DPrintAll(g);
			}
			else if (choice2 == 6)
			{
				int index = 0;
				cout << "Print index of node: ";
				cin >> index;
				WPrintbyindex(g, index);
			}
			else if (choice2 == 7)
			{
				int index = 0;
				cout << "Print index of node: ";
				cin >> index;
				DPrintbyindex(g, index);
			}
			else if (choice2 == 8)
			{
				g.Printindex();
				int index1 = 0;
				cout << "Print index of node: ";
				cin >> index1;
				g.DeleteNode(index1);
			}
			else if (choice2 == 9)
			{
				g.Printindex();
				int index1 = 0;
				int index2 = 0;
				cout << "Print index of 1 node: ";
				cin >> index1;
				cout << endl;
				cout << "Print index of 2 node: ";
				cin >> index2;
				g.DeleteEdge(index1, index2);
			}
			else break;
		}
	}
	else
	{
		Graph<string> g = Graph<string>();
		while (true)
		{
			cout << "1)Make new node\n2)Make new edge\n3)Print martix\n4)WPrint all\n5)DPrint all\n6)WPrint by index\n7)DPring by index\n";
			int choice2 = 0;
			cin >> choice2;
			if (choice2 == 1)
			{
				cout << "Print string data: ";
				string data = "";
				cin >> data;
				g.AddNode(data);
			}
			else if (choice2 == 2)
			{
				g.Printindex();
				int index1 = 0;
				int index2 = 0;
				cout << "Print index of 1 node: ";
				cin >> index1;
				cout << endl;
				cout << "Print index of 2 node: ";
				cin >> index2;
				g.AddEdge(*g._nodes[index1], *g._nodes[index2]);
			}
			else if (choice2 == 3)
			{
				g.Print();
			}
			else if (choice2 == 4)
			{
				WPrintAll(g);
			}
			else if (choice2 == 5)
			{
				DPrintAll(g);
			}
			else if (choice2 == 6)
			{
				int index = 0;
				cout << "Print index of node: ";
				cin >> index;
				WPrintbyindex(g, index);
			}
			else if (choice2 == 7)
			{
				int index = 0;
				cout << "Print index of node: ";
				cin >> index;
				DPrintbyindex(g, index);
			}
			else if (choice2 == 8)
			{
				g.Printindex();
				int index1 = 0;
				cout << "Print index of node: ";
				cin >> index1;
				g.DeleteNode(index1);
			}
			else if (choice2 == 9)
			{
				g.Printindex();
				int index1 = 0;
				int index2 = 0;
				cout << "Print index of 1 node: ";
				cin >> index1;
				cout << endl;
				cout << "Print index of 2 node: ";
				cin >> index2;
				g.DeleteEdge(index1, index2);
			}
			else break;
		}
	}
	
	
	/*g.AddNode(1);
	g.AddNode(2);
	g.AddNode(3);
	g.AddNode(4);*/

	/*g.AddEdge(*g._nodes[0], *g._nodes[1]);
	g.AddEdge(*g._nodes[0], *g._nodes[2]);
	g.AddEdge(*g._nodes[1], *g._nodes[2]);
	g.AddEdge(*g._nodes[1], *g._nodes[3]);
	g.AddEdge(*g._nodes[2], *g._nodes[3]);*/

	/*g.AddNode(0);
	g.AddNode(1);
	g.AddNode(2);
	g.AddNode(3);
	g.AddNode(4);
	g.AddNode(5);*/
	/*Graph<string> g = Graph<string>();

	g.AddNode("0");
	g.AddNode("1");
	g.AddNode("2");
	g.AddNode("3");
	g.AddNode("4");
	g.AddNode("5"); 

	g.AddEdge(*g._nodes[0], *g._nodes[1]);
	g.AddEdge(*g._nodes[0], *g._nodes[2]);
	g.AddEdge(*g._nodes[1], *g._nodes[2]);
	g.AddEdge(*g._nodes[2], *g._nodes[3]);
	g.AddEdge(*g._nodes[2], *g._nodes[5]);
	g.AddEdge(*g._nodes[3], *g._nodes[1]);
	g.AddEdge(*g._nodes[3], *g._nodes[4]);
	g.AddEdge(*g._nodes[4], *g._nodes[0]);
	g.AddEdge(*g._nodes[4], *g._nodes[1]);
	g.AddEdge(*g._nodes[4], *g._nodes[5]);*/

	//g.Print();
	
	/*DPrintAll(g);
	g.UnvisitAll();
	cout << endl;
	WPrintAll(g);*/
	//WPrintbyindex(g, 2);

    return 0;
}

