#include "Node.h"

Node< T >::Node()
{
  this->heigth = 0;
}

template< class T >
Node< T >::Node( T& val )
{
  this->data = val;
  this->heigth = 0;
}

template< class T >
T& Node< T >::getData()
{
  return this->data;
}

template< class T >
void Node< T >::setData( T& val )
{
  this->data = val;
}

template< class T >
std::list< Node< T >* > Node< T >::getDesc()
{
  return this->desc;
}

template< class T >
void Node< T >::clearList()
{
  this->desc = std::list()
}

template< class T >
void Node< T >::addDesc( T& val )
{
  Node< T >* aux = new Node( val );
  ( this->desc ).push_back( aux );
}

template< class T >
void Node< T >::rmDesc( T& val )
{
  Node< T >* aux = this->searchDesc( val );
  if( aux != nullptr )
  {
    ( this->desc ).remove( aux );
    delete aux;
  }
}

template< class T >
Node< T >* Node< T >::searchDesc( T& val )
{
  if( !( this->desc ).empty() )
  {
    for( std::list< Node< T > >::iterator it = ( this->desc ).begin();
         it != ( this->desc ).end();
         ++it )
    {
      if( ( *it )->data == val )
        return *it;
    }
  }
  return nullptr;
}

template< class T >
unsigned int Node< T >::heigth()
{

}
