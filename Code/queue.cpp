#include<iostream>
using namespace std;
#define DEF_SIZE 10                   //Define Maximum Size of Array (stack) 
class CMyQueue{                       //class CMyQueue
private:
    int QueueMaxSize;                  //Size of Queue Array
    int Array[ DEF_SIZE];             //Queue Array
    int Rear;                         //Rear of Queue
    int Front;                          //Front of Queue
    int ItemNumber;                    //Number Items of Queue
public:
    void InitMyQueue();                 //Function initiation StackMaxSizeand Top
    bool IsFull();                     //Function to check, is the Queue full? true -full
    void Insert( int NewItem);          //Function to Insert a new item to the Rear of Queue
    bool IsEmpty();                     //Function to check, is the Queue empty? true -empty
    void Remove();                      //Function to remove item from the front of Queue
    int Size();                        //Function to return the number of elements in the Queue
    int PeekFront();                    //Function to read item value from the front of the Queue
};
void CMyQueue::InitMyQueue(){
    QueueMaxSize = DEF_SIZE;
    Rear = -1;                          //Initiation value of Rear is -1
    Front= 0;
    ItemNumber= 0;
    };
    bool CMyQueue::IsFull(){
        if( ItemNumber== QueueMaxSize-1 ) return true;//return true if the Queue if true
        else return false;                   //otherwise, return false
    };
    void CMyQueue::Insert( int NewItem){
        if( !IsFull() ){                     //check, if the Queue is NOT full
        if( Rear== QueueMaxSize-1 )          //Deal with wrap aroundRear= -1;
        Rear++;                                //Move Top up (increase)
        Array[ Rear] = NewItem;               //Add new item to the top of Queues
        ItemNumber++;                          //Increase Number Item in Queue
        cout<<"Insert New Item Successfully"<<endl;
        }
        else 
        {
            cout<<"The Queue is full"<<endl;           //if the stack is full
        }
    };
    int CMyQueue::Size(){                  // check size of arrays
        return ItemNumber;                // return size
    }
    bool CMyQueue::IsEmpty(){               // check it's empty or not if not return false
        if (ItemNumber == 0){
            return true;                    // return empty
        }
        else{
            return false;                    // return not empty
        }
    }
    void CMyQueue::Remove(){                  // remove items front of queue
        ItemNumber--;
        Front++;
    }
    void CMyQueue::PeekFront(){               // read and display first of queue.
        cout<<array[Front]<<endl;
    }