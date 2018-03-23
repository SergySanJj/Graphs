#include "Graph.h"



Graph::Graph()
{
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
}
