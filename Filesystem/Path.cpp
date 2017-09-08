#include<bits/stdc++.h>
#include<boost/filesystem.hpp>

using namespace std;
using namespace boost::filesystem;

int main(){

	path P("/home/kshi/CPP_Boost/Paths/Path.cpp");	
	if(exists(P)){
		cout << "Yes" << endl;
	}
	return 0;
}
