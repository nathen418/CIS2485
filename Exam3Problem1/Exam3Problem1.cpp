//Nate Goldsborough
//2020/7/24
//Exam 3 Problem 1
// Develop a program that processes a text file full of integer values and determines its average value and largest value

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;




int main()
{

    //create file obj
    fstream file;

    //define vars
    string fileName;
    vector<int> list;
    int value;
    int size;
    float sum = 0.0;
    int largestValue;
    float average;


    //get input on which file to open from user
    cout << "Type the name of the file you want to search: ";
    cin >> fileName;

    //cout << "filename raw: " << fileName << endl;
    fileName += ".txt";
    //cout << "filename formatted: " << fileName << endl;

    //open file of name 'fileName'
    file.open(fileName, ios::in);

    //check if file opened correctly
    if (file.is_open())
    {
        //loop thru file and send all data to the vector (list)
        while (file.eof() == false) {
            file >> value;
            list.push_back(value);
        }
    }

    //close the file to reduce memory usage
    file.close();

    //sort list in decending order
    sort(list.begin(), list.end());


    //get largestValue from list
    largestValue = list.back();
    //cout << "Largest value: " << list.back() << endl;


    //get sum of vector
    for (auto& n : list)
        sum += n;

    //get size from list
    size = list.size();

    //calculate average of list
    average = sum / size;


    //display data to the user
    cout << "Number of values in the file: --------- " << size << endl;
    cout << "The average value of the file is: ----- " << average << "." << endl;
    cout << "The largest value found in the file is: " << largestValue << "." << endl;

}