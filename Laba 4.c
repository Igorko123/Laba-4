#include <conio.h>
#include <iostream>

using namespace std;

class Geometric
{
public:
	virtual double Square()
	{
		return 0;
	}
	virtual int Get()
	{
		return 0;
	}
};
	class D2 : public Geometric
	{
	public:
		virtual double Square() 
		{
			return 0;
		}
		virtual int Get()
		{
			return 0;
		}
	};

		class  Circle : public D2
		{
		public:
			int Get()
			{
				cout << "Введiть радiус: ";
				cin >> r;
				return 0;
			}
			double Square()
			{
				return 3.14*r*r;
			}
		private:
			int r;
		};

		class Triangle : public D2
		{
		public:
			int Get()
			{
				cout << "Введiть сторону: ";
				cin >> a;
				cout << "Введiть висоту: ";
				cin >> h;
				return 0;
			}
			double Square()
			{
				return 0.5*a*h;
			}
		private:
			int a, h;
		};

	class D3 : public Geometric
	{
	public:
		virtual int Get()
		{
			return 0;
		}
		virtual double Square()
		{
			return 0;
		}
		virtual double Extend()
		{
			return 0;
		}
	};

		class Cylinder : public D3
		{
		public:
			int Get()
			{
				cout << "Введiть радiус: ";
				cin >> r;
				cout << "Введiть висоту: ";
				cin >> h;
				return 0;
			}
			double Square()
			{
				return 3.14*r*r;
			}
			double Extend()
			{
				return 3.14*r*r*h;
			}
		private:
			int r, h;
		};

		class Sphere : public D3
		{
		public:
			int Get()
			{
				cout << "Введiть радiус: ";
				cin >> r;
				return 0;
			}
			double Square()
			{
				return 4*3.14*r*r;
			}

			double Extend()
			{
				return 4 / 3 * 3.14*r*r*r;
			}
		private:
			int r;
		};

		class Cone : public D3
		{
		public:
			int Get()
			{
				cout << "Введiть радiус: ";
				cin >> r;
				cout << "Введiть висоту: ";
				cin >> h;
				return 0;
			}
			double Square()
			{
				return 3.14*r*r;
			}
			double Extend()
			{
				return 3.14/3*r*r*h;
			}
		private:
			int r, h;
		};

int main()
{
	setlocale (LC_ALL,"Ukrainian");
	cout << "Виберiть фiгуру:" << endl;
	cout << "1. Коло" << endl;
	cout << "2. Трикутник" << endl;
	cout << "3. Цилiндр" << endl;
	cout << "4. Сфера" << endl;
	cout << "5. Конус" << endl;
	int choise;
	cin >> choise;
	switch (choise){
	case 1:
		{
		    D2 *ptr1 = new Circle;
		    ptr1->Get();
		    cout << (ptr1->Square()) << endl;
		    break;
		}
	
	case 2:
		{
		    D2 *ptr2 = new Triangle;
		    ptr2->Get();
		    cout << (ptr2->Square())<<endl;
		    break;
		}
	
    case 3:
    {
		D3 *ptr3 = new Cylinder;
		ptr3->Get();
		cout << (ptr3->Square()) << endl;
		cout << (ptr3->Extend())<<endl;
	    break;
	}
	    
	case 4:
		{
		D3 *ptr4 = new Sphere;
		ptr4->Get();
		cout << (ptr4->Square()) << endl;
		cout << (ptr4->Extend()) << endl;
		break;
	}
	
	case 5:
		{
		D3 *ptr5 = new Cone;
		ptr5->Get();
		cout << (ptr5->Square()) << endl;
		cout << (ptr5->Extend()) << endl;
		break;
}
	default:
		cout << "Неправильно набраний номер" <<endl;
    return 0;
   }
}
