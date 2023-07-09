#include <iostream>

class Triangle {
		int a = 0;
		int b = 0;
		int c = 0;
		int A = 0;
		int B = 0;
		int C = 0;
protected:
		Triangle(int a, int b, int c, int A, int B, int C) {
			this->a = a;
			this->b = b;
			this->c = c;
			this->A = A;
			this->B = B;
			this->C = C;
	}
public:
		virtual void print_triangle() {

	}
protected:
		void print_triangle_param() {
			std::cout << "Стороны: " << "a=" << a << ' ' << "b=" << b << ' ' << "c=" << c << std::endl;
			std::cout << "Углы: " << "A=" << A << ' ' << "B=" << B << ' ' << "C=" << C << "\n\n";
}
};
class Right : public Triangle {
public:
	Right() : Triangle(10, 20, 22, 20, 70, 90) {
	}
protected:
	void print_triangle() override {
		std::cout << "Прямоугольный треугольник:\n";
		print_triangle_param();
	}
};
class Equilateral : public Triangle {
public:
	Equilateral() : Triangle(30, 30, 30, 60, 60, 60) {
	}
protected:
	void print_triangle() override {
		std::cout << "Равносторонний треугольник:\n";
		print_triangle_param();
	}
};
class Isosceles : public Triangle {
public:
	Isosceles() : Triangle(20, 30, 20, 40, 100, 40) {
	}
protected:
	void print_triangle() override {
		std::cout << "Равнобедренный треугольник:\n";
		print_triangle_param();
	}
};
class Quadrilateral {
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int A = 0;
	int B = 0;
	int C = 0;
	int D = 0;
protected:
	Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D) {
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;
		this->A = A;
		this->B = B;
		this->C = C;
		this->D = D;
	}
public:
	virtual void print_quad() {

	}
protected:
	void print_quad_param() {
		std::cout << "Стороны: " << "a=" << a << ' ' << "b=" << b << ' ' 
			<< "c=" << c << " " << "d=" << d << std::endl;
		std::cout << "Углы: " << "A=" << A << ' ' << "B=" << B << ' ' 
			<< "C=" << C << ' ' << "D=" << D << "\n\n";
	}
};
class Rectangle : public Quadrilateral {
public:
	Rectangle() : Quadrilateral(20, 40, 20, 40, 90, 90, 90, 90) {

	}
protected:
	void print_quad() override {
		std::cout << "Прямоугольник:\n";
		print_quad_param();
	}
};
class Rhomb : public Quadrilateral {
public:
	Rhomb() : Quadrilateral(30, 30, 30, 30, 120, 60, 120, 60) {

	}
protected:
	void print_quad() override {
		std::cout << "Ромб:\n";
		print_quad_param();
	}
};
class Parallelogram : public Quadrilateral {
public:
	Parallelogram() : Quadrilateral(10, 30, 10, 30, 50, 130, 50, 130) {

	}
protected:
	void print_quad() override {
		std::cout << "Параллелограм:\n";
		print_quad_param();
	}
};
class Square : public Quadrilateral {
public:
	Square() : Quadrilateral(20, 20, 20, 20, 90, 90, 90, 90) {

	}
protected:
	void print_quad() override {
		std::cout << "Квадрат:\n";
		print_quad_param();
	}
};
void triangle_show(Triangle* tr) {
	tr->print_triangle();
}
void quad_show(Quadrilateral& quad) {
	quad.print_quad();
}


int main() {
	setlocale(LC_ALL, "rus");
	Right tr_r;
	Equilateral tr_e;
	Isosceles tr_i;
	Rectangle rec;
	Rhomb rh;
	Square sq;
	Parallelogram par;
	Triangle* triangle;
	triangle_show(&tr_r);
	triangle_show(&tr_e);
	triangle_show(&tr_i);
	quad_show(rh);
	quad_show(rec);
	quad_show(sq);
	quad_show(par);

	return 0;
}