#include "Graph.h"



Graph::Graph()
{
}

Graph::Graph(int vertexNumber)
{
	for (int i = 0; i < vertexNumber; i++)
	{
		addVert();
	}
}


Graph::~Graph()
{
	for (auto it = this->_verts.begin(); it != this->_verts.end(); ++it)
	{
		if ((*it) != nullptr)
		{
			delete (*it);
		}
	}
}

void Graph::addVert()
{
	this->_verts.push_back(nullptr);
}

void Graph::addEdge(int ID1, int ID2)
{
	if (ID1 >= this->_verts.size() || ID2 >= this->_verts.size())
		exit(SUCH_VERTEX_DOESNT_EXIST);

	// if there are no edges before adding create new vectors

	if (this->_verts[ID1] == nullptr)
	{
		this->_verts[ID1] = new vector<int>;
	}
	if (this->_verts[ID2] == nullptr)
	{
		this->_verts[ID2] = new vector<int>;
	}
	vector<int>* vID1 = this->_verts[ID1];
	vector<int>* vID2 = this->_verts[ID2];
	// if no such edge add one
	if (find(vID1->begin(), vID1->end(), ID2) == vID1->end())
		vID1->push_back(ID2);
	if (find(vID2->begin(), vID2->end(), ID1) == vID2->end())
		vID2->push_back(ID1);
}
