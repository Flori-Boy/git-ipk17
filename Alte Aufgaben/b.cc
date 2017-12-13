#include <iostream>

#include <vector>
double mean(const std::vector<double>& v)
{
double mittel;

for (int i = 0; i <= sizeof(v); i++)
{
	mittel = mittel + v[i];

}
mittel = mittel/sizeof(v);
return mittel;
}

int main()
{
	std::vector<double> v = {{1.5, 4.2, 5.2, 2.1}};
	
	double median =mean(v);
	std::cout << median << std::endl;
	return 0;
}