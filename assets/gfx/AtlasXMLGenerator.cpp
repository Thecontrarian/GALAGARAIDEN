#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{
	if (argv[0] == NULL || argv[1] == NULL){
		return 0;
	}
	ifstream inFile;
	ofstream outFile;
	inFile.open(argv[1]);

	string name = argv[1];
	string::iterator it = name.end();
	for (int i = 0; i < 4; ++i)
	{
		--it;
	}
	name.erase(it, name.end());
	name.append(".xml");
	outFile.open(name.data());
	outFile << "<TextureAtlas imagePath=''>" << endl;
	string equals;
	int x;
	int y;
	int width;
	int height;
	int frameCount;
	int frameWidth;
	name = "";

	while (inFile){
		if (inFile >> name >> equals >> x >> y >> width >> height >> frameCount)
		{
			frameWidth = width/frameCount;
			for (int i = 0; i < frameCount; ++i)
			{
				outFile << "	<SubTexture name='" << name << "_frame" << i+1
						<< "' x='" << x + (frameWidth*i)
						<< "' y='" << y 
						<< "' width='" << frameWidth
						<< "' height='" << height 
						<< "'/>" << endl;
			}
		}
	}
	outFile << "</TextureAtlas>" << endl;
	inFile.close();
	outFile.close();
	return 0;
}
