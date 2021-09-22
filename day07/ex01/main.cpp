#include "iter.hpp"

void myFunc(int a)
{
    int res = a * a;
    std::cout << "Res :" << res << std::endl;
    // return (res);
}

int main( void )
{
    int arr[] = {0, 1, 2, 3, 4, 5, 6};
    iter(arr, 7, myFunc);
}

// class Awesome
// {
//     public:
//     Awesome( void ) : _n( 42 ) { return; }
//     int get( void ) const { return this->_n; }
//     private:
//     int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }



// int main() 
// {
//     int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
//     Awesome tab2[5];

//     iter(tab, 5, print);
//     iter(tab2, 5, print);

//     return 0;
// }