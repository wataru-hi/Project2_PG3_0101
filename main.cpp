#include <cstdio>
using namespace std;

class Animal {
public:
	virtual void sound() const = 0;
};


class Dog : public Animal {
public:
	void sound() const override {
		printf("�C�k�����F����\n");
	}
};


class Cat : public Animal {
public:
	void sound() const override {
		printf("�l�R����:�j���[\n");
	}
};

int main() {
	Animal* animal1 = new Dog();
	Animal* animal2 = new Cat();

	animal1->sound();
	animal2->sound();

	delete animal1;
	delete animal2;

	return 0;
}