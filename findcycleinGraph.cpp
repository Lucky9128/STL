#include<iostream>
#include<vector>
using namespace std;


// class A
// {
//     public:
//         // void Hell3()
//         // {
//         //     cout<<"Hello 1"<<endl;
//         // }
// };
// class B : public A
// {
//     public:
//         void Hell3(){};
//         void Hell3(int k)
//         {
//             cout<<"Hello 2"<<endl;
//         }
// };
// int main()
// {
//     B ab;
//     ab.Hell3();
//     ab.Hell3(10);
//     return 0;
// }



//Q2 
/*createing a class for computer department where 
    a member Name and Sem are used to store student info:
*/

// class CompDept
// {
//     private:
//         string Name;
//         int Sem;
//     public:
//     //constructor to initialize the student entry
//     CompDept(string iniName, int iniSem)
//     {
//         Name = iniName;
//         Sem = iniSem;
//     }
//     //friend function to access the private member count
//     friend void TotalStudent(CompDept);
// };
// void TotalStudent(CompDept std)
// {
//     cout<<"Student Name : "<<std.Name<<endl;
//     cout<<"Semester : "<<std.Sem<<endl;
// }
// int main()
// {
//     //declaring objects of CompDept
//     CompDept S1("Lucky",7);
//     CompDept S2("Abhilash",7);
//     CompDept S3("Siddharath",7);
//     CompDept S4("Swastik",7);
//     //calling friend function
//     TotalStudent(S1);
//     return 0;
// }

//-----------------------------------------------------------------------------------------

//Q5
// class CompDept
// {
//     private:
//         string mobile;
//     protected:
//         float grades;
//     public:
//         string Name;
//     CompDept(string Name,float grades,string Mobile)
//     {
//         this->mobile = mobile;
//         this->grades  = grades;
//         this->Name = Name;
//     }
//     void GetNumber()
//     {
//             cout<<"Mobile "<<this->grades<<endl;
//     }
//     void GetGrades()
//     {
//             cout<<"Grades "<<this->grades<<endl;
//     }
// };
// class NewDept:public CompDept
// {

//     public:
//         NewDept(string Name,float grades,string mobile):CompDept(Name,grades,mobile){};
//         void GetGrades()
//         {
//             //accessing protected variable in another class
//             cout<<"Grades "<<this->grades<<endl;
//         }
// };

// int main()
// {
//     NewDept S1("Swastik",8.5,"1234567890");
//     //accessing public variable
//     cout<<"Name of the student : "<<S1.Name<<endl;
//     //we cannot access protected member outside the class
//     //we can access protected member in derived class
//     S1.GetGrades();
//     //we can not access private member outside the class 
//     S1.GetNumber();
// }

//-----------------------------------------------------------------------------------
//Q6

// class Rectangle
// {
//     private:
//         int length,breadth;
//     public:
//         //Here we have two constructor with class name where one has some number of parameters
//         //and other have no parameters at all
//         Rectangle()
//         {
//             cout<<"created an Rectangle with no specific length and breadth\n";
//         }
//         Rectangle(int length, int breadth)
//         {
//             this->length = length;
//             this->breadth = breadth;
//             cout<<"created an Rectangle length:"<<this->length<<" and breadth:"<<this->breadth<<"\n";
//         }
// };

// class Triangle
// {
//     private:
//         int side1,side2,side3;
//     public:
//         //Here we have two constructor with class name where one has some number of parameters
//         //and other have no parameters at all
//         Triangle()
//         {
//             cout<<"created an Triangle with no specific sides\n";
//         }
//         Triangle(int side1, int side2,int side3)
//         {
//             this->side1 = side1;
//             this->side2 = side2;
//             this->side3 = side3;
//             cout<<"created an Triangle side1:"<<this->side1<<", side2:"<<this->side2<<" and side3:"<<this->side3<<"\n";
//         }
// };

// int main()
// {
//     //calling a constructor with parameters
//     Triangle Equi(10,10,10);
//     //this will call the constructor without parameters
//     Triangle T1;
//     Rectangle R1(10,10);
//     Rectangle R2;
// }
//---------------------------------------------------------------------
//Q7

// class Colleges
// {
//     private:
//         int ClgRank;
//         string Name;
//     public:
//         Colleges(int rank,string Name)
//         {
//             this->ClgRank = rank;
//             this->Name = Name;
//             cout<<"College class constructor: Name of the college->"<<Name<<"\n";
//         }
//         ~Colleges()
//         {
//             cout<<"College class Descontructor: Name of the college->"<<Name<<"\n";
//         }
// };

// class Department:public Colleges
// {
//     private:
//         int numberOfStds;
//         string DepName;
//     public:
//         //calling constructor of derived class will initially call the constructor of 
//         //base class and then it will start executing the instruction of derived class constructor 
//         Department(int NOS,string Name,int clgRank,string clgName):Colleges(clgRank,clgName)
//         {
//             this->numberOfStds = NOS;
//             this->DepName = Name;
//             cout<<"Department class constructor: Num of Std:"<<NOS<<" in "<<Name<<" at "<<clgName<<" \n";
//         }
//         //this will be called when object is deleted to free some memory.
//         ~Department()
//         {
//             //this will called before the destructor of based class
//             cout<<"Department class constructor: Num of Std:"<<numberOfStds<<" in "<<DepName<<" \n";
//         }

// };

// int main()
// {
//     //this will only call the constructor of base class
//     Colleges C1(1,"UPAS");
//     //First base class and then derived
//     Department D1(60,"Computer",2,"UPAS-2");
// }
//------------------------------------------------------------------------------

// Q9

// class Adder
// {
//     private:
//     int num1,num2;
//     public:
//         Adder(){}
//         Adder(int x1, int x2)
//         {
//             this->num1 = x1;
//             this->num2 = x2;
//         }
//         //this is binary adder where an new object is return as an result
//         Adder operator +(Adder const &obj)
//         {
//             Adder res;
//             res.num1 = num1 + obj.num1;
//             res.num2 = num2 + obj.num2;
//             return res;
//         }
//         void Data()
//         {
//             cout<<"Num1 : "<<num1<<" Num2 : "<<num2<<endl;
//         }
// };

// int main()
// {
//     Adder o1(10,20);
//     Adder o2(30,40);
//     //both values of this object will be added new object will be stored
//     //in o1
//     cout<<"o1 ->";
//     o1.Data();
//     cout<<"o2 ->";
//     o2.Data();
//     o1 = o1 + o2;
//     cout<<"After performing addition\n";
//     o1.Data();
//     return 0;
// }

vector<int> globalVertices;
vector<int> visited;
vector<vector<int>> vertices;
struct node
{
    int child;
    int root;
    int val;
    vector<struct node *> childNode;
};


void display(vector<int> *vers)
{
    for(int i=0;i<vers->size();i++)
        cout<<"\t"<<vers->at(i);
    cout<<endl;
}
void display2(vector<vector<int>> vers)
{
    for(int i=0;i<vers.size();i++)
    {
        cout<<i<<endl;
        for(int j=0;j<vers[i].size();j++)
        {
            cout<<"\t"<<vers[i][j];
        }
        cout<<"\n";
    }
}
int Gdis(struct node *Vers, vector<int> *ver)
{
    globalVertices[Vers->val -1]=1;
    cout<<"At "<<Vers->val<<" have child "<<Vers->child<<endl;
    // display(ver);
    vector<int>::iterator itr;
    for(int i=0;i<Vers->child;i++)
    {
        int val = Vers->childNode[i]->val -1;
        itr = ver->begin();
        itr+=val;
        cout<<Vers->val<<" -> "<<val+1<<" childval ->"<<*itr;
        display(ver);
        if(*itr==1)
            return 1;
        *itr=1;
        if(Gdis(Vers->childNode[i],ver))
            return 1;
        *itr=0;
        // ver->insert(val,0);
    }
    cout<<Vers->val<<" node ended\n";
    return 0;
}

int Search(int ver)
{
    globalVertices[ver]=1;
    // cout<<"At "<<ver+1<<"->";
    for(int i=0;i<vertices[ver].size();i++)
    {
        // cout<<"Child "<<vertices[ver][i]+1<<"->";
        if(visited[vertices[ver][i]-1]==1)
            return 1;
        else
        {
            // cout<<"Srch "<<vertices[ver][i]+1<<"->";
            visited[vertices[ver][i]-1]=1;
            if(Search(vertices[ver][i]))
                return 1;
            visited[vertices[ver][i]-1]=0;
        }
        
    }
    // cout<<"ends : "<<ver+1<<endl;
    return 0;
}

int main()
{
    int edges=1,ver=2;
    // fill(vertices.begin(),vertices.end(),0);
    // display(&vertices);
    vector<vector<int>> arr(edges);
    globalVertices.resize(ver);
    vertices.resize(ver);
    visited.resize(ver);
    fill(globalVertices.begin(),globalVertices.end(),0);
    fill(visited.begin(),visited.end(),0);
    arr[0] = {1,0};
    // arr[1] = {1,5};
    // arr[2] = {8,1};
    // arr[3] = {7,5};
    // arr[4] = {3,7};
    // arr[5] = {6,2};
    // arr[6] = {2,8};
    // arr[7] = {8,6};
    cout<<"Size : "<<vertices.size()<<endl;

    for(int i=0;i<arr.size();i++)
    {
        vertices[arr[i][0]].push_back(arr[i][1]);
    }
    display2(vertices);
    for(int i=0;i<vertices.size();i++)
    {
        cout<<i<<"->"<<vertices[i].size()<<endl;
        if(globalVertices[i]!=1)
        {
            if(Search(i))
                cout<<"Ring"<<endl;
            else
            {
                cout<<"No Ring"<<endl;
            }
        }
    }





    // cout<<arr[0][0]<<endl<<arr[0][1]<<endl;
    // int arr[edges][2] = {{1,2},{1,4},{2,4},{2,3}};
    // struct node *Ver[ver];
    // for(int i=0;i<ver;i++)
    // {
    //     Ver[i] = (struct node*)malloc(sizeof(struct node));
    //     Ver[i]->val = i+1;
    //     Ver[i]->root = 1;
    //     Ver[i]->child = 0;
    // }
    // for(int i=0;i<edges;i++)
    // {   
    //     int ind[] = {arr[i][0]-1,arr[i][1]-1};
    //     Ver[ind[0]]->child+=1;
    //     Ver[ind[1]]->root=0;
    //     cout<<"Adding "<<ind[0]<<" to "<<ind[1]<<"->"<<Ver[ind[0]]->child<<endl;
    //     Ver[ind[0]]->childNode.push_back(Ver[ind[1]]); 
    // }
    // display(&vertices);
    // display2(&vertices);
    // display(&vertices);
    // for(int i=0;i<ver;i++)
    // {
    //     if(globalVertices[i]!=1)
    //     {
    //         // fill(vertices.begin(),vertices.end(),0);
    //         *(vertices.begin()+i) = 1;
    //         if(Gdis(Ver[i],&vertices))
    //             cout<<"ring"<<endl;
    //         else
    //             cout<<"No ring\n";
    //         *(vertices.begin()+i) = 0;
    //         // display(&vertices);
    //     }
    // }
   
    return 0;
}


// int P1(vector<int>,int);
// int P2(vector<int>,int);
// void display(vector<int> arr)
// {
//     for(int i=0;i<arr.size();i++)
//         cout<<"\t"<<arr[i];
//     cout<<endl;
// }



// int main()
// {
//     int max=5,dep=10;
//     vector<int> arr;
//     for(int i=0;i<max;i++)
//     {
//         arr.push_back(0);
//     }
//     cout<<"Size of vec : "<<arr.size()<<endl;
    
//     for(int i=0;i<max;i++)
//     {
//         cout<<"str calling for ind "<<i<<endl;
//         arr[i]=1;
//         if(P2(arr,dep-i-1))
//         {
//             cout<<"win"<<endl;
//             return 0;
//         }
//         arr[i]=0;
//     }
//     cout<<"fails"<<endl;
    
//     return 0;
// }


// int P2(vector<int> arr, int dep)
// {
//     if(dep<=0)
//         return 1;
//     for(int i=0;i<arr.size();i++)
//     {
//         if(arr[i]!=1)
//         {
//             cout<<"P2 calling for ind "<<i<<" sum : "<<dep;
//             display(arr);
//             // int k;
//             //cin>>k;
//             arr[i]=1;
//             if(!P1(arr,dep-i-1))
//                 return 0;
//             arr[i]=0;
//         }   
//     }
//     return 1;
// }
// int P1(vector<int> arr, int dep)
// {
//     if(dep<=0)
//         return 0;
//     for(int i=0;i<arr.size();i++)
//     {
//         if(arr[i]!=1)
//         {
//             cout<<"P1 calling for ind "<<i<<" sum : "<<dep;
//             display(arr);
//             int k;
//             //cin>>k;
//             arr[i]=1;
//             if(P2(arr,dep-i-1))
//                 return 1;
//             arr[i]=0;
//         }   
//     }
//     return 0;
// }











