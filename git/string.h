#pragma once
#include<assert.h>
namespace zyf
{
	class string
	{
	public:
		//���캯��
		string(const char* str = "")
			
		{
			_size = strlen(str);
			_capacity = _size;
			_str = new char[_capacity + 1];//��Ч�ַ�+\0
			strcpy(_str, str);
		}
		//�ִ�д���Ŀ�������͸�ֵ
		string(const string& s)
			:_str(nullptr)
			,_size(0)
			,_capacity(0)
		{
			string tmp(s._str);
		/*	swap(_str, tmp._str);
			swap(_size, tmp._size);
			swap(_capacity, tmp._capacity);*/
			this->swap(tmp);
		}
		string& operator=(string s)
		{
			/*swap(_str, s._str);
			swap(_size, s._size);
			swap(_capacity, s._capacity);*/
			swap(s);
			return *this;
		}
		void swap(string &s)
		{
			::swap(_str, s._str);
			::swap(_size, s._size);
			::swap(_capacity, s._capacity);
		}
		const char& operator[](size_t i) const
		{
			//at�ı��������쳣
			assert(i < _size);
			return _str[i];
		}
		char& operator[](size_t i) 
		{
			//at�ı��������쳣
			assert(i < _size);
			return _str[i];
		}
		size_t size() const
			//��const��const���ܵ���
		{
			return _size;
		}
		//������
		typedef char* iterator;
		iterator begin()
		{
			return _str;
		}
		iterator end()
		{
			return _str + _size;
		}
		void reserve(size_t n)
		{
			if (n > _capacity)
			{
				char* tmp = new char[n + 1];
				/*strncpy(tmp, _str, _size + 1);*/
				strcpy(tmp, _str);
				delete[] _str;
				_str = tmp;
				_capacity = n;
			}
		}
		void resize(size_t n, char val = '\0')
		{
			if (n < _size)
			{
				_size = n;
				_str[_size] = '\0';
			}
			else
			{
				if (n > _capacity)
				{
					reserve(n);
				}
				for (size_t i = _size; i < n; ++i)
				{
					_str[i] = val;
				}
				_str[n] = '\0';
				_size = n;
			}
		}
		void push_back(char ch)
		{
			if (_size == _capacity)
			{
				reserve(2 * _capacity);
			}
			_str[_size] = ch;
			_str[_size + 1] = '\0';
			++_size;
		}
		void append(const char* str)
		{
			size_t len = _size + strlen(str);
			if (len > _capacity)
			{
				reserve(len);
			}
			strcpy(_str + _size, str);
			_size = len;
		}
		string &operator+=(const char* str)
		{
			append(str);
			return *this;
		}
		string& operator+=(char ch)
		{
			push_back(ch);
			return *this;
		}
		//pos֮ǰ�����ַ���
		string& insert(size_t pos, const char* str)
		{
			assert(pos <= _size);
			size_t len = strlen(str);
			//���Ǵ�С��ʱ��Ͳ��ÿ���\0��,��strlen�ͺ�
			//��Ϊ\0�����ڿ��ٴ�С��ʱ����Ѿ�������
			if (_size + len> _capacity)
			{
				reserve(_size + len);
			}
			//Ų������
			//���ǵ��ڴ��ص������ǲ�Ҫʹ��memcopy��ʹ��memmove�������ڱ��
			//�������²��ᴦ��vs��memcopy�ײ�ʵ����memove
			char* end = _str + _size;
			while (end >= _str + pos)
			{
				*(end + len) = *end;
				--end;
				//�ճ�λ��len
			}
			strncpy(_str + pos, str, len);//���Ƴ���,strcpy���\0Ҳ����������
			_size += len;
			return *this;
		}
		//pos֮ǰ�����ַ�
		string& insert(size_t pos, char ch)
		{
			assert(pos <= _size);
			if (_size == _capacity)
			{
				reserve(2 * _capacity);
			}
			size_t end = _size + 1;
			while (end > pos)
			{
				_str[end] = _str[end - 1] ;
				--end;
			}		

			_str[pos] = ch;
			_size++;
			return *this;
		}
		//ɾ������

		string& erase(size_t pos, size_t len = npos)
		{

		}
		~string()
		{
			delete[] _str;
			_str = nullptr;
			_size = 0;
			_capacity = 0;
		}
		const char* c_str()
		{
			return _str;
		}
	private:
		char* _str;
		size_t _size;
		size_t _capacity;
		static const size_t npos;
	};
	const size_t string::npos = -1;
	void test_string1()
	{
		string s1("hello world");
		string s2(s1);

		cout << s1.c_str() << endl;
		cout << s2.c_str() << endl;

		string s3("hello");
		s1 = s3;
		cout << s1.c_str() << endl;
		cout << s3.c_str() << endl;

		//C98�»���ѡ�õڶ����������ذ汾
		swap(s1, s3);//�������
		s1.swap(s3);//���֮��Ч�ʸ߶���


		s3 += "zyf6666";
		cout << s3.c_str() << endl;
		string::iterator it = s1.begin();
		while (it != s1.end())
		{
			cout << *it << " ";
			it++;
		}
		for (auto e : s1)
		{
			cout << e << " ";
		}
		cout << endl;
		s3.insert(1, 'x');
		cout << s3.c_str() << endl;
		cout << endl;
		//string s4 = "000";
		s3.insert(1, "0000");
		cout << s3.c_str() << endl;
	}
}