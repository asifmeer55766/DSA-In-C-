#include <iostream>
using namespace std;

class Queue
{

private:
    int front, rear;
    int array[5];

public:
    Queue()
    {
        front = -1;
        rear = -1;
        for (int i = 0; i < 5; i++)
        {
            array[i] = 0;
        }
    }
    // Check Queue is full
    bool IsFull()
    {
        if ((rear + 1) % 4 == front) // that 's a small changed here
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    // check if queue is empty
    bool IsEmpty()
    {
        if (front == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
     // For Enqueue Operation means add a value in queue
    void Enqueue(int value)
    {
        if (IsFull())
        {
            cout << " Queue is Full" << endl;
            return;
        }
        else
        {
            if (front == -1)
            {
                front++;
            }
            rear = (rear+1)%4;// a small changed here
            array[rear] = value;
        }
    }
       // For Dequeu Operation means remove a value from queue

    int Dequeue()
    {
        int element;
        if (IsEmpty())
        {
            cout << "Queue is empty" << endl;
            return (-1);
        }
        else
        {
            element = array[front];
            if (front >= rear)
            {
                front = -1;
                rear = -1;
            } /* Q has only one element, so we reset the queue after deleting it. */
            else
            {
                front = (front+1)%4;// a small changed here
            }
            cout << endl
                 << element << " is removed from Queue" << endl;
            return (element);
        }
    }
    
    // To Display all elements of  Queue

    void Display()
    {
        if (IsEmpty())
        {
            cout << " Queue is Empty" << endl;
            return;
        }
        else
        {
            for (int i = front; i <= rear; i++)
            {
                cout << array[i] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Queue q;
    int value, Option;
    do
    {
        cout << endl<<endl<<" ........Hello , This code is design by Asif Hussain.........  " << endl;
        cout << " -------------Choose the Folloing Option------------------- " << endl;
        cout << " 1 For Is Empty()" << endl;
        cout << " 2 For Is Full()" << endl;
        cout << " 3 For Enqueue()" << endl;
        cout << " 4 For Dequeue()" << endl;
        cout << " 5 For Display()" << endl
             << endl;
        cin >> Option;

        switch (Option)
        {
        case 1:
            if (q.IsEmpty())
            {
                cout << "Queue  is Empty" << endl;
            }
            else
            {
                cout << " Queue is not Empty" << endl;
            }
            break;
        case 2:
            if (q.IsFull())
            {
                cout << "Queue is Full" << endl;
            }
            else
            {
                cout << " Queue is not Full" << endl;
            }
            break;
        case 3:
            if (q.IsFull())
            {
                cout << " Queue is Full" << endl;
            }
            else
            {
                cout << " Enter the Elements to Enqueue" << endl;
                cin >> value;
                q.Enqueue(value);
                cout << value << " is Added in Queue" << endl;
            }

            break;
        case 4:
            q.Dequeue();

            break;
        case 5:
            cout << " -------------Elements in Queue is----------- " << endl
                 << endl;
            q.Display();
            break;

        default:
            cout << " Choose Valid Option " << endl;
            break;
        }

    } while (Option != 0);

    return 0;
}