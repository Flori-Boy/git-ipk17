#include <iostream>
#include <math.h>

double pi = M_PI;

class Rectangle

{
public:	
double width;
double height;

Rectangle()
{
	width = 0.;
	height = 0.;
}

void setWidth (double a) 
{
	width = a;
}
void setHeight(double b) 
{
   height = b;
}
double getWidth () const 
{
	return width;

}
double getHeight() const 
{
	return height;
}
double getArea () const 
{
	return width*height;
}
double getCircumference() const 
{
	return 2*height + 2*width;
}


};



class Square : public Rectangle
{
public:
Square()
{
	width = 0;
	height = width;
}

};


class Sphere
{
public:
double radius;

Sphere()
{
	radius = 0;
}
void setRadius(double r)
{
	radius = r;
}
double getRadius() const
{
	return radius;
}
double getVolume() const
{
return (4/3)*pi*radius*radius*radius;
}
double getSurfaceArea() const
{
return 4*pi*radius*radius;
}
};

class Circle : public Sphere
{
public:
Circle()
{
	radius = 0;
}

double getArea()
{
return radius*radius*pi;
}

double getCircumference()
{
return radius*2*pi;

}
};

class Cuboid
{
public:
double width;
double height;
double length;

void setHeight(double h)
{
height = h;
}

void setLenght(double l)
{
length = l;
}

void setWidth(double w)
 {
 	width = w;
 }

double getHeight() const
{
	return height;
} 

double getWidth() const
{
	return width;
}
double getLength() const
{
	return length;
}

double getVolume() const
{
	return length*height*width;
}

double getSurfaceArea() const
{
	return 2*(length*width + width*height + height*length);
}
};


class Cube : public Cuboid
{
private:
	double side;

public:
	Cube()
	{
		side = 0.;
	}
	void setSide(double s)
	{
       side = s;
	}
	double getSide()
	{
		return side;
	}
	double getVolume(double side)
	{
		length = side;
		height = side;
		width = side;
		return side*side*side;
	}
	double getSurfaceArea(double side)
	{
		return 2*(side*side + side*side + side*side);
	}


};

int main()
{
Rectangle rect;
rect.setWidth(3.5);
rect.setHeight(4.4);

Square squ;
squ.setWidth(4.5);
squ.setHeight(4.5);
Sphere kugli;
kugli.setRadius(8.8);

Circle kreisli;
kreisli.setRadius(9.9);

Cuboid cuboy;
cuboy.setLenght(2.3);
cuboy.setWidth(4.4);
cuboy.setHeight(4.5);

Cube companion;
companion.setSide(6.6);
std::cout << "Cube Side Length, Volume and Surface Area:" << std::endl;
std::cout << companion.getSide() << std::endl << companion.getVolume(companion.getSide()) << std::endl << companion.getSurfaceArea(companion.getSide()) << std::endl;
std::cout << "Cuboid Length, Height, Width, Volume and Surface Area:" << std::endl;
std::cout << cuboy.getLength() << std::endl << cuboy.getHeight() << std::endl << cuboy.getWidth() << std::endl << cuboy.getVolume() << std::endl << cuboy.getSurfaceArea() << std::endl;
std::cout << "Circle Radius, Volume and Surface Area:" << std::endl;
std::cout << kreisli.getRadius() << std::endl << kreisli.getVolume() << std::endl << kreisli.getSurfaceArea() << std::endl;
std::cout << "Sphere Volume, Radius and Surface Area:" << std::endl;
std::cout << kugli.getVolume() << std::endl << kugli.getRadius() << std::endl << kugli.getSurfaceArea() << std::endl;
std::cout << "Square Area, Width and Heigth:" << std::endl;
std::cout << squ.getArea() << std::endl << squ.getWidth() << std::endl << squ.getHeight() << std::endl;
std::cout << "Rectangle Heigth, Width and Surface Area:" << std::endl;
std::cout << rect.getHeight() << std::endl << rect.getWidth() << std::endl << rect.getArea() << std::endl;
	return 0;
}