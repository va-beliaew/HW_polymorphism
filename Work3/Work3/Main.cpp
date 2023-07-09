#include <iostream>

class Figure {
public:
	Figure() {}
	virtual void show_figure() {
		std::cout << "Фигура:\n" << "Правильная\n" << "Количество сторон: 0\n\n";
	}
protected:
	std::string Good;
	Figure(int a, int b, int c, int A, int B, int C) {
		if (a == b && a == c && b==c && A == B && B == C && A == C) {
			Good = "Правильная";
		}
		else {
			Good = "Неправильная";
		}

	}
	Figure(int a, int b, int c, int d, int A, int B, int C, int D) {
		if (a == b && a== c && a == d && b == c && b == d && c == d && A == B &&
			A == C && A == D && B == C && B == D && C == D) {
			Good = "Правильная";
		}
		else {
			Good = "Неправильная";
		}
	}
	std::string good() {
		return Good;
	}
};

class Tria: public Figure {
	int a = 0;
	int b = 0;
	int c = 0;
	int A = 0;
	int B = 0;
	int C = 0;
	const int n = 3;
protected:
	Tria(int a, int b, int c, int A, int B, int C) : Figure (a, b, c, A, B, C) {
		this->a = a;
		this->b = b;
		this->c = c;
		this->A = A;
		this->B = B;
		this->C = C;
	}
	void tria_param() {
		std::cout << good() << std::endl;
		std::cout << "Количество сторон: " << n << std::endl;
		std::cout << "Стороны: a=" << a << ' ' << "b=" << b << ' ' << "c=" << c << std::endl;
		std::cout << "Углы: A=" << A << ' ' << "B=" << B << ' ' << "C=" << C << "\n\n";
	}
};
class Right : public Tria {
public:
	Right() : Tria(10, 20, 22, 30, 60, 90) {

	}
protected:
	void show_figure() override {
		std::cout << "Прямоугольный треугольник:\n";
		tria_param();
	}
};
class Isosceles : public Tria {
public:
	Isosceles() : Tria(20, 30, 20, 45, 90, 45) {

	}
protected:
	void show_figure() override {
		std::cout << "Равнобедренный треугольник:\n";
		tria_param();
	}
};
class Equilateral : public Tria {
public:
	Equilateral() : Tria(30, 30, 30, 60, 60, 60) {

	}
protected:
	void show_figure() override {
		std::cout << "Равносторонний треугольник:\n";
		tria_param();
	}
};
class Quad : public Figure {
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int A = 0;
	int B = 0;
	int C = 0;
	int D = 0;
	const int n = 4;
protected:
	Quad(int a, int b, int c, int d, int A, int B, int C, int D) : Figure (a, b, c, d, A, B, C, D) {
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;
		this->A = A;
		this->B = B;
		this->C = C;
		this->D = D;
	}
	void quad_param() {
		std::cout << good() << std::endl;
		std::cout << "Количество сторон: " << n << std::endl;
		std::cout << "Стороны: a=" << a << ' ' << "b=" << b << ' ' << "c=" 
									<< c << ' ' << "d=" <<d << std::endl;
		std::cout << "Углы: A=" << A << ' ' << "B=" << B << ' ' << "C=" << C 
									<< ' ' << "D=" << D << "\n\n";
	}
};
class Quadrilateral : public Quad {
public:
	Quadrilateral() : Quad(20, 25, 30, 20, 65, 125, 70, 100) {

	}
protected:
	void show_figure() override {
		std::cout << "Четырехугольник:\n";
		quad_param();
	}
};
class Rhomb : public Quad {
public:
	Rhomb() : Quad(30, 30, 30, 30, 60, 120, 60, 120) {

	}
protected:
	void show_figure() override {
		std::cout << "Ромб:\n";
		quad_param();
	}
};
class Square : public Quad {
public:
	Square() : Quad(25, 25, 25, 25, 90, 90, 90, 90) {

	}
protected:
	void show_figure() override {
		std::cout << "Квадрат:\n";
		quad_param();
	}
};
class Rectangle : public Quad {
public:
	Rectangle() : Quad(20, 40, 20, 40, 90, 90, 90, 90) {

	}
protected:
	void show_figure() override {
		std::cout << "Прямоугольник:\n";
		quad_param();
	}
};
class Parallelogram : public Quad {
public:
	Parallelogram() : Quad(10, 30, 10, 30, 60, 120, 60, 120) {

	}
protected:
	void show_figure() override {
		std::cout << "Параллелограм:\n";
		quad_param();
	}
};
void print(Figure* f) {
	f->show_figure();
}

int main() {
	setlocale(LC_ALL, "rus");
	Figure F;
	Equilateral tr_e;
	Isosceles tr_i;
	Right tr_r;
	Quadrilateral qua;
	Parallelogram par;
	Rectangle rec;
	Square sq;
	Rhomb rh;
	Figure* f;
	print(&F);
	print(&tr_e);
	print(&tr_i);
	print(&tr_r);
	print(&qua);
	print(&par);
	print(&rec);
	print(&sq);
	print(&rh);

	return 0;
}