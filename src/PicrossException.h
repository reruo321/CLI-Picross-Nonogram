#pragma once
#include <iostream>
using namespace std;

class Exception {
public:
	virtual void ShowException() const = 0;
};

class Over30Exception: Exception {
	int index;
public:
	Over30Exception(int index): index(index){}
	void ShowException() const {
		cout << index << "��° ���� ���� �ʹ� Ů�ϴ�. ���μ��� 30ĭ ������ ������ �־��ֽʽÿ�." << endl;
	}
};

class Less10Exception : Exception {
	int index;
public:
	Less10Exception(int index): index(index){}
	void ShowException() const {
		cout << index << "��° ���� ���� �ʹ� �۽��ϴ�. ���μ��� 10ĭ �̻��� ������ �־��ֽʽÿ�." << endl;
	}
};

class SheetValueException : Exception {
	int index;
public:
	SheetValueException(int index): index(index){}
	void ShowException() const {
		cout << index << "��° �����Ʈ ���� �߸��Ǿ����ϴ�. 0�� 1 �̿��� ���� �����Ͻʽÿ�." << endl;
	}
};

class SheetShapeException : Exception {
	int index;
public:
	SheetShapeException(int index) : index(index) {}
	void ShowException() const {
		cout << index << "��° �����Ʈ�� ���°� �ùٸ��� �ʽ��ϴ�. ���簢�� ���·� ���߽ʽÿ�." << endl;
	}
};

class SheetException {
	int index;
public:
	SheetException(int index) : index(index) {}
	void ShowException() const {
		cout << index << "��° �����Ʈ�� �������� �ʽ��ϴ�. �����Ʈ�� ������ Ȯ���Ͻʽÿ�." << endl;
	}
};

class SheetNameException {
	int index;
public:
	SheetNameException(int index): index(index){}
	void ShowException() const {
		cout << index << "��° �����Ʈ�� �̸��� �������� �ʽ��ϴ�. �̸��� ������ Ȯ���Ͻʽÿ�." << endl;
	}
};