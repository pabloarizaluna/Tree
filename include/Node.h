#ifndef __NODE_H__
#define __NODE_H__

#include <list>
#include <iterator>
#include <algorithm>
#include <queue>

template< class T >
class Node
{
protected:
  T data;
  std::list< Node< T >* > desc;

public:
  Node();
  Node( T& val );
  ~Node() = default;
  T& getData();
  void setData( T &val);
  std::list< Node< T >* > getDesc();
  void clearList();
  void addDesc( T& val );
  void rmDesc( T& val );
  Node< T >* searchDesc( T& val );
  unsigned int heigth();
};

#include "Node.hxx"

#endif
