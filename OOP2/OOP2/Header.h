#pragma once
#include <iostream>
#include <iomanip>
#include <Windows.h>

char menu();

class stack {
private:
	int x;
	struct node {
		int a;
		node *prev;
	} *top;
public:
	stack();
	~stack();
	int pop();
	void push(); 
	int output();
	int clear();
	int get_x();
};