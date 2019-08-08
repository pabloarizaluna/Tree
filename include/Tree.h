#ifndef __TREE_H__
#define __TREE_H__

#include "Node.h"
#include <algorithm>

template< class T >
class Tree
{
protected:
  Node< T >* root;

public:
  Tree();
  Tree( T& val );
  ~Tree() = default;
  bool isEmpty();
  Node< T >* getRoot();
  void setRoot( Node< T >* nroot );
  bool insert( T& father, T& n );
  bool remove( T& n );
  bool search( T& n );
  unsigned int heigth( Node< T >* start );
  unsigned int size( Node< T >* start );
  void inOrden( Node< T >* start );
  void preOrden( Node< T >* start);
  void posOrden( Node< T >* start);
  void levelOrden( Node< T >* start );
};

#include "Tree.hxx"

#endif
