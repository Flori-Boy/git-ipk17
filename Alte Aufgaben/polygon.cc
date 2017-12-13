#include <iostream>
#include <vector>				
#include <cmath>

double pi = M_PI;

struct Point
{
	double x;
	double y;
};




struct Polygon
{
	std::vector<Point> v;
};




Polygon construct(const std::vector<double>& x,
const std::vector<double>& y )
{
    Polygon poly;
     for (unsigned int i = 0; i < x.size(); ++i) {
    Point p;
    p.x = x[i];
    p.y = y[i];
    poly.v.push_back(p);
  }
  return poly;
}

double volume (const Polygon& polygon)
{
	if (polygon.v.size() < 3)
     return 0.0;
   
   int n = polygon.v.size();
   double sum = 0;
   double a = 0;
   for (int i = 0; i < n; ++i) {
    sum += ((polygon.v[i].x * polygon.v[(i + 1)].y) -
            (polygon.v[i].y * polygon.v[(i + 1)].x));
    
  }
  a = (sum / 2);
  return a;
}



int main()
{
    Polygon poly;
	std::vector<double> v1 = {{1, 2, 3,}};
	std::vector<double> v2 = {{1,2, 2}};
     poly = construct (v1, v2);

     for(int i = poly.v.size()-1; i >= 0; i--)
         {
	    std::cout << poly.v[i].y << std::endl<< poly.v[i].x << std::endl;
          }  
double A;
A = volume (poly);
std::cout << A << std::endl;

	return 0;
}