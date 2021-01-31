#include<iostream>
#include<cstring>
using namespace std;

class cwh{
	protected :
		string title;
		float rating;
	public :
	cwh(string s,float r)
	{
		title = s;
		rating = r;
	}
	virtual void display(){
		cout<<"boogus code";
	}	
};

class cwhvideo : public cwh{
	float videolength;
	public :
		cwhvideo(string s,float r,float vl) : cwh(s,r)
		{
			videolength = vl;
		}
		void display()
		{
			cout<<"title : "<<title<<endl;
			cout<<"rating : "<<rating<<endl;
			cout<<"length : "<<videolength<<endl;
		}
};

class cwhtext : public cwh{
	int words;
	public :
		cwhtext(string s,float r,int wc) : cwh(s,r)
		{
			words = wc;
		}
		void display()
		{
			cout<<"title : "<<title<<endl;
			cout<<"rating : "<<rating<<endl;
			cout<<"words : "<<words<<endl;
		}
};

int main()
{
	string title = new char[30];
	float rating,vlen;
	int words;
	
	//for video
	title = "CPP TUTORIAL";
	vlen = 4.56;
	rating = 4.89;
    cwhvideo djvideo(title,rating,vlen);
  //  djvideo.display();
    
    //for text
	title = "CPP TUTORIAL";
	vlen = 433;
	rating = 4.19;
    cwhtext djtext(title,rating,vlen);
 //   djtext.display();
   
    cwh* tuts[2];
    tuts[0] = &djvideo;
    tuts[1] = &djtext;
    
    tuts[0]->display();
    tuts[1]->display();
    
	return 0;
}
