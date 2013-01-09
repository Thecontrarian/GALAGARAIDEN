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
	outFile << "<?xml version=\"1.0\" encoding=\"utf-8\" ?>" << endl;
	outFile << "<XnaContent>" << endl;
	outFile << "<Asset Type=\"System.Collections.Generic.Dictionary[System.String, Microsoft.Xna.Framework.Rectangle]\">" << endl;
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
				outFile << "<Item><Key>" << name << "_frame" << i+1
						<< "</Key><Value>" << x + (frameWidth*i)
						<< " " << y 
						<< " " << frameWidth
						<< " " << height 
						<< "</Value></Item>" << endl;
			}
		}
	}
	outFile << "</Asset>" << endl;
	outFile << "</XnaContent>" << endl;
	inFile.close();
	outFile.close();
	return 0;
}
