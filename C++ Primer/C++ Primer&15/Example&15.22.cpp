class Figure
{
public:
	Figure(double, double);
protected:
	double xsize, ysize;
};
class Figure_2D :public Figure
{
public:
	Figure_2D(double, double);
	virtual double area() = 0;
	virtual double pcrimeter() = 0;
};
class Figure_3D :public Figure
{
public:
	Figure_3D(double, double, double);
	virtual double cubagef() = 0;
protected:
	double zsize;
};
class Rectangle :public Figure_2D
{
public:
	Rectangle(double, double);
	virtual double area();
	virtual double perimeter();
};
class Circle :public Figure_2D
{
public:
	Circle(double, double);
	virtual double area();
	virtual double perimeter();
};
class Sphere :public Figure_3D
{
public:
	Sphere(double, double, double);
	virtual double cubage();
};
class Cone:public Figure_3D
{
public:
	Cone(double, double, double);
	virtual double cubage();
};