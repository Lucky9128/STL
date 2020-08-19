#include<iostream>
#include<vector>
#include<list>
#include<math.h>
#include<time.h>
#include<stdio.h>
#include <fstream>
using namespace std;

// I am using a binary search appraoch in this

struct node
{
    int val,ind;
    struct node *left,*right;
};
void preorder(struct node *root)
{
    if(root!=NULL)
    {
        preorder(root->left);
        cout<<root->val<<endl;
        preorder(root->right);
    }
}
// int inorder(vector<vector<int>> &vec, int val,int ind)
int inorder(vector<vector<int>> &vec,int val,int ind)
{
    for(auto i=0;i<vec.size();i++)
    {
        if(vec[i][0]==val)
        {
            int temp = vec[i][1];
            vec[i][1]=ind;
            cout<<"Updating "<<vec[i][0]<<" from "<<temp<<" to "<<vec[i][1]<<"\t";
            return temp; 
        }
    }
    return -1;

}
int inorder(struct node *root, int val, int ind)
{
    if(root!=NULL)
    {
        if(root->val!=val)
        {
            int ind1 = inorder(root->left,val, ind);
            int ind2 = inorder(root->right,val,ind);
            return ind1>ind2?ind1:ind2;
        }
        else
        {
            int temp=root->ind;
            root->ind = ind;
            return temp;
        }
    }
    else
    {
        return -1;
    }
    
}

struct node * GetNewNode(int val,int ind)
{
    struct node * temp = (struct node *)malloc(sizeof(struct node));
    temp->val = val;
    temp->left=NULL;
    temp->right =NULL;
    temp->ind = ind;
    // cout<<"Storing "<<val<<" at : "<<ind<<endl;
    return temp;
}

//insertion with iteration
struct node * insert2(struct node *root, int val, int ind)
{
    if(root==NULL)
    {
        root  = GetNewNode(val,ind);
        return root; 
    }

    struct node *temp = root;
    while(1)
    {
        if(temp->val>val)
        {
            if(temp->left==NULL)
            {
                // printf("Adding %d to %d\n",val,temp->val);
                temp->left = GetNewNode(val,ind);
                break;
            }
            else
                temp = temp->left;
        }
        else
        {
            if(temp->right==NULL)
            {
                // printf("Adding %d to %d\n",val,temp->val);
                temp->right = GetNewNode(val,ind);
                break;
            }
            else
                temp = temp->right;
        }   
    }
    return root;
}
template <class abc>
void display(abc vec)
{
    for(auto i=vec.begin();i!=vec.end();i++)
    {
        cout<<*i<<"\t";
    }
    cout<<endl;
}

int main()
{ //                             0,1,2,3,4,5,6,7,8,9,10
    vector<vector<int>> bulk = {{2,3,0,0,3,1,0,1,0,2,2}};//,{1,2,0,2},{1,0,0,0},{1,2,0,0,2,1},{1,0,2,3,0,1,2},{1,2,0,1,2},{69,0,0,0,69},{10,20,20},{1,0,2,0,2,1},{0,1,1}};

    // vector<vector<int>> bulk  = {{1,2,0,0,2,1}};
    // vector<int> temp  = {};

        // ifstream fp;
        // fp.open("txt2.txt");
        // while(!fp.eof())
        // {
        //     int k;
        //     fp>>k;
        //     temp.push_back(k);
        // }
        // fp.close();
        // cout<<temp.size()<<endl<<temp.back()<<endl;
        // return 1;
        // temp.pop_back();
        // bulk.push_back(temp);
        // display(temp);
        // bulk.push_back({0,1/,2,3,4,5});
        // cout<<bulk.size()<<endl<<temp.back()<<endl;
    time_t a1 = clock();
    for(int i=0;i<bulk.size();i++)
    {
        // struct node *root = NULL;
        int dec=0;
        int ind=0;
        int tmp=0;
        vector<int> rains =bulk[i];
        vector<int> activity;
        // vector<int> emptynodes;
        // vector<vector<int>> nums;
        vector<vector<int>> nums;
        // cout<<"Rain sie "<<rains.size()<<endl;
        for(int i=0;i<rains.size();i++)
        {
            cout<<"Rain -> "<<rains[i]<<"\t";
            if(rains[i]!=0)
            {
                ind =inorder(nums,rains[i],i);
                // ind =inorder(root,rains[i],i);
                cout<<"ind "<<ind<<"\t";
                if(ind<0)
                {
                    // root = insert2(root,rains[i],i);
                    // nums.push_back(-1);
                    nums.push_back({rains[i],i});
                    activity.push_back(-1);
                    cout<<" insert\t";
                }
                else
                {                    
                    // cout<<"Duplicate found : "<<rains[i]<<endl;
                    // cout<<"Copied at ind :" <<ind<<endl;
                    if(dec<1)
                    {
                        dec=-1;
                        break;
                    }
                    else
                    {
                        int j=ind;
                        int flg=0;
                        cout<<"Search 0's: -> "<<j<<"\t";
                        while(j<i)
                        {
                            if(activity[j]==0)
                            {
                                cout<<"found -> "<<j<<endl;
                                activity[j]=rains[i];
                                activity.push_back(-1);
                                dec--;
                                flg=1;
                                break;
                            }
                            j++;
                        }
                        if(!flg)
                        {
                            dec=-1;
                            break;
                        }         
                    }
                    

                //     if(emptynodes.size()==0)
                //     {
                //         dec=1;
                //         break;
                //     }
                //     else
                //     {
                //         int j=tmp;
                //         // display(emptynodes);
                //         for(;j<emptynodes.size();j++)
                //         {
                //             if(emptynodes[j]>ind)
                //             {
                                
                //                 // cout<<"changing at ind :" <<j<<" val :"<<rains[i]<<endl;
                //                 activity[emptynodes[j]] = rains[i];
                //                 emptynodes[j]=-1;
                //                 activity.push_back(-1);
                //                 if(j==tmp)
                //                     tmp++;
                //                 break;
                //             }  
                //         }
                //         if(j==emptynodes.size())
                //         {
                //             dec =1;
                //             break;
                //         }
                //     }
                    
                }
            }
            else
            {
                // if(activity.size()!=0)
                // {
                //     emptynodes.push_back(activity.size());
                // }
                // cout<<"Inc : "<<dec<<endl;
                dec++;
                activity.push_back(0);
            }
            cout<<"\nActivity : ";
            display(activity);
            cout<<endl<<endl;
        }
        // time_t t2 = clock();
        // double ab = (double)(t2-a1)/CLOCKS_PER_SEC;
        // // cout<<std::dec<<ab<<endl;
        // // printf("%f\n",ab);
        if(dec<0)
        {
            cout<<"It will flood"<<endl;
            cout<<"-------------------------------------------------------------------\n";
        }
        else
        {
            for(int i=0;i<activity.size();i++)
                if(activity[i]==0)
                    activity[i]=1;
                // display(rains);
            display(activity);
                cout<<"-------------------------------------------------------------------\n";
        }
    }
    
    return 0;
}
