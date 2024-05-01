#pragma once

# include <stdexcept>

template <typename T>
class Array
{
private:
	T*				_array;
	unsigned int	_size;
public:
	Array( void ): _array(NULL), _size(0){}
	Array( unsigned int n ): _array(new T[n]), _size(n){}
	Array( const Array<T> &a ): _array(new T[a._size]), _size(a._size)
    {
	    for (unsigned int i = 0; i < a._size; i++)
		    this->_array[i] = a._array[i];
    }
    ~Array( void )
    {
	    delete[] (this->_array);
    }

	class	IndexOutOfBounds: public std::exception
	{
		public:
			virtual const char *	what() const throw()
			{
				return ("Error: index out of bounds");
			}
	};

	Array<T>	&operator=(const Array<T> &a)
    {
        if (this != &a)
        {
            delete[] (this->_array);
            this->_size = a._size;
            this->_array = new T[this->_size];
            for (int i = 0; i < a._size; i++)
                this->_array[i] = a._array[i];
        }
	return (*this);
    }   
	T &operator[](const int n)
    {
        if (n < 0 || n >= (int)this->_size)
            throw(Array::IndexOutOfBounds());
        return (this->_array[n]);
    }
	unsigned int    size( void )
    {
	return (this->_size);
    }
};