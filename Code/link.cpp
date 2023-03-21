#include <iostream>

using namespace std;
class link
{
public:
    int data;                       // Store value
    link *next;                     // Store address
    void displayAll(link *address); // function display value & address
};
void link::displayAll(link *address) // augs address
{
    cout << address->data; // display value of first address
    cout << " -> Address's own : " << address << endl;
    cout << " -> Address next : " << address->next << endl; // display address of next value
    link *s = address->next;                                // assign address of next value to paramete store (S)
    while (true)                                            // until it's break
    {
        cout << s->data; // display value of address
        cout << " -> Address' own : " << s << endl;
        cout << " -> Address next : " << s->next << endl; // display address of next value
        s = s->next;                                      // assign next address of store(s) to store(s)
        if (s->next == 0)                                 // check  if it's last address or value
        {
            cout << s->data;                                  // display last value
            cout << " -> Address next : " << s->next << endl; // and last address
            break;                                            // excecute while loop
        }
    }
}

int main()
{

    // create object and assign address n + 1 to n
    link *address1 = new link();  // create new object address1
    link *address2 = new link();  // create new object address2
    address1->next = address2;    // assign address2 to next of address1
    link *address3 = new link();  // create new object address3
    address2->next = address3;    // assign address3 to next of address2
    link *address4 = new link();  // create new object address4
    address3->next = address4;    // assign address4 to next of address3
    link *address5 = new link();  // create new object address5
    address4->next = address5;    // assign address5 to next of address4
    link *address6 = new link();  // create new object address6
    address5->next = address6;    // assign address6 to next of address5
    link *address7 = new link();  // create new object address7
    address6->next = address7;    // assign address7 to next of address6
    link *address8 = new link();  // create new object address8
    address7->next = address8;    // assign address8 to next of address7
    link *address9 = new link();  // create new object address9
    address8->next = address9;    // assign address9 to next of address8
    link *address10 = new link(); // create new object address10
    address9->next = address10;   // assign address10 to next of address9

    // assign value to each address
    address1->data = 5;
    address2->data = 50;
    address3->data = 150;
    address4->data = 200;
    address5->data = 250;
    address6->data = 300;
    address7->data = 350;
    address8->data = 400;
    address9->data = 450;
    address10->data = 500;
    cout<<"====================before Insert=========================="<<endl;
    link *s;                 // create address of store(s)
    s->displayAll(address1); // called function for display

    cout<<"====================After Insert=========================="<<endl;
    link *address11 = new link();										// create new object address 11
	address11->data = 110;												// assign value to address 11
	address1->next = address11;											// assign address 11 to next address 1
	address11->next = address2;											// assign address 2 to next address 11
	s->displayAll(address1);
    return 0; // excecute main function by return fasle
}