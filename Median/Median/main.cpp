#include <iostream>
#include <queue>
#include <functional>

using namespace std;

class MedianFinder
{
public:
    MedianFinder() {}

    void addNum(int num)
    {
        if (max_heap.empty() || num <= max_heap.top())
        {
            max_heap.push(num);
        }
        else
        {
            min_heap.push(num);
        }

        if (max_heap.size() > min_heap.size() + 1)
        {
            min_heap.push(max_heap.top());
            max_heap.pop();
        }
        else if (min_heap.size() > max_heap.size())
        {
            max_heap.push(min_heap.top());
            min_heap.pop();
        }
    }
    double findMedian()
    {
        if ((max_heap.size() + min_heap.size()) % 2 == 0)
        {
            return (max_heap.top() + min_heap.top()) / 2.0;
        }
        else
        {
            return max_heap.top();
        }
    }

private:
    priority_queue<int> max_heap;
    priority_queue<int, vector<int>, greater<int>> min_heap;
};

int main()
{
    setlocale(LC_ALL, "RU");

    MedianFinder mf;

    int num;
    char choice;

    do
    {
        cout << "Введите число: ";
        cin >> num;
        mf.addNum(num);

        cout << "Желаете добавить еще число? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Медиана: " << mf.findMedian() << endl;

    return 0;
}
