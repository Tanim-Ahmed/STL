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
