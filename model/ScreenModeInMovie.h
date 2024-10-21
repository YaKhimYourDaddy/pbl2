#ifndef SCREENMODEINMOVIE_H
#define SCREENMODEINMOVIE_H

#include <iostream>
using namespace std;

class ScreenModeInMovie {
private:
    string idScreenMode;
    string idMovie;

public:
    ScreenModeInMovie(const string &idScreenMode, const string &idMovie);
    string getScreenModeId() const;
    string getMovieId() const;
};

#endif // SCREENMODEINMOVIE_H
