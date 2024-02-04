#include <iostream>
using namespace std;

class Stack
{
private:
    /* variables */
    int Top;
    int array[5];

public:
    Stack()
    {
        Top = -1;
        for (int i = 0; i < 5; i++)
        {
            /* code */
            array[i] = 0;
        }
    }

    bool IsEmpty()
    {
        if (Top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool IsFull()
    {
        if (Top == 4)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void Push(int value)
    {
        if (IsFull())
        {
            cout << " Stack is Full" << endl;
        }

        else
        {
            Top++;
            array[Top] = value;
        }
    }

    int Pop()
    {
        if (IsEmpty())
        {
            cout << " Stack is Empty" << endl;
        }
        else
        {
            int popvalue = array[Top];
            array[Top] = 0;
            Top--;
            return popvalue;
        }
    }

    void Display()
    {

        for (int i = 4; i >= 0; i--)
        {
            cout << array[i] << "  ";
        }
        cout<<endl;
    }
    void Change(int position, int value)
    {
        array[position] = value;
        cout << " Value is changed at postion " << position << endl;
    }
    int Count()
    {
        return (Top + 1);
    }
};

int main()
{
    int Option, value, replacevalue, position;
    Stack s;
    do
    {
        cout << "Enter the value to proceed" << endl;
        cout << "1 For IsEmpty()" << endl;
        cout << "2 For IsFull()" << endl;
        cout << "3 For Push()" << endl;
        cout << "4 For Pop()" << endl;
        cout << "5 For Count()" << endl;
        cout << "6 For Display()" << endl;
        cout << "7 For ChangeValue()" << endl;
        cin >> Option;
    switch (Option)
    {
    case 1:
        if (s.IsEmpty())
        {
            cout << "Stack is Empty" << endl;
        }
        break;
    case 2:
        if (s.IsFull())
        {
            cout << "Stack is Full" << endl;
        }
        else
        {
            cout << "Stack is not Full yet" << endl;
        }

        break;
    case 3:
        cout << " Enter the value " << endl;
        cin >> value;
        s.Push(value);
        cout << value << " is added " << endl;
        break;
    case 4:
        s.Pop();
        cout << "Value is Poped Out" << endl;
        break;
    case 5:
        cout << "Total value in Stack is " << s.Count() << endl;

        break;
    case 6:
        s.Display();

        break;
    case 7:
        cout << " Enter the position " << endl;
        cin >> position;
        cout << " Enter the value to replace" << endl;
        cin >> replacevalue;
        s.Change(position, replacevalue);

        break;
    default:
        cout << "Enter Valid Option )--->" << endl;
        break;
    }
 } while (Option != 0);
    return 0;
}