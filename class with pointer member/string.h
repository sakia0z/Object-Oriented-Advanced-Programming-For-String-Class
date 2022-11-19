#ifndef _MYSTRING_
#define _MYSTRING_
#include<cstring>
#include<string.h>
class String;

class String
{
public:
	String(const char* cstr);
	String(const String& str);   //�������죺���ܵ����Լ����ֶ���
	String& operator = (const String& str); //�������ƣ����ܵ����Լ����ֶ���
	~String();
	char* get_c_str() const { return m_data; }
private:
	char* m_data;
};

inline String::String(const char* cstr = 0)
{
	if (cstr) {
		m_data = new char[strlen(cstr) + 1];
		strcpy(m_data, cstr);
	}
	else {
		m_data = new char[1];
		*m_data = '\0';
	}
}
//�������캯��
inline String::String(const String& str)
{
	m_data = new char[strlen(str.m_data) + 1];
	strcpy(m_data, str.m_data);
}
//������ֵ����
inline String& String::operator=(const String& str)
{
	if (this == &str)
		return *this;
	delete[] m_data;
	m_data = new char[strlen(str.m_data) + 1];
	strcpy(m_data, str.m_data);
	return *this;
	// TODO: �ڴ˴����� return ���
}

inline String::~String()
{
	delete[] m_data;
}
#endif // !_MYSTRING_


