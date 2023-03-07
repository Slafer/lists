#include <iostream>
#include <fstream>
#include "list1.h"

using namespace std;

void form_list(ifstream& f, list1& l)
{
	int n;
	while (!f.eof())
	{
		f >> n;
		add(l, n);
	}
}

void show_list(list1 l)
{
	l1_elem* curr = l.first;
	while (curr)
	{
		cout << curr->a << ' ';
		curr = curr->next;
	}
	cout << endl;
}
void reverse(list1& l)
{
	l1_elem* curr = l.first;
	l1_elem* pred = nullptr;
	while (curr)
	{
		l1_elem* next = curr->next;
		curr->next = pred;
		pred = curr;
		curr = next;
	}
	l.first = pred;
}


bool check_cycle(list1 l)
{
	l1_elem* curr = l.first;
	l1_elem* a = curr;
	l1_elem* b = curr->next;

	while (a && (b != a) && b)
	{
		a = a->next;
		if (b->next) b = b->next->next;
		else
		{
			return false;
		}
	}
	if (a && b) return true;
	else return false;
}

void cycle(list1& l)
{
	l1_elem* curr = l.first;
	while (curr->next)
	{
		curr = curr->next;
	}
	curr->next = l.first;
}


int main()
{
	setlocale(LC_ALL, "RUS");
	ifstream in;
	in.open("in.txt");
	list1 list;
	form_list(in, list);
	show_list(list);
	reverse(list);
	show_list(list);
	if (check_cycle(list)) cout << "циклический";
	else cout << "нециклический";
	cycle(list);
	if (check_cycle(list)) cout << "циклический";
	else cout << "нециклический";
}