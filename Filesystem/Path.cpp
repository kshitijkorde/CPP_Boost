#include<bits/stdc++.h>
#include<boost/filesystem.hpp>

using namespace std;
using namespace boost::filesystem;

void TraverseDirectory(path P, string DirName){
	cout << "Parent:" << DirName << endl;
	for(directory_iterator itr(P); itr != directory_iterator(); ++itr){
		if(is_directory(status(itr->path()))){
			string childdir = DirName+"/"+itr->path().filename().string();
			cout << "Dir:" << childdir << endl;
			path ChildPath(childdir);
			TraverseDirectory(ChildPath, childdir);
		}else if(is_regular_file(status(itr->path()))){
			cout << "File: " << DirName+"/"+itr->path().filename().string() << endl;
		}
	}
}

int main(int argc, char * argv[]){

	if(argc < 1){
		cout << "Directory name not specified in the arguments list" << endl;
		return 0;
	}
	string DirName(argv[1]);
	path P(DirName);
	if(exists(P)){
		if(is_directory(status(P))){
			TraverseDirectory(P, DirName);
		} else {
			cout << DirName << " is not a directory " << endl;
		}
	}
	return 0;
}
