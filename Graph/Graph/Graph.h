#pragma once
#ifndef  Graph_H_
#define Graph_H_

#include <vector>

using namespace std;

class Vert
{
public:
	int _ID;
	vector<int> _edges;
private:

};

class Graph
{
public:
	Graph();
	~Graph();

	void addVert();
	void addEdge(int ID1, int ID2);
private:
	vector< vector<int>* > _verts;
};


#endif // ! Graph_H_