#include<iostream>
#include<vector>
#include<iomanip>
// template <class T, class Alloc = allocator<T> > class vector; 
//has dynamic size
//Compared to the other dynamic sequence containers (deques, lists and forward_lists), 
//vectors are very efficient accessing its elements (just like arrays) and relatively efficient adding or removing elements from its end.
using namespace std;

void display(vector<int> vec,string s1)
{
    cout<<"vector "<<s1<<"\nIndex\t Value\n";
    for(vector<int>::iterator it=vec.begin();it!=vec.end();it++)
    {
        cout<<setw(3)<<distance(vec.begin(),it)<<"\t"<<setw(4)<<*it<<endl;
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

void swap(int *a1,int *a2)
{
    int temp = *a1;
    *a1 = *a2;
    *a2 = temp;
}

int part(vector<int> &A, int low, int high)
{
    int pvt = A[high];
    int i=low-1,j=high;

    for(int j=low;j<high;j++)
    {
        if(A[j]<pvt)
        {
            i++;
            swap(&A[i],&A[j]);
        }
    }
    swap(&A[i+1],&A[high]);
    return i+1;
}


void quick(vector<int> &arr, int low, int high)
{
    if(low<high)
    {
        int pivot = part(arr,low,high);
        // printf("pivot->%d\n",pivot);
        // display(arr,10);
        int i;
        // scanf("%d",&i);
        quick(arr,low,pivot-1);
        quick(arr,pivot+1,high);
    }
}
int findMin(vector<int> arr, int low, int high)
{
    int min=low;
    for(int i=low+1;i<=high;i++)
    {
        if(arr[min]>arr[i])
            min = i;
    }
    cout<<"Ret ->"<<min<<endl;
    return min;
}


int main()
{
    vector<int> vc;
    vc.push_back(4);
    vc.push_back(5);
    vc.push_back(3);
    vc.push_back(2);
    vc.push_back(7);
    vector<int> vc2(vc);

    int nc=5;
    int cnt;
    int pre = nc;
    int cost=0;
    int cnt2=0;
    do
    {
        cnt = findMin(vc,0,pre-1);
        cost += (pre)*(vc[cnt]-cnt2);
        pre = cnt;
        cnt2 = vc[cnt];
        cout<<"Min"<<vc[cnt]<<" cost"<<cost<<" cnt"<<cnt<<" cnt2"<<cnt2<<endl;
    }while(cnt!=0);
    cout<<"total "<<cost<<endl;
    // int l =10;

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
    cout<<"v1 empty -> "<<vc2.empty()<<endl;
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

    vector<int> *abc = (vector<int> *)malloc(sizeof(vector<int>)*10);
    abc->push_back(1);
    abc->push_back(2);
    vector<int>::iterator itr2 = abc->begin();
    itr2+=1;
    *itr2 = 45;
    cout<<"Calling pounter"<<abc->at(0)<<"\n";
    display3(abc,"abc");

    return 0;
}