//oop,gnu c++ er maddome run kore ide codeblocks

/*
#include<iostream>
//#include<cstdio>
//#include<cstring>
//#include<cmath>
using namespace std;
int  main()
{
    /*
   string a,b;
   a = "tanim ahmed";
   b = "tanim ahmed bijoy";
   cout << a + b <<endl;//addition
   cout<<"tanim"<<" "<<24<<" "<<1996<<endl;
   string c = "KUET";
   string d = c+' ';
   cout<<d<<"CSE"<<endl;
//   cout<
//   */
////   cout<<1<<" "<<"Khulna University"<<endl;
////   int a = 5;
////   int b;
//    for(int i = 1; i<5;i++)
//    {
//
//        int  b = i+1;
//        cout << b<<endl;
//    }
////    cout << b << endl;
//    int i = 5;
//    int a(6);
//    cout << i << " "<<a <<endl;
/*
        bool i= 10;
        cout << i << endl;



    return 0;
}
*/
/***************C*********************
#include<iostream>
using namespace std;
struct abc
{
    int a;
    int b;
};

int main()
{
    struct abc ob;
    ob.a = 45;
    cout<<ob.a<<endl;
    return 0;
}
***********/
/*
#include<iostream>
using namespace std;
struct abc{
    int a;
};
int main()
{
    abc ob;
    ob.a = 45;
    cout<<ob.a<<endl;
    return 0;
}
*/
/*

#include<iostream>
using namespace std;
class rectangle
{
public:
    int height;
    int width;
    int area(){
        return height*width;
    }

};
int main()
{
    rectangle obj;
    obj.height = 34;
    obj.width = 45;
    cout<<"Area:"<<" ";
    cout << obj.area()<<endl;

}

variable and member function

*/
/*

#include<iostream>
using namespace std;

class Circle
{
    public:
    float r;
    float area()
    {
        return 3.14*r*r;
    }
};

int main()
{
    Circle obj;
    obj.r = 4;
    cout << obj.area()<<endl;
    obj.r = 5;
    cout << obj.area()<<endl;
    return 0;
}


*/
//Protype inside and declaration outside
/*
#include<iostream>
using namespace std;
class rectangle
{
public:
    int height;
    int width;
    int area();


};
int main()
{
    rectangle obj;
    obj.height = 34;
    obj.width = 45;
    cout<<"Area:"<<" ";
    cout << obj.area()<<endl;

}
int rectangle::area(){
return height*width;
}

*/
/*inline function*/
/*
#include<iostream>
using namespace std;
class rectangle{
    public: int h;
            int w;
            int area();

};
inline int rectangle::area()
{
    return h*w;
}
int main()
{
    rectangle obj;
    obj.h = 5;
    obj.w = 6;
    cout<<obj.area()<<endl;
    return 0;
}
*/
/* ------------------------private public protected-------------------------------- */
/*
#include<iostream>
using namespace std;
class rectangle{
    private:

        int height;
        int width;
      public:
          void set(int h,int w);
        int area();

//    private:
//        int a;
//    public:
//        int b;

};
inline int rectangle::area()
{
    return height*width;
}

void rectangle::set(int h , int w)
{
    height = h;
    width = w;
}
int main()
{
    rectangle obj;
    obj.set(5,6);
    cout<<obj.area()<<endl;
    return 0;
}

*/
/*
#include<iostream>
using namespace std;
class rectangle{
    private: int height;
            int widht;
    public:  void set(int h,int w);
             int area();

};

void rectangle::set(int  h,int w)
{
    height = h;
    widht = w;
}
inline int rectangle::area(){
    return height*widht;
}

int main()
{
    rectangle obj;
    obj.set(5,6);
    cout << obj.area()<<endl;
}
*/
/*-------------------------variable scope------------------------*/
/*
#include<iostream>
using namespace std;
int global=10;
int add(int a,int b)
    {
        return a+b+global;
    }
int main()
{
//   int a = 5;
//   cout << a << endl;
//   {
//       int b = 6;
//       cout << b <<endl;
//   }
//   cout << b<<endl;//error
    int a,b;
    a = 6;
    b = 6;
    cout << add(a,b) << endl;
    {
            int k=5;
            cout << k <<endl;
    }
    float k = 5.5;
    cout << k <<endl;
    for(int i = 1;i<=5;i++)
    {
        cout << i <<" ";
    }
//    cout<<i<<endl;//error


    return 0;
}
*/
/*----------------------------Constructor and destructor------------------------------------*/
/*
#include<iostream>
using namespace std;
class rectangle{
    private:

        int height;
        int width;
      public:
          void set(int h,int w);
        int area();
        rectangle(int h,int w);
        ~rectangle();

//    private:
//        int a;
//    public:
//        int b;

};
 int rectangle::area()
{
    return height*width;
}

 rectangle::rectangle(int h,int w)
{
    height = h;
    width = w;
    cout<<"Constructor"<<endl;
}

rectangle::~rectangle()
{
    height = 1;
    width = 1;
    cout<<"Destructor"<<endl;
}
int main()
{
    rectangle obj(5,6);

    cout<<obj.area()<<endl;

    return 0;
}
*/
/*
#include<iostream>
using namespace std;
class rectangle
{
    private: int height;
        int width;
public:
//    rectangle();
    rectangle(int h,int w);
    int area();
    ~rectangle();
};

rectangle::rectangle(int h,int w){
    height = h;
    width = w;
cout<<"Constructor Called"<<area()<<endl;
}
int rectangle::area(){
    return height*width;
}
rectangle::~rectangle(){
cout<<"Destructor Called:"<<area()<<endl;
}
int main()
{
   rectangle obj(5,6),obj1(2,1);//ekhane na dile vul hobe

//    cout<<obj.area()<<endl;
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main(){
//{
//    int *ptr;
//    int a=5;
//    ptr = &a;
//    cout<<ptr<<endl;
////    cout<<ptr<<" "<<*ptr<<endl;
////    cout<<*ptr<<endl;
//    //wrong *ptr = 5;
////    ptr =  new int(5);
//    ptr = new int(5);
//    cout<<ptr<<" "<<*ptr<<endl;
//    delete(ptr);
////       ptr = new int[;

    int *ptr;
    ptr = new int[5];
    ptr[0]=6;
    ptr[1]=5;
    cout<<*ptr<<" "<<ptr[0]<<endl;
    cout<<*(ptr+1)<<" "<<ptr[1]<<endl;
    cout<< *(ptr+2) <<" "<<ptr[2]<<endl;
//    delete(ptr);
    delete [] ptr;
    cout<<*ptr<<endl;

    return 0;
}

*/
/*
#include<iostream>
using namespace std;
int main()
{
    int *ptr;
    int a = 6;
    ptr=&a;
    cout<<ptr<<"value "<<*ptr<<endl;
    ptr = new int(6);
    cout<<ptr<<" "<<*ptr<<endl;
    delete(ptr);
    ptr = new int[5];
    ptr[2] = 6;
//    cout<<*(ptr+2)<<" "<<ptr(2)<<endl;
    return 0;
}
*/
/*---------------------------------------Assigning objetc----------------------*/
/*
#include<iostream>
using namespace std;
class rectangel{

    private: int height;
        int widht;
    public:
        void set(int h,int w);
        int area();

};
class rectange2{

    private: int height;
        int widht;
    public:
        void set(int h,int w);
        int area();

};

void rectangel::set(int h,int w)
{
    height = h;
    widht = w;
}

int rectangel::area()
{
    return height*widht;
}
int main()
{

    rectangel obj1,obj2;
        rectange2 obj3,obj4;
    obj1.set(3,4);
    obj2.set(2,4);
    cout<<"Area:"<<obj1.area()<<endl;
    cout<<"Area:"<<obj2.area()<<endl;
  //error  obj1 = obj3;
  obj1 = obj2;
     cout<<"Area:"<<obj1.area()<<endl;
    cout<<"Area:"<<obj2.area()<<endl;
    return 0;
}

*/
/*
#include<iostream>
using namespace std;

class rectangle {
    private:int height;
            int width;
    public: void set(int a,int b)
    {
        height = a;
        width = b;
    }
    int area(){
    return height*width;
    }


};
int main(){
    rectangle obj[5];
    obj[0].set(1,2);
    obj[1].set(2,3);
    obj[2].set(4,5);
    obj[3].set(3,2);
    obj[4].set(4,3);
    for(int i = 0;i<5;i++)
    {
        cout<<i<<" = "<<obj[i].area()<<endl;
    }
    return 0;

}
*/
/*

#include<iostream>
using namespace std;

class rectangle {
    private:int height;
            int width;
    public:
        rectangle (int a,int b)
    {
        height = a;
        width = b;
    }
    int area(){
    return height*width;
    }


};
int main(){
   // rectangle obj[5]={0,1,2,3,4}; //constructor one parameter
  // rectangle obj[5] = {rectangle(1,2),rectangle(2,3),rectangle(4,4)};
//  rectangle obj[5]={0,1,2,3,4};
rectangle obj[3] = { rectangle(1,2),  rectangle(2,3),  rectangle(4,4)};

    for(int i = 0;i<3;i++)
    {
        cout<<i<<" = "<<obj[i].area()<<endl;
    }
    return 0;

}
*/

/*
#include<iostream>
#include<cstdio>
using namespace std;
class MyClass
{
                    int h;
                    int i;
        public:
                       MyClass(int j, int k)
                  {
                       h = j;
                       i = k;
                  }
                      int getlnt()
                  {
                      return i;
                  }
                     int getHeight()
                 {
                     return h;
                 }
};
                int main()
            {
                MyClass myObject[3] =  { MyClass(1, 2), // initialize
                MyClass(3,4),
                MyClass(5, 6)
                                                       };
               int i;
               for(i=0; i<3; i++)
                   {
                         cout << myObject[i].getHeight();
                         cout << ", ";
                         cout<< myObject[i].getlnt() << "\n";
                   }

            }
*/

/*-----------------------------------------object pointer---------------------------------------------*/
/*
#include<iostream>
using namespace std;
class rectangle{

    int height;
    int width;
    public: void set(int a,int b)
    {
        height = a;
        width = b;
    }
    int area();
};
inline int rectangle::area(){
return height*width;

}
int main()
{
    rectangle obj;
    rectangle *p;

//    obj.set(3,4);
//    p=&obj;
//    cout<<obj.area()<<endl;
//    cout<<*p<<endl;

    obj.set(3,4);
    cout<<"Area:"<<obj.area()<<endl;
    p = &obj;
    p->set(3,43);
    cout<<obj.area()<<endl;






    return 0;
}
*/
//#include<iostream>
//using namespace std;
//class rectangle{
//    private:int height;
//            int width;
//    public: int area();
//        void set(int h,int w);
//
//};
//void rectangle::set(int h,int w)
//{
//    height = h;
//    width = w;
//
//}
//inline int rectangle::area(){
//
//    return height*width;
//
//}
//int main()
//{
//    rectangle obj;
//    rectangle *p;
//    p=&obj;
//    p->set(1,2);
////    obj.set(1,4);
//    cout<<obj.area()<<endl;
//    return 0;
//
////}
//
//#include<iostream>
//using namespace std;
//class rectangle{
//    int height;
//    int width;
//public:
//    void set(int a,int b )
//    {
//       this->height = a;
//        this->width = b;
//    }
//    int area(){return height*width;}
//
//};

//#include<iostream>
//using namespace std;
//int main()
//{
//    int i,j =  9;
//    for(int i = 1;i<=19;i++){
//        if(i>=1&&i<=10)
//        {
//            cout<<i;
//        }
//        else
//        {
//            cout<<j;
//            j--;
//        }
//    }
//    return 0;
//}

//#include<iostream>
//using namespace std;
//class rectangle;
//class cost {
//    int costRate;
//public:
//    void setValue(int a){costRate = a;}
//    int totalCost(rectangle A);
//
//};
//class rectangle{
//    int height;
//    int width;
//
//
//public:
//    void set(int a,int b){height = a;width=b;}
//    int area(rectangle A);
//
////    friend  cost;
//    friend int cost::totalCost(rectangle A);
//    friend int cost::area(rectangle A);
//
//};
//int cost::totalCost(rectangle A){
//return costRate*A.height*A.width;}
//
//
//
//int main()
//{
//    rectangle r;
//    r.set(5,6);
//    cost c;
//    c.setValue(100);
//    cout<<r.area()<<endl;
//    cout<<c.totalCost(r)<<endl;
//    return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//    int i;
//    i = 5;
//    cout << i << endl;
//
//    int *p;
//    p = &i;
//    cout << *p << endl;
//
//    int&r = i ;
//    cout <<++r <<endl;
//    cout<<i<<endl;
//    r = 7;
//    cout<<i<<endl;
//    cout<<*p<<endl;
//    cout<<r<<endl;
//
//
//
//
//
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//
//
//    return 0;
//}

////////////reference
//#include<iostream>
//using namespace std;
//
//int &fun(int a )
//{
//    return a;
//}
//int main()
//{
//
//    int a;
//    a = 5;
//    int b = 6;
////    cout<<fun(&b);
//    int *p = &a;
//    int &r= *p;
//    r = 5;
//    fun(a) = 6;
//
//    return 0;
//}

//constant

//#include<iostream>
//using namespace std;
////class example {
////public:
////    int a;
////    int change(int x) const{
////
//////        x = a;//right
//////        a =x //wrong
////
////        //right//return x + a;
////
////
////    }
////
////
////};
//
//int main()
//{
////    const int  cnst = 12343;
////    int arr[cnst];
//
//   int i = 0;
//    //const  int &r = i;
//    int &r=i;
//    cout << r<<endl;
//    r = 5;
//    cout << r<<endl;
//    cout<<i<<endl;
//
//    return 0;
//}


//static varibale,member,member function

//#include<iostream>
//using namespace std;
//int fun(){
//    static int a=1;
//    int b = 0;
//    a++;
//    b++;
//    cout << a << " "<<b<<endl;
//
//
//
//
//}
//
//int main()
//{
//    fun();
//    fun();
//    fun();
//    return 0;
//}

//#include<iostream>
//using namespace std;
//
//class abc{
//public:
//    static int a;
//   static int b;
//    static void fun()
//    {
//        cout<<++a<<" "<<++b<<endl;
//    }
//    abc(){
//    b = 0;}
//
//
//};
//int abc::a;
//int abc::b;
//int main()
//{
//    abc a,b,c;
//    a.fun();
//    a.fun();
//    b.fun();
//    c.fun();
//    return 0;
//}
//
//
//#include<iostream>
//using namespace std;
//int add(int a,int b)
//{
//    return a+b;
//}
//double add(double a,double b)
//{
//    return a+b;
//}
//float add(float a,float b)
//{
//    return (a+b)*2;
//}
//
//int main()
//{
//    float a=2.2,b = 23.34;
//    cout<<add(a,b)<<endl;
//    cout<<add(1,3)<<" "<<add((float)2.2,2.3);
//}
//
//
//#include<iostream>
//using namespace std;
//int main()
//{
//    int a,b,c,d;
//    cin >> a>>b>>c>>d;
//    int m=max(3*a/10,(a-a/250*c));
//        int v =max(3*b/10,(b-b/250*d));
//        if(m>v){
//            cout<<"Misha"<<endl;
//        }
//         else if(m==v){
//            cout<<"Tie"<<endl;
//        }
//         else{
//            cout<<"Vasya"<<endl;
//        }
////    cout<<m<<" "<<p<<endl;
//    return 0;
//}
//#include<iostream>
//#include<cmath>
//using namespace std;
//int main()
//{
//    int a,b,c;
//    int m,n,p;
//    cin>>a>>b>>c;
//    m = a+b;
//    n = b+c;
//    p = a + c;
//    if((m>c)&&(n>a)&&(p>b))
//    {
//        cout<<"0"<<endl;
//    }
//    else if(m<=c)
//    {
//        cout<<(abs(m-c))+1<<endl;
//    }
//     else if(n<=a)
//    {
//        cout<<(abs(n-a))+1<<endl;
//    }
//     else if(p<=b)
//    {
//        cout<<(abs(p-b))+1<<endl;
//    }
//    return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//
//int main() {
//
//freopen("input.txt","r",stdin);
////freopen("output.txt","w",stdout);
//int i;
//while(cin>>i)
//{
//    cout<<i<<endl;
//}
//}

//#include<iostream>
//using namespace std;
//
//class abc{
//    int a;
//public:
//    abc(int x){a = x;}
//     abc(){a = 0;}
//        abc(int x,int b){a = x+b;}
//    int ret(){return a;}
//
//};
//
//int main()
//{
//    abc ob(5);
//    abc ob1;
//    abc obj2(45,33);
//    cout<<ob.ret()<<endl;;
//    cout<<ob1.ret()<<endl;
//    cout<<obj2.ret()<<endl;
//    return 0;
//
//
//}
//

// C++ rogram to demonstrate the use of std::min
/*
#include <iostream>
#include <algorithm>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

 Defining the binary function

int main()
{

	 Finding the smallest of all the numbers

	cout<<min({-1,2,3,4})<<endl;
	cout << max(6,7)<<endl;
	cout << max({2,3,5,78})<<endl;
	int arr[5]={1,2,3,4,4};
	cout<<min_element(arr,arr+4)-arr<<endl;
		cout<<max_element(arr,arr+4)-arr<<endl;

		int a[3]={1,2,3};
		cout << min_element(arr,arr+3)-arr<<endl;
		int index = max_element(arr,arr+5)-arr;
		cout<<"max element "<<arr[index]<<endl;
		cout<<"Find index"<<find(arr+2,arr+5,2)-arr<<endl;
		cout<<"Count Function:"<<endl;
		cout<<count(arr,arr+5,4)<<endl;
		cout<<count(arr,arr+5,2)<<endl;

    int arr[5]={1,4,5,3,2};
    cout <<"Before:"<<endl;
    for(int i = 0; i<5;i++){
        cout << arr[i]<<" ";
    }
    cout<<"\n\n"<<endl;
//    sort(arr,arr+5);
    sort(arr,arr+5);
    cout<<"After:"<<endl;
     for(int i = 0; i<5;i++){
        cout << arr[i]<<" ";
    }
    cout<<"\n\n"<<endl;

    cout<<"find " <<find(arr,arr+5,2)-arr<<endl;
    cout <<"count "<<count(arr,arr+5,2)<<endl;
    cout<<"Min Element"<<arr[min_element(arr,arr+5)-arr]<<endl;
    cout<<"Max Element"<<arr[max_element(arr,arr+5)-arr]<<endl;
    cout<<binary_search(arr,arr+5,2)<<endl;
    cout<<binary_search(arr,arr+5,10)<<endl;







//	cout<<arr+4<<endl;

	return 0;
}
&*/
//vector
//create,add,read,update,delete
/*

#include<bits/stdc++.h>
using namespace std;

void print(vector<int>v){

    cout<<"Total Elements:"<<v.size()<<"\n";
    for(int d: v)
        cout<<d<<" ";
        cout<<"\n\n";

}


int main()
{
    ios_base::sync_with_stdio(false);
    create
    vector<type>name(element)
    vector<int>vec (4);//int data[5];
    vector<string>vec(4);

    vector<int>v(4,2);
    vector<int>vec({1,2,3,4,5});
    vector<int>vec={1,2,3,4,5};

    vector<int>vec2=vec;
    vec2 = vec;

    vector<int>vec={1,2,3,4};
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(7);

    vec.begin()
    vec.end()
    vec.insert(vec.begin()+1,2,7);
    vec.insert(vec.end()-1,12);

    vector<int>vec={1,2,3,4};
    cout<<vec[2]<<endl;
    cout<<vec.front()<<endl;
    cout<<vec.back()<<endl;
    for(int d:vec)
    cout<<d<<" ";
    cout<<"\n\n";

    int ln = vec.size();
    for(int i = 2;i<ln-1;i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;


    vector<int>vec={1,2,3,4};
    int *d = vec.data();
    int *d=vec.data();
    cout<<d[2]<<endl;

    vec[2]=12;
    print(vec);

    print(vec);


   vector<int>data={1,2,3,4};
   vector<int>data1={4,5,6};
   cout<<"Before swap"<<endl;
   print(data);
   print(data1);
   data.swap(data1);
   cout<<"After swap:"<<endl;
   print(data);
   print(data1);


    vector<int>data={1,2,3,4,5};
    cout <<"Before Delete:"<<endl;
    print(data);
    data.pop_back();
    data.clear();
    data.push_back(45);
    data.insert(data.begin()+2,2,3);
    data.erase(data.begin()+2,data.begin()+4);
    cout<<"After delete"<<endl;
    print(data);
    return 0;


}

#include<bits/stdc++.h>
using namespace std;

void print(vector<int>v){

    cout<<"Vector in size:"<<v.size()<<endl;
    for(int d: v)
    {
        cout<< d <<" ";
     }
     cout<<"\n\n";


}

int main(){

vector<int>v ;
print(v);
}

*/

//#include<bits/stdc++.h>
//using namespace std;
//vector<int>input(){
//    vector<int>data;
//    int n;
//    cin >> n;
//    while(n--){
//            int d;
//        cin >> d;
//        data.push_back(d);
//
//    }
//    return data;
//
//
//}
//
//vector<int>reverse(vector<int>data){
//}
//
//void output(vector<int>rData){
//
//
//}
//int main()
//{
//    vector<int>data;
//    data = input();
//    data = reverse(data);
//    output(data);
//    return 0;
//}
//
//SEO optimization
//Affiliate Marketing
//Youtube channel
//Blog post
//Digital Product
//UI/UX
//HTML
//CSS
//JAVASCRIPT
//Laravel
//Django(Data Science,Machine Learingin)
//Java(Spring)
//Networking(Docker)
//Devops-->GO
//Data Scientists
//
//--->Branding
//Portfolio,Profile
//
//----> Only one select
//-->Topics wise agan
//-->

//
//#include<iostream>
//using namespace std;
//int abc(int a,int b=7)
//{
//    return a+b;
//}
////float abc(int a,int b)
////{
////    return a;
////}
//
//    int abc(int a)
//    {
//        return a;
//    }
//
//
//int main()
//{
//    cout<<abc(5,6)<<endl;
//    cout<<abc(5)<<endl;
//}
//function address
//#include<iostream>
//using namespace std;
//int abc(int a,int b)
//{
//    return a+b;
//}
//void abcd(int a)
//{
//   cout<<a<<endl;
//}
//int main()
//{
////    int (*p)(int,int);
////    p = abc;
////    cout<<p<<endl;
////    cout<<p(4,5)<<endl;
//
//
//    int(*p)(int,int);
//    p = abc;
//    cout<<p<<" "<<p(4,5)<<endl;
//    void(*q)(int);
//        q = abcd;
////        cout<<q<<" "<<q(1)<<endl;
//    cout<<q<<endl;
//        return 0;
//}


//#include<iostream>
//using namespace std;
//    class abc{
//        int *p;
//
//public:
////    abc(){cout<<"Constructor:"<<endl;
////    }
////    ~abc(){cout<<"Destructor:"<<endl;}
////    };
//    abc(){p=new int(0);}
//    ~abc(){cout<<"dis.."<<*p<<endl; delete p;}
//    void set(int x){*p=x;}
//    void get(){cout<<*p<<endl;}
//
//
//};
//
//
//int main()
//{
////    abc obj;
////    abc b=obj;
//    abc a;
//    a.get();
//    abc b = a;
//    a.get();
//    b.get();
//    b.set(4);
//    a.get();
//    b.get();
//    return 0;
//}
//copy constructor
//
//#include<iostream>
//using namespace std;
//class example{
//    int data;
//    public: example(){}
//    example(int x)
//    {
//        data = x;
//    }
//
//    void display()
//    {
//        cout<<"Data:"<<data<<endl;
//    }
//    example(example & dummy)
//    {
//        data = dummy.data;
//        cout<<"Copy constructor Called"<<endl;
//    }
//
//
//
//
//
//
//};
//
//
//
//
//
//
//int main()
//{
//    example obj(50);
//    example obj2(obj);
//    obj.display();
//    obj2.display();
//    return 0;
//}
//
//
//
//
//
//

//
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int a,b,c;
//    cin >> a >> b >> c;
//    int maj;
//    maj = (a+b+abs(a-b))/2;
//    int maj2=(maj+c+abs(maj-c))/2;
//    cout<<maj2 <<" "<<"eh o maior"<<endl;
//    return 0;
//}




//#include<iostream>
//using namespace std;
//int main()
//{
////    #ifndef ONLINE_JUDGE
////
////    freopen("input.txt","r",stdin);
////    freopen("output.txt","w",stdout);
////
////
////
////    #endif
//
////    string s="Tanim Ahmed";
////    cout<<s[5]<<endl;
////cout<<s<<endl;
////    string s(4,'@');
//////   string s1(5,'#');
//////   cout<<s1<<endl;
////    string s2(s2,1,5);
////    cout<<s2<<endl;
//
////    string s("Tanim Ahmed KUET");
////    string s2(s,2,1);
////    cout <<s2<<endl;
//
////    string s = "Tanim Ahmed";
////    string s1("Tanim Ahmed Bijoy");
////    string s3(5,'#');
////    string s4 = s1;
////    string s5(s1,2,5);
////    cout<<s<<" "<<s1<<" "<<s3<<" "<<s4<<endl;
////    string s;
//////    cin>>s;
//////    cout<<s<<endl;
////    getline(cin,s);
////    cout<<s<<endl;
//    string s;
////    getline(cin,s);
////    cout<<s<<endl;
//    cin>>s;
////    s.replace(1,3,"aaa");
////    cout<<s<<endl;
//    cout <<char(tolower(s[0]))<<endl;
//
//
//
//
//
//
//
//    return 0;
//}
//
////
//
//#include<iostream>
//using namespace std;
//int main()
//{
////    int i;
////    for( i = 0;i<9;i++)
////    {
////        cout<<i<<endl;
////    }
////    cout<<i<<endl;
//
//
////    for(int i = 0; i<10;i++)
////    {
////        for(int j = 0 ; j<10;j++)
////        {
////            cout<<"j:"<<j<<endl;
////        }
////        cout <<"i:"<<i<<endl;
////    }
//
//
//    for(int i = 0;i<11;i++)
//    {
////        cout<<i<<endl;
//    for(int k = i;k>=0;k--)
//    {
//        cout<<k<<" ";
//    }
//    cout<<endl;
//
//    }
//
//
//
//    return 0;
//}

//
//#include<iostream>
//#include<map>
//#include<iterator>
//using namespace std;
//int main()
//{
//    map<string,int>m;
//      map<string,int>::iterator it;
//
//    m["dipto"] = 43;
//    m["Arnob"] = 42;
// //   m["Arnob"] = 44;
//    m.insert(make_pair("Nabil",41));
//
////    cout<<m["Arnob"]<<endl;
////    cout<<m[43]<<endl;
////it = m.begin();
////    cout<<it->first<<" "<<it->second<<endl;
//
//
//    for(it=m.begin();it!=m.end();it++)
//    {
//        cout<<it->first<<" "<<it->second<<endl;
//    }
//    return 0;
//
//
//
//
//
//
//    return 0;
//
//}
//
//


//#include<iostream>
//#include<utility>
//#include<map>
//#include<vector>
//using namespace std;
//int main()
//{
////    pair<string,int>p("tanim",12);
//////    p.first = "Tanim";
//////    p.second = 12;
////    p = make_pair("tanim",1332);
////    cout<<p.first<<" "<<p.second<<endl;
//    vector<pair<int,string>>v;
//    v.push_back(make_pair(1,"tanim"));
//        v.push_back(make_pair(2,"tanim"));
//            v.push_back(make_pair(3,"tanim"));
//               v.push_back(make_pair(4,"tanim"));
//                  vector<pair<int,string>>::iterator it;
//                  for(it=v.begin();it!=v.end();it++)
//                  {
//                      cout<<it->first<<" "<<it->second<<endl;
//                  }
//
//    cout<<v[1].first<<endl;
//
//
//
//
//    return 0;
//}
////
//#include<bits/stdc++.h>
//#include<set>
//using namespace std;
//int main()
//{
////    set<int>s;
////    set<int>::iterator it;
////        s.insert(112);
////    s.insert(10);
////    s.insert(11);
////    s.insert(112);
//////    it = s.find(10);
//////    s.erase(it);
////    it = s.find(10);
////    s.erase(it);
////
////    for(it=s.begin();it!=s.end();it++)
////    {
////        cout<<*it<<endl;
////    }
//    set<string>s;
//    set<string>::iterator it;
//    s.insert("tanim");
//    s.insert("seba");
//    s.insert("asif");
//
//    pair< set<string>::iterator,bool>p;
//    p = s.insert("asfif");
//    if(p.second==false){
//        cout<<"Can't insert"<<endl;
//    }
//    else
//    {
//        cout<<"inserted"<<endl;
//    }
//
//
//
//
//
//
//
//
//
//
//
//
//
//}
//
//
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
////    stack<string>s;
////    s.push("tanim");
////    s.push("ahmed");
////    s.push("bijoy");
//////    cout<<s.top()<<endl;
////    s.pop();
////    cout<<s.top()<<endl;
////    while(!s.empty())
////    {
////        string x;
////        x = s.top();
////        cout<<x<<endl;
////        s.pop();
////    }
//
////            while(!s.empty()){
////                string x;
////                x = s.top();
////                cout<<x<<endl;
////                s.pop();
////            }
//
//string s;
//getline(cin,s);
//cout<<s<<endl;
//
//
//    return 0;
////}
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
////    priority_queue<int>q;
////    q.push(400);
////    q.push(300);
////    q.push(10);
////    q.push(11);
////
////    while(!q.empty()){
////        int x;
////        x = q.top();
////        cout<<x<<endl;
////        q.pop();
////    }
//
//    priority_queue<string>q;
//    q.push("tanim");
//    q.push("ahmed");
//    while(!q.empty()){
//        string s;
//        s = q.top();
//        cout<<s<<endl;
//        q.pop();
//    }
//
//
//    return 0;
//
//}

//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    multimap<string,int>m;
//    multimap<string,int>::iterator it;
//    m.insert(make_pair("Tanim",13));
//    m.insert(make_pair("anim",2));
//    m.insert(make_pair("nim",34));
//    for(it=m.begin();it!=m.end();it++)
//    {
//        cout<<it->first<<" "<<it->second<<endl;
//    }
//    return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    multiset<int>s;
//    multiset<int>::iterator it;
//    s.insert(100);
//    s.insert(100);
//    s.insert(1);
//    for(it=s.begin();it!=s.end();it++)
//        cout<<*it<<endl;
//    return 0;
//}
======================================================
