#include <iostream>
#include <vector>
#include <climits>

int BigVector (std::vector<int> vector)
{
	int compare = INT_MIN;

	for (int i = vector.size()-1; i >= 0; i--)
	{
		if (vector[i] > compare)
		{
			compare = vector[i];
		}
	}
	return compare;
}

int SmallVector (std::vector<int> vector)
{
int compare = INT_MAX;

for (int i = vector.size()-1; i>=0; i--)
{
	if (vector[i] < compare)
	{
		compare =vector[i];
	}
}
return compare;
}

int main()
{
std::vector<int> v = {{1,4,5,8,19,2}};
std::cout << "Der kleinste Wert im Vektor lautet" << SmallVector(v) << std::endl;
std::cout << "Der größte Wert im Vektor lautet" << BigVector(v) << std::endl;
return 0;
}