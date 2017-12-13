#include <iostream>
#include "io.hh"
#include "io.cc"
#include "statistics.hh"
void double_vector_printer(std::vector<double> v)
{
    if ( v.size() == 0) 
    {
        std::cout << "Der Vektor ist leer!";
    }
    for (unsigned int i = 0; i <= (v.size()-1); i++)
    {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
}

int main(int argc, char const *argv[])
{
	double_vector_printer(uniform_distribution(random_seed(),10, 4, 9));
	return 0;
}