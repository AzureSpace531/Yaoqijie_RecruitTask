#include <iostream>
#include <string>
using namespace std;

class Date
{
private:
    int year, month, day;

public:
	//////////////////////////////////////////////////////
    //  请补充完整 Date 类
    
    
    //	无参构造函数
    Date()
    {
        year = 0;
        month = 0;
        day = 0;

    }

	//	带参构造函数
    Date(int a,int b, int c)
    {
        year = a;
        month = b;
        day = c;
    }

	// 	其他公有函数
	


    //////////////////////////////////////////////////////
    
	// 请在 Person 类的打印信息函数中使用 Date 的 show() 方法
    void show()
    {
      cout << year <<"年" << month << "月" << day << "日" << endl;
    };    
};

class Person
{   
private:
   int id;						// ID号
   Date birthDate; 				// 出生年月日
   static int numberOfObjects;  // 静态变量，表示Person类的对象数量

public:
	//////////////////////////////////////////////////////
    //  请补充完整 Person 类
    //
    
    //	无参构造函数
    Person()
    {
        id = 0;
        birthDate = Date();
        numberOfObjects++;
    }

	//	带参构造函数
	Person(int i, int y, int m, int d)
    {
        id = i;
        birthDate = Date(y,m,d);
        numberOfObjects++;
    }

	//	拷贝构造函数
    Person(const Person& obj)
    {
        numberOfObjects++;
    }

	// 	析构函数
    ~Person()
    {
        numberOfObjects--;
    }

	// 	其他公有函数
	void  show() 
    {
        cout << "ID:"<< id <<"生日：" <<ends ;
        birthDate.show();
    }
    
	// 	静态函数 getNumberOfObjects() 返回静态变量：Person对象的数量
     static int getNumberOfObjects()
    {
        return  numberOfObjects;
    }

    //////////////////////////////////////////////////////
};
int Person::numberOfObjects = 0;