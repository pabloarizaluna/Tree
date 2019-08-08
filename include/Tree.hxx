#include "Tree.hxx"

template< class T >
Tree< T >::Tree()
{
  this->root = nullptr;
}

template< class T >
Tree< T >::Tree( T& val )
{
  this->root = new Node( val );
}

template< class T >
bool Tree< T >::isEmpty()
{
  return( this->root == nullptr );
}

template< class T >
Node< T >* Tree< T >::getRoot()
{
  return this->root;
}

template< class T >
void Tree< T >::setRoot( Node< T >* nroot )
{
  this->root = nroot;
}

template< class T >
bool Tree< T >::search( T& n )
{
  std::list< Node< T >* > lista;
  lista.push_back( this->root );
  while( !lista.empty() )
  {
    Node< T >* aux = lista.front();
    if( aux->getData() == n )
      return true;
    lista.insert( lista.end(), ( aux->getDesc() ).begin(), ( aux->getDesc() ).end() );
    lista.pop_front();
  }
  return false;
}

template< class T >
bool Tree< T >::insert( T& father, T& n )
{
  if( this->search( father ) )
  {
    std::list< Node< T >* > lista;
    lista.push_back( this->root );
    while( !lista.empty() )
    {
      Node< T >* aux = lista.front();
      if( aux->getData() == father )
      {
        aux->addDesc( n );
        return true;
      }
      lista.insert( lista.end(), ( aux->getDesc() ).begin(), ( aux->getDesc() ).end() );
      lista.pop_front();
    }
  }
  return false;
}

template< class T >
bool Tree< T >::remove( T& n )
{
  if( this->search( n ) )
  {
    std::list< Node< T >* > lista;
    lista.push_back( this->root );
    while( !lista.empty() )
    {
      Node< T >* aux = lista.front();
      if( aux->getData() == n )
      {
        delete aux;
        return true;
      }
      lista.insert( lista.end(), ( aux->getDesc() ).begin(), ( aux->getDesc() ).end() );
      lista.pop_front();
    }
    return false;
  }
}

template< class T >
unsigned int Tree< T >::heigth( Node< T >* start )
{
  
}
