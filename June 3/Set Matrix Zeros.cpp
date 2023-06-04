* Problem : https://www.codingninjas.com/codestudio/problems/set-matrix-zeros_8230862?challengeSlug=striver-sde-challenge&leftPanelTab=0

* Solution : 

#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &M)
{
	int n = M.size();
	int m = M[0].size();

	//Lets have all the positions of 0s
	vector<pair<int, int>> pos;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(M[i][j] == 0) pos.push_back({i, j});
		}
	}

	//Now making the rows and columns 0
	for(auto &i : pos){
		int x = i.first;
		int y = i.second;

		for(int p = 0; p < n; p++){
			M[p][y] = 0;
		}

		for(int p = 0; p < m; p++){
			M[x][p] = 0;
		}
	}
}