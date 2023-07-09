#include <iostream>
#include <string>

class figure {
protected:
	std::string name;
	int side;
public:
	figure(): figure ("Фигура", 0)
	{
		std::cout << "Количество сторон:\n";
		string_data(name, side);
	}
	std::string get_data() {
		return line;
	}
protected:
	figure(std::string names, int sides) {
		name = names;
		side = sides;
	}
private:
	std::string line;
	std::string string_data(std::string name, int side) {
		line = name + ": " + std::to_string(side) + '\n';
		return line;
	}
};
class triangle : public figure {
public:
	triangle() : figure("Треугольник", 3) {
		string_data(name, side);
	}
	std::string get_data() {
		return line;
	}
private:
	std::string line;
	void string_data(std::string name, int side) {
		line = name + ": " + std::to_string(side) + '\n';
	}
};
class rectangle : public figure {
public:
	rectangle() : figure("Прямоугольник", 4) {
		string_data(name, side);
	}
	std::string get_data() {
		return line;
	}
private:
	std::string line;
	void string_data(std::string name, int side) {
		line = name + ": " + std::to_string(side) + '\n';
	}
};

int main() {
	setlocale(LC_ALL, "rus");
	figure Figure;
	triangle Triangle;
	rectangle Rectangle;
	std::cout << Figure.get_data();
	std::cout << Triangle.get_data();
	std::cout << Rectangle.get_data();

	return 0;
}