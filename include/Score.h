#ifndef SCORE_H
#define SCORE_H
#include <string>
using namespace std;

class Score {
private:
    float processScore, finalScore;
public:
    Score(float processScore=0, float finalScore=0);
    float average() const;
    string result() const;
};
#endif
