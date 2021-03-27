#pragma once
#include <string>
using namespace std;

//�����, ���������� � ���� ������������ ������ ������������
class User
{
public:
	User(string name, string nik, string password);  //�����������
	virtual ~User(); //����������

	string getUserName();  //���������� ��� ������������
	string getUserNik();  //���������� ���
	string getUserPassword(); //���������� ������
		
private:
	string _userName;
	string _userNik;
	string _userPassword;
};

