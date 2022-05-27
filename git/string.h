#pragma once
#include<assert.h>
namespace zyf
{
	class string
	{
	public:
		//构造函数
		string(const char* str = "")
			
		{
			_size = strlen(str);
			_capacity = _size;
			_str = new char[_capacity + 1];//有效字符+\0
			strcpy(_str, str);
		}
		//现代写法的拷贝构造和赋值
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
			//at的遍历是抛异常
			assert(i < _size);
			return _str[i];
		}
		char& operator[](size_t i) 
		{
			//at的遍历是抛异常
			assert(i < _size);
			return _str[i];
		}
		size_t size() const
			//非const和const都能掉用
		{
			return _size;
		}
		//迭代器
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
		//pos之前插入字符串
		string& insert(size_t pos, const char* str)
		{
			assert(pos <= _size);
			size_t len = strlen(str);
			//考虑大小的时候就不用考虑\0了,用strlen就好
			//因为\0我们在开辟大小的时候就已经处理了
			if (_size + len> _capacity)
			{
				reserve(_size + len);
			}
			//挪动数据
			//考虑到内存重叠，我们不要使用memcopy，使用memmove，可能在别的
			//编译器下不会处理，vs下memcopy底层实现是memove
			char* end = _str + _size;
			while (end >= _str + pos)
			{
				*(end + len) = *end;
				--end;
				//空出位置len
			}
			strncpy(_str + pos, str, len);//控制长度,strcpy会把\0也拷贝过来的
			_size += len;
			return *this;
		}
		//pos之前插入字符
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
		//删除数据

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

		//C98下还是选用第二种我们重载版本
		swap(s1, s3);//三次深拷贝
		s1.swap(s3);//相比之下效率高多了


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