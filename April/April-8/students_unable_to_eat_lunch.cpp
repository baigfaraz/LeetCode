#include <iostream>
#include <vector>
using namespace std;

int countStudents(vector<int> students, vector<int> sandwiches)
{
    int count = 0;

    if (students.size() != sandwiches.size())
    {
        return -1;
    }

    int size = students.size() + sandwiches.size();

    for (int i = 0; i < size; i++)
    {
        if (students[0] == sandwiches[0])
        {
            students.erase(students.begin());
            sandwiches.erase(sandwiches.begin());
        }
        else
        {
            int temp = students[students.size() - 1];
            for (int j = students.size() - 1; j > 0; j--)
            {
                students[j] = students[j - 1];
            }
            students[0] = temp;
        }
        if (students.empty())
        {
            for (int i = 0; i < students.size(); i++)
            {
                count++;
            }
            return count;
        }
    }

    for (int i = 0; i < students.size(); i++)
    {
        count++;
    }

    return count;
}

int main()
{
    vector<int> students = {1, 1, 1, 0, 0, 1};
    vector<int> sandwiches = {1, 0, 0, 0, 1, 1};
    cout << countStudents(students, sandwiches);

    return 0;
}