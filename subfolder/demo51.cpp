#include <iostream>
#include <cstring>
using namespace std;

//*********Virtual Functions example*******

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() {} // here virtual play an veey very  imp. becz. of this virtual
};                            // below display functions are run else only base class display

class CWHVideo : public CWH
{
    float videoLength;

public:
    CWHVideo(string s, float r, float vl) : CWH(s, r)
    {
        videoLength = vl;
    }
    void display()
    {
        cout << " This is an amazing video with title " << title << endl;
        cout << " Ratings: " << rating << " Out of 5 stars" << endl;
        cout << " Length of video is : " << videoLength << " minutes" << endl;
    }
};

class CWHVText : public CWH
{
    int words;

public:
    CWHVText(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << " This is an amazing  text tutorial with title " << title << endl;
        cout << " Ratingsof the text tutorial: " << rating << " Out of 5 stars" << endl;
        cout << " No of words in tutorial is : " << words << " words" << endl;
    }
};

int main()
{
    string title;
    float rating, vlen;
    int words;

    // for CWH video
    title = " Django tutorial ";
    vlen = 4.56;
    rating = 4.98;
    CWHVideo djVideo(title, rating, vlen);
    // djVideo.display();

    // for CWH TEXT

    title = "Django tutorial Text ";
    words = 345;
    rating = 4.91;
    CWHVText djText(title, rating, words);
    // djText.display();

    // Same things by using Pointers
    CWH *tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}