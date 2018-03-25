#include "Graph.h"



Graph::Graph()
{
}

Graph::Graph(size_t vertexNumber)
{
	for (size_t i = 0; i < vertexNumber; i++)
	{
		addVert(i);
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

void Graph::addVert(size_t ID)
{
	Vert* tmpVert = new Vert(ID);
	this->_verts.push_back(tmpVert);
}

void Graph::addEdge(size_t ID1, size_t ID2)
{
	if (ID1 >= this->_verts.size() || ID2 >= this->_verts.size())
		exit(SUCH_VERTEX_DOESNT_EXIST);

	Vert* vID1 = this->_verts[ID1];
	Vert* vID2 = this->_verts[ID2];
	// if no such edge add one
	if (find(vID1->_edges.begin(), vID1->_edges.end(), vID2) == vID1->_edges.end())
	{
		vID1->_edges.push_back(vID2);
		vID2->_edges.push_back(vID1);
	}
	this->_edges++;
}

void Graph::deleteEdge(Vert * v1, Vert * v2)
{
	auto iV1 = find(this->_verts.begin(), this->_verts.end(), v1);
	auto iV2 = find(this->_verts.begin(), this->_verts.end(), v2);


	this->_edges--;
}

void Graph::makeBiconnected()
{

}

void Graph::smooth()
{
	for (auto vert = this->_verts.begin(); vert != this->_verts.end(); ++vert)
	{
		if ((*vert) != nullptr)
		{

		}
	}
}

size_t Graph::size()
{
	return this->_verts.size();
}

bool Graph::eulersVerification()
{
	int nodes = countNodes();
	int edges = countEdges();
	return edges <= 3 * nodes - 6;
}

size_t Graph::countNodes()
{
	return this->_verts.size();
}

size_t Graph::countEdges()
{
	return this->_edges;
}

Vert::~Vert()
{
	for (auto edge = this->_edges.begin(); edge != this->_edges.end(); ++edge)
	{
		delete (*edge);
	}
}
