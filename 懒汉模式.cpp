#include <iostream>
using namespace std;

class Single
{
	static Single* obj;
	Single(void)
	{
		cout << "我是构造函数" << endl;
	}
	Single(const Single& that)
	{
		cout << "我是拷贝构造" << endl;
	}
public:
	static Single& get_obj(void)
	{
		if(NULL == obj)
		{
			obj = new Single;
		}
		return *obj;
	}
	void show(void)
	{
		cout << &obj << endl;
	}
};

Single* Single::obj;

int main(int argc,const char* argv[])
{
	Single& s = Single::get_obj();
	s.show();
}
