#pragma once
#ifndef  Graph_H_
#define Graph_H_

#include <vector>

#define SUCH_VERTEX_DOESNT_EXIST 1

using namespace std;

class Vert
{
public:
	Vert(size_t ID) : _ID(ID) { }
	~Vert();
	char _color = 'n';
	size_t _ID;
	vector<Vert*> _edges;
private:

};

class Graph
{
public:
	Graph();
	Graph(size_t vertexNumber);
	~Graph();

	void addVert(size_t ID);
	void addEdge(size_t ID1, size_t ID2);
	void deleteEdge(Vert* v1, Vert* v2);
	void makeBiconnected();
	void smooth();
	size_t size();
private:
	vector<Vert*> _verts;
	size_t _edges = 0;

	bool eulersVerification();
	size_t countNodes();
	size_t countEdges();
};


#endif // ! Graph_H_

//the algorithm of Demoucron, Malgrange and Pertuiset 