#include <iostream>
#include <vector>
#include <climits>
double median (const std::vector <double> v)
{
double helper = INT_MIN;
if(v.size()== 0)
{
	std::cout << "Sie haben einen leeren Vektor angegeben" << std::endl;
	return 0.;
}

std::vector<double> v1 = v;

for(int j = v.size(); j > 0; j--)
{
for (int i = v.size() -1; i >= 0; i--)
{
	if(v1[i] < v1[i-1])
	{	helper = v1[i];
	v1[i] = v1[i-1];
	v1[i-1] = helper;

	if(v[i] == v[0])
		continue;
}

}
}
for(int g = v1.size()-1; g > 0; g--)
{
	std::cout << v1[g] << std::endl;
}



if(v1.size()%2 == 0)
{
	helper = ((v1[v1.size()/2])+(v1[v1.size()/2 +1]))/2;
		return helper;
}
else
{
	helper = v1[(v.size()+1) / 2];
	return helper;
}
}



int main ()
{
	std::vector<double> v = {{ 6.8, 1.5, 2.9, 0.2, 7.18}};
	std::cout << median(v) << std::endl;
	return 0;
}