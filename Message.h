#pragma once
#include <iostream>
#include<string>
#include "User"
using namespace std;


class Message
{
public:
    Message( string fromLetter,string toLetter,string message); // ����������� ��������� ������ �� � ���� �� User. � ���� ���������
       
    string getSendFromUser();
    string getSendToUser();
    string getMesage();
    
    ~Message() {};
   /* void  readMessage(const User& user, vector<Messadges>& allmess)
    {
        size_t size = allmess.size();
        for (size_t c = 0; c < size; c++)
        {
            if (allmess[c].getSendToUser() == user.getUserName() || allmess[c].getSendToUser() == "all")
            {
                cout << "�� ����: " << allmess[c].getSendFromUser() << std::endl;
                cout << "���������: " << allmess[c].getMessage() << std::endl;
            }
            else
            {
                std::cout << "��� ��� ��� ����� ���������!" << std::endl;
            }
        }
    }*/
private:
	string _message;
	string _fromLetter;
	string _toLetter;
   // vector <Message> ollMessage;

};


