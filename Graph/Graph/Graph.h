#pragma once
#ifndef  Graph_H_
#define Graph_H_

#include <vector>

#define SUCH_VERTEX_DOESNT_EXIST 1

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
	Graph(int vertexNumber);
	~Graph();

	void addVert();
	void addEdge(int ID1, int ID2);
private:
	vector< vector<int>* > _verts;
};


#endif // ! Graph_H_