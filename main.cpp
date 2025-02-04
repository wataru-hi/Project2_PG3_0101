#include <iostream>

//�N���X�e���v���[�g
template <typename Type, typename Type2>
class TemplateClass {
public:
	// �R���X�g���N�^
	TemplateClass(Type number1, Type2 number2) :
		Number1(number1), Number2(number2) {
	}

	Type Min()
	{
		if (Number1 < Number2)
			return static_cast<Type>(Number1);
		else
			return static_cast<Type>(Number2);
	}

private:
	Type Number1;
	Type2 Number2;
};

int main() {

	TemplateClass<int, float> intFloatTemplate(100, 50.0f);
	TemplateClass<int, double> intDoubleTemplate(80, 20.0);
	TemplateClass<float, int> floatIntTemplate(2.0f, 18);
	TemplateClass<float, double> floatDoubleTemplate(11.0f, 3.5);
	TemplateClass<double, int> doubleIntTemplate(234.0, 123);
	TemplateClass<double, float> doubleFloatTemplate(400.1, 500.2f);

	std::cout << "int(100)�@�� float(50.0f) ���ׂď�����������Ԃ��F" << intFloatTemplate.Min() << std::endl;
	std::cout << "int(80)�@�� double(20.0) ���ׂď�����������Ԃ��F" << intDoubleTemplate.Min() << std::endl;
	std::cout << "float(2.0f)�@�� int(18) ���ׂď�����������Ԃ��F" << floatIntTemplate.Min() << std::endl;
	std::cout << "float(11.0f)�@�� double(3.5) ���ׂď�����������Ԃ��F" << floatDoubleTemplate.Min() << std::endl;
	std::cout << "double(234.0)�@�� int(123) ���ׂď�����������Ԃ��F" << doubleIntTemplate.Min() << std::endl;
	std::cout << "double(400.1)�@�� float(500.2) ���ׂď�����������Ԃ��F" << doubleFloatTemplate.Min() << std::endl;

	return 0;
}