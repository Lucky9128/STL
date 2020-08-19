#include <bits/stdc++.h>
#include<vector>

#define NoEq(x,y,z) x!=y && y!=z && x!=z &&  x<=9 && y<=9 && z<=9 && x>0 && y>0 && z>0
using namespace std;

void display(vector<vector<int>> vec)
{
    for(auto i=0;i<vec.size();i++)
    {
		for(auto j=0;j<vec[i].size();j++)
        	cout<<vec[i][j]<<"\t";
    	cout<<endl;
	}
}

int find(int val, int colInd, vector<vector<int>> colm)
{
	// cout<<"Looking for row->"<<val<<" from col "<<colInd<<endl;
	for(int i=colInd;i<colInd+3;i++)
	{	int flg=0;
		// cout<<"ind ->"<<i<<"\n";
		for(int j=0;j<colm[i].size();j++)
		{
			// if(val==2)
			// {
				// cout<<"compare "<<colm[i][j]<<" with "<<val<<endl;
			// }
			if(colm[i][j]==val)
			{
				flg=1;
				break;
			}
		}
		if(!flg)
			return 0;
	}
	// cout<<"true\n";
	return 1;
}

int inmat(vector<vector<int>> mat, int row, int col)
{
	// cout<<"Looking for row->"<<row<<" col->"<<col<<endl;
	int x = 1^2^3^4^5^6^7^8^9;
	for(int i=row;i<row+3;i++)
	{
		x = x^mat[i][col]^mat[i][col+1]^mat[i][col+2];
	}
	// cout<<"xoring ->"<<x<<endl;
	if(x!=0)
		return 0;
	int mycnt = mat[row][col]+mat[row][col+1]+mat[row][col+2];
	// cout<<"mycnt ->"<<mycnt<<endl;
	// cout<<"mycnt ->"<<mycnt<<endl;
	for(int i=row+1;i<row+3;i++)
	{
		int ttl=0;
		for(int j=col;j<col+3;j++)
		{
			ttl+=mat[i][j];
		}
		// cout<<"ttl ->"<<ttl<<endl;
		if(ttl!=mycnt)
			return 0;
	}
	// cout<<"Row sum is valid\n";

	for(int i=col;i<col+3;i++)
	{
		int ttl=0;
		for(int j=row;j<row+3;j++)
		{
			ttl+=mat[j][i];
		}		
		// cout<<"ttl ->"<<ttl<<endl;
		if(ttl!=mycnt)
			return 0;
	}

	// cout<<"col sum is valid\n";
	int k = mat[row][col]+mat[row+1][col+1]+mat[row+2][col+2];
	// cout<<"ttl ->"<<k<<endl;
	if(k!=mycnt)
		return 0;
	
	k = mat[row+2][col]+mat[row+1][col+1]+mat[row][col+2];
	// cout<<"ttl ->"<<k<<endl;
	if(k!=mycnt)
		return 0;
	return 1;

}
int main() {

	vector<vector<int>> grid = {{3,10,2,3,4},
								{4,5,6,8,1},
								{8,8,1,6,8},
								{1,3,5,7,1},
								{9,4,9,2,9}};
		//[[3,10,2,3,4],[4,5,6,8,1],[8,8,1,6,8],[1,3,5,7,1],[9,4,9,2,9]]
	
	vector<vector<int>> rowInd;
	vector<vector<int>> colInd;
	for(int i=0;i<grid.size();i++)
	{
			vector<int> temp;
		for(int j=0;j<grid[i].size()-2;j++)
		{
			// cout<<"checking for\t"<<grid[i][j]<<"\t"<<grid[i][j+1]<<"\t"<<grid[i][j+2]<<"\t";
			if(NoEq(grid[i][j],grid[i][j+1],grid[i][j+2]))
			{
				// cout<<"true\n";
				temp.push_back(j);
			}
			
		}
			rowInd.push_back(temp);
	}
	for(int i=0;i<grid[0].size();i++)
	{
		vector<int> temp;
		for(int j=0;j<grid.size()-2;j++)
		{
			if(NoEq(grid[j][i],grid[j+1][i],grid[j+2][i]))
			{
				temp.push_back(j);
			}
		}
			colInd.push_back(temp);
	}	
	// display(rowInd);
	// cout<<"----------------------------\n";
	// display(colInd);
	// cout<<"----------------------------\n";

	vector<vector<int>> matInd;

	for(int i=0;i<rowInd.size();i++)
	{
		for(int j=0;j<rowInd[i].size();j++)
		{
			int k = find(i,rowInd[i][j],colInd);
				// cout<<"row ->"<<i<<" at "<<k<<" of "<<rowInd[i][j]<<endl;
			if(k)
			{
				matInd.push_back({i,rowInd[i][j]});
			}

		}
	}
	// cout<<"----------------------------\n";
	// display(matInd);
	// cout<<"----------------------------\n";
	int cnt=0;
	for(int i=0;i<matInd.size();i++)
	{
		if(inmat(grid,matInd[i][0],matInd[i][1]))
		{
			cnt++;
		}
	}
	cout<<cnt<<endl;


	return 0;
}