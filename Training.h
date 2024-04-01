#ifndef TRAINING_H
#define TRAINING_H
#include <string>
#include <vector>

using namespace std;

class Training {
private:
    string title;
    int trainingHours;

public:
    /* Constructor */
    Training();

    /* Getters */
    string getTitle() const;
    int getTrainingHours() const;

    /* Setter */
    void setTitle(string t);
    void setTrainingHours(int tH);

    // Operator overload for printing
    friend std::ostream& operator <<(std::ostream& out, const Training& t) {
        out << "Training details:\n" << "Title: " << t.getTitle() << "\nTraining hours: " << t.trainingHours;
        return out;
    }
};

#endif