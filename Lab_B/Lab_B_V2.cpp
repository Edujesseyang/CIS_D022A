// Jesse Yang --Lab_B --version 2

// This program will prompt user to enter three words answer for questions.
// program will split those words into three variables, and format out a sentence. 

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // get user input
    cout << "Enter three words answer separate by space for following question." << endl;
    cout << "What is your name?" << endl;
    cout << "What do you like?" << endl;
    cout << "What is your favorite object?" << endl;
    cout << "Enter your answer: ";
    string user_answer;
    getline(cin, user_answer);
    cin.get();
    
    // define vars and index counter
    string name, liking, favorite;
    int counter = 0;
    // get length of user input
    int length = user_answer.length();

    // loop to get the word for name
    for (int i = 0; i < length; i++)
    {
        if(user_answer[i] != ' ')
        {
            name.push_back(user_answer[i]);
            counter++;
        }
        else if(user_answer[i] == ' ')
        {
            counter++;
            break;
        }
    }

    // loop to get the word for liking
    for (int i = counter; i < length; i++)
    {
        if (user_answer[i] != ' ')
        {
            liking.push_back(user_answer[i]);
            counter++;
        }
        else if (user_answer[i] == ' ')
        {
            counter++;
            break;
        }
    }

    // loop to get the word for favorite
    for (int i = counter; i < length; i++)
    {
        if (user_answer[i] != ' ')
        {
            favorite.push_back(user_answer[i]);
            counter++;
        }
        else if (user_answer[i] == ' ')
        {
            counter++;
            break;
        }
    }

    // format the output context
    cout << "Hi, I am " << name;
    cout << " and I like " << liking;
    cout << ". My favorite subject is " << favorite << '.' << endl;

    return 0;
}