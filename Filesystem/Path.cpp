#include<bits/stdc++.h>
#include<boost/filesystem.hpp>

using namespace std;
using namespace boost::filesystem;

int main(){

	string FileName("/home/kshi/CPP_Boost/Filesystem/");
	path P(FileName);	
	if(exists(P)){
		cout << "Yes " << FileName  << "Exist !!" << endl;
	}

	if(is_directory(status(P))){
		cout << FileName << " is a directory" << endl;
		cout << "List of files" << endl;
		for(directory_iterator itr(P); itr != directory_iterator(); ++itr){
			cout << itr->path().filename() << endl;
		}
	}
	return 0;
}
