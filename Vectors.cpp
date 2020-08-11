#include<iostream>
#include<vector>
#include<iomanip>
// template <class T, class Alloc = allocator<T> > class vector; 
//has dynamic size
//Compared to the other dynamic sequence containers (deques, lists and forward_lists), 
//vectors are very efficient accessing its elements (just like arrays) and relatively efficient adding or removing elements from its end.
using namespace std;

void display(vector<vector<int>> vec,string s1)
{
    cout<<"vector "<<s1<<"\nIndex\t Value\n";
    for(int i=0;i<vec.size();i++)
    {
        for(int j=0;j<vec[i].size();j++)
            cout<<setw(4)<<vec[i][j]<<"\t";
        cout<<endl;
    }
}

void display2(vector<char> vec,string s1)
{
    cout<<"vector "<<s1<<"\nIndex\t Value\n";
    for(vector<char>::iterator it=vec.begin();it!=vec.end();it++)
    {
        cout<<"\t"<<setw(4)<<*it<<endl;
    }
}
void display3(vector<int> *vec,string s1)
{
    cout<<"vector "<<s1<<"\nIndex\t Value\n";
    for(int i=0;i!=vec->size();i++)
    {
        cout<<i<<"\t"<<setw(4)<<vec->at(i)<<endl;
    }
}

int main()
{
    // //Different ways to initialize the vector
    // vector<int> v1;                                      //empty
    // v1.push_back(10);                                      //empty
    // v1.push_back(9);                                      //empty
    // v1.push_back(8);                                      //empty
    // v1.push_back(7);                                      //empty
    // v1.push_back(6);
    // quick(v1,0,4);
    // display(v1,"v1");
    // vector<int> v2(10,5);                                //vector of size 10 each with value 5
    // vector<int> v3(v2.begin(),v2.begin()+5);              //vector copied from another within range
    // vector<int> v4(v3);                                   //making dup

    // int arr[] = {1,2,3,4,5};
    // vector<int> v5(arr,arr + sizeof(arr)/sizeof(int));
    // int arr2[] = {1,2,3,4,4};
    // vector<int> v7(arr2,arr2 + sizeof(arr2)/sizeof(int));
    // cout<<setw(10)<<"Equal"<<"\t"<<(v5==v7)<<endl;
    // cout<<setw(10)<<"less"<<"\t"<<(v5<v7)<<endl;
    // cout<<setw(10)<<"greater"<<"\t"<<(v5>v7)<<endl;

    // display(v1,"v1");
    // display(v2,"v2");
    // display(v3,"v3");
    // display(v4,"v4");
    // display(v5,"v5");

    // // comparing two particular elements or whole vector
    // cout<<(v4==v3)<<endl;
    // cout<<boolalpha<<(v4[0]==v3[0])<<endl;
    // if(v4==v3)
    //     cout<<"Hello\n";
    // else
    //     cout<<"bye\n";

    // //comparing two vector to particular length
    // bool res = equal(v3.begin(),v3.end(),v2.begin()+5);
    // cout<<"Equal ->"<<res<<endl;

    // cout<<"v3 size -> "<<v3.size()<<endl;
    // cout<<"v3 max_size -> "<<v3.max_size()<<endl;
    // cout<<"v3 resize ->";
    // v3.resize(1);
    // display(v3,"v3");
    // cout<<"New size-> "<<v3.size()<<endl;
    // cout<<"v3 capacity-> "<<v3.capacity()<<endl;
    // cout<<"v1 empty -> "<<vc2.empty()<<endl;
    // v5.reserve(10);
    // display(v5,"Reserve v5");
    // cout<<"v5 size-> "<<v5.size()<<endl;
    // cout<<"v5 capacity-> "<<v5.capacity()<<endl;
    // v5.resize(10);
    // display(v5,"Resize v5");

    // //Resizing the vector will make the capacity as of size
    // //this will not be affected by shrink_fit 
    // //Reserving will increase the vector capacity not size 
    // //which will be affected by shrink_fit 

    // cout<<"v5 size-> "<<v5.size()<<endl;
    // cout<<"v5 capacity-> "<<v5.capacity()<<endl;
    // v5.reserve(100);
    // cout<<"v5 size-> "<<v5.size()<<endl;
    // cout<<"v5 capacity-> "<<v5.capacity()<<endl;
    // v5.shrink_to_fit();
    // v5.assign(v2.begin(),v2.end());
    // display(v5,"After shrinking");
    // cout<<"v5 size-> "<<v5.size()<<endl;
    // cout<<"v5 capacity-> "<<v5.capacity()<<endl;

    // vector<int> v6;
    // for(int i=0;i<8;i++)
    //     v6.push_back(i);
    // display(v6,"v6");
    // int sum=0;
    // //summing up all the elements:
    // while(!v6.empty())
    // {
    //     sum+=v6.back();
    //     v6.pop_back();
    // }
    // cout<<"sum"<<sum<<endl;

    // v6.insert(v6.begin(),12);
    // v6.insert(v6.begin(),3,25);   //add elements in the beginign
    // v6.insert(v6.end(),3,18);   //add elements in the end
    // v6.insert(v6.begin()+2,v2.begin(),v2.end());   //add elements in the end
    // display(v6,"v6");

    // //erase a particular element of range of elements:
    // v6.erase(v6.begin());
    // v6.erase(v6.begin()+4,v6.end());
    // display(v6,"After applying erase on v6");

    // //clear is simple function as to remove all elements of vector leaving size 0
    // vector<char> V8;
    // for(int i=0;i<10;i++)
    //     V8.push_back(char(65+i));
    // display2(V8,"V7");

    // vector<int> *abc = (vector<int> *)malloc(sizeof(vector<int>)*10);
    // abc->push_back(1);
    // abc->push_back(2);
    // vector<int>::iterator itr2 = abc->begin();
    // itr2+=1;
    // *itr2 = 45;
    // cout<<"Calling pounter"<<abc->at(0)<<"\n";
    // display3(abc,"abc");

    return 0;
}