#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include<iostream>
#include<fstream>
#include <exception>
using namespace std;

class library {
	
private:
	struct Node   
	{
		int id;
		string name;
		string author;
		string publisher;
		int quantity;
		Node* next_add;
	};
	
private:	
	struct Stack   
	{
		string student_name;
		int book_id;
		Stack* next;
	};
	
private:	
	struct Queue   
	{
		string student_name;
		int book_id;
		Queue* next;
	};

public:

	Node* start = NULL;
	Stack* top = NULL;
	Queue* front = NULL;
	Queue* rear = NULL;
	Queue* temp;
	
	void menu();

	void insert();
	
	void search();
	
	void update();
	
	void deletion();
	
	void sort();

	void show();

	void faculty();

	void contact();

	void smen();

	void admin();

	void student();
	
	void Issue_Book();
	
	void Return_Book();
	
	void list_of_issuance();
	
	void show_available_Books();
	
	void push(int bookid,string student_name);
	
	void enqueue(int book_id,string student_name);
	
	void dequeue();
	
	void list_of_queue();
	
	bool isempty();

};

void library::admin() {

	cout << " Hey, Admin. Welcome Back!. ";
	cout << endl;
	cout << "You have access to all of the following modules: " << endl;
	cout << "\n\n";

	cout << "----------------------------------------------- \n";
	cout << "|1. | Insert New Record                        |" << endl;
	cout << "|2. | Search Records                           |" << endl;
	cout << "|3. | Updation of the Records                  |" << endl;
	cout << "|4. | Delete Records                           |" << endl;
	cout << "|5. | Show all of the Records                  |" << endl;
	cout << "|6. | Exit                                     |" << endl;
	cout << "|7. | Sort                                     |" << endl;
	cout << "|8. | View Faculty Members                     |" << endl;
	cout << "|9. | Contact Whatsapp or Telephone            |" << endl;
	cout << "|10.| List of Issuance                         |" << endl;
	cout << "|11.| Logout                                   |" << endl;
	cout << "----------------------------------------------- \n";

	library::smen();
}

void library::student() {

p:
	cout << "Since you have logged in as student, you can only have access to the following modules\n";
	cout << "\n\n";

	cout << "-----------------------------------------------\n";
	cout << "|1.Faculty Members                               |" << endl;
	cout << "-----------------------------------------------\n";
	cout << "|2.Contact Whatsapp or Telephone                 |" << endl;
	cout << "-----------------------------------------------\n";
	cout << "|3.Issue Book                                    |" << endl;
	cout << "-----------------------------------------------\n";
    cout << "|4.Return Book                                   |" << endl;
	cout << "-----------------------------------------------\n";
	cout << "|5.List of Available Books                       |" << endl;
	cout << "-----------------------------------------------\n";
	cout << "|6.Logout                                        |" << endl;
	cout << "-----------------------------------------------\n";

	cout << "What do you want to do? Enter your choice." << endl;
	int us;
	cin >> us;

	if (us == 1) {

		cout << "-----------------------------------------------\n";
		cout << "|1.Faculty Members                             |" << endl;
		cout << "-----------------------------------------------\n";

		library::faculty();

	}
	else if (us == 2) {

		cout << "----------------------------------------------\n";
		cout << "|2. Contact Telephone                         |" << endl;
		cout << "----------------------------------------------\n";

		library::contact();

	}
		else if (us == 3) {

		cout << "---------------------------------------------\n";
		cout << "|3. Issue books                    |" << endl;
		cout << "---------------------------------------------\n";
		library::Issue_Book();
	}	
		else if (us == 4) {

		cout << "---------------------------------------------\n";
		cout << "|4. Return books                    |" << endl;
		cout << "---------------------------------------------\n";

		library::Return_Book();
	}

		else if (us == 5) {

		cout << "---------------------------------------------\n";
		cout << "|5. Show all of the books                    |" << endl;
		cout << "---------------------------------------------\n";

		library::show_available_Books();
	}else if(us==6)
	{
		menu();	
	}

	else {

		cout << "Invalid Choice, Try Again." << endl;
		goto p;
	}
}



void library::smen() {

u:

	cout << "   ------------------------------------------------ \n";
	cout << "   |             LIBRARY MANAGEMENT SYSTEM        | \n";
	cout << "   -----------------------------------------------\n";


	cout << "\n\n";

	cout << "----------------------------------------------- \n";
	cout << "|1. | Insert New Record                        |" << endl;
	cout << "|2. | Search Records                           |" << endl;
	cout << "|3. | Updation of the Records                  |" << endl;
	cout << "|4. | Delete Records                           |" << endl;
	cout << "|5. | Show all of the Records                  |" << endl;
	cout << "|6. | Exit                                     |" << endl;
	cout << "|7. | Sort                                     |" << endl;
	cout << "|8. | View Faculty Members                     |" << endl;
	cout << "|9. | Contact Whatsapp or Telephone            |" << endl;
	cout << "|10.| List of Issuance                         |" << endl;
	cout << "|11.| Logout                                   |" << endl;
	cout << "----------------------------------------------- \n";
	cout << "\n\n Enter your choice:";

	int userin;
	cin >> userin;

	switch (userin) {
	case 1:
		insert();
		break;
	case 2:
		search();
		break;
	case 3:
		update();
		break;
	case 4:
		deletion();
		break;
	case 5:
		show();
		break;
	case 6:
		exit(0);
		break;
	case 7:
		cout << "NOT AVAILABLE";
		break;
	case 8:
		faculty();
		break;
	case 9:
		contact();
		break;
	case 11:
		menu();
		break;
	default:
		cout << " \n Program Exited Successfully. \n";
	}

}

void library::contact() {

	int feed;
	string feedback;

	cout << "\n Welcome to The Contact Zone of the Library." << endl;
	cout << "\n You can contact us if you wish to or leave any feedback if you want." << endl;

	cout << " For Feedback, Press 1" << endl;
	cin >> feed;

	cout << "\n What do you want to communicate about?" << endl;
	cout << " \n Write: " << endl;
	cin >> feedback;

	cout << " Contact on whatsapp : \n" << endl;

	cout << "\n CEO: +9234547789124" << endl;
	cout << "\n COO: +8741214945148" << endl;
	cout << "" << endl;

	cout << "Landline Number" << endl;
	cout << "023-3369587" << endl;
	cout << "\n" << endl;

	cout << "\nFor Email Repository: Contact us @" << endl;
	cout << "\n\n librarymanager@google.edu.pk.uog" << endl;

	cout << "\n\n Press 0 to exit program";

}

void library::faculty() {

	int choice1;
	cout << " ............................. " << endl;
	cout << ".............................." << endl;
	cout << "LIBRARY MANAGEMENT SYSTEM" << endl;
	cout << "..............................." << endl;

	cout << "We are here to proudly present to you about our library management system.\n\n\n\n\n This system is going to help us through the various sections of a library." << endl;

	cout << "The faculty members of the Library are" << endl;

	cout << "\nFounder: Dr. Akram" << endl;
	cout << "\nCEO: VC Ali" << endl;
	cout << "\nCFO: Dr. Abdul Rehman" << endl;
	cout << "\nIncharge: Dr. Zakir" << endl;
	cout << "\nManager: Bilal" << endl;
	cout << "\nBook Handler: Miss Farzana" << endl;
	cout << "\nDirector: Mr. Rashid" << endl;
	cout << "\nSection Head: Mr. Tayyab" << endl;
	cout << "\nCheif Officer: Dr. Mehmood" << endl;
	cout << "\nHead of Team: Mr. Ali Zia" << endl;

	cout << "\nIf you want to quit the program, Press 0 to Exit\n Enter any number to continue." << endl;

	cin >> choice1;

	if (choice1 == 0) {

		exit(0);

	}

	else {

		library::menu();

	}

}

void library::menu() {

	int tries;
	int login;

	int cho;
l:

	cout << "	    --------------------------------------------" << endl;
	cout << "	|         LIBRARY MANAGEMENT SYSTEM        | " << endl;
	cout << "	    --------------------------------------------";

	cout << "\n";

	cout << "       ------------------------------------------- \n";
	cout << "       |        WELCOME TO THE LIBRARY            | \n";
	cout << "       |              LOGIN PANEL                 | \n";
	cout << "       |        ENTER YOUR CREDENTIALS            | \n";
	cout << "       |                                          | \n";
	cout << "       |CHOOSE YOUR NEXT MOVE                     | \n";
	cout << "       |1.LOGIN-ADMIN                             | \n";
	cout << "       |2.LOGIN-STUDENT                           | \n";
	cout << "       |3.EXIT                                    | \n";
	cout << "       -------------------------------------------\n";

 try{
 
	cout << "\n" << endl;

	cout << "Your choice is: ";

	cin >> cho;
	
	if(std::cin.fail())
	{
		throw 1;
	}
}catch(int e)
{
	cout<<"Invalid DataType";
	exit(0);
}
	cout << endl;
	
	switch (cho) {


	case 1:

		system("cls");
		cout << "     ------------------------------------------- \n";
		cout << "	  |         LIBRARY MANAGEMENT SYSTEM        | \n";
		cout << "	  --------------------------------------------\n";

		goto p;

	case 2:

		library::student();

	case 3:

		exit(0);

	default:
		goto l;

	}

p:
	int choice;

	char pw[100];

	int k = 0;

	string userName;

	string up;

	int loginAttempt = 0;

	while (loginAttempt < 5)
	{
		cout << "	    --------------------------------------------" << endl;
		cout << "	   |       ADMIN PANEL: USERNAME & PASSWORD    | " << endl;
		cout << "	    --------------------------------------------";

		cout << endl;
		cout << "Please enter ADMIN user name: " << endl;
		cin >> userName;

		string pass = "";
		char ch;

		cout << "Enter password: ";
		ch = _getch();

		while (ch != 13) {            //character 00147 is enter
			pass.push_back(ch);
			cout << '*';
			ch = _getch();
		}

		if (pass == "LIBRARY" && userName == "ADMIN" || pass == "library" && userName == "admin" || pass == "password" && userName == "username" || pass == "ABC" && userName == "XYZ" || pass == "kid" && userName == "star")
		{

			cout << "\nAccess granted :P \n";
			system("cls");

			goto o;
		}


		else {

			cout << "\nAccess aborted...\n";
			cout << " TRY AGAIN" << endl;
			system("cls");

			loginAttempt++;
			goto l;
		}

	}

	while (loginAttempt == 5)
	{
		system("cls");
		cout << "Too many login attempts! The program will now terminate." << endl;
		exit(0);
	}



o:

	cout << "   ------------------------------------------------ \n";
	cout << "   |             LIBRARY MANAGEMENT SYSTEM        | \n";
	cout << "   -----------------------------------------------\n";


	cout << "\n\n";

	cout << "----------------------------------------------- \n";
	cout << "|1. | Insert New Record                        |" << endl;
	cout << "|2. | Search Records                           |" << endl;
	cout << "|3. | Updation of the Records                  |" << endl;
	cout << "|4. | Delete Records                           |" << endl;
	cout << "|5. | Show all of the Records                  |" << endl;
	cout << "|6. | Exit                                     |" << endl;
	cout << "|7. | Sort                                     |" << endl;
	cout << "|8. | View Faculty Members                     |" << endl;
	cout << "|9. | Contact Whatsapp or Telephone            |" << endl;
	cout << "|10.| List of Issuance                         |" << endl;
	cout << "|11.| List of Students in Queue                |" << endl;
	cout << "|12.| Logout                                   |" << endl;
	cout << "----------------------------------------------- \n";
	cout << "\n\n Enter your choice:               ";
	cin >> choice;

	switch (choice) {
	case 1:
		insert();
		break;
	case 2:
		search();
		break;
	case 3:
		update();
		break;
	case 4:
		deletion();
		break;
	case 5:
		show();
		break;
	case 6:
		exit(0);
		break;
	case 7:
		cout << "NOT AVAILABLE";
		break;
	case 8:
		faculty();
		break;
	case 9:
		contact();
		break;
	case 10:
		list_of_issuance();
		break;
	case 11:
		list_of_queue();
		break;
	case 12:
		menu();
		break;
	default:
		cout << " \n Program Exited Successfully. \n";
	}
}

void library::insert() {

	system("cls");

	cout << "\n   |----------------------------------------------| \n";
	cout << "\n   |             LIBRARY MANAGEMENT SYSTEM        | \n";
	cout << "\n   |----------------------------------------------| \n";
	cout << "\n   |INSERTION OF BOOK IN SYSTEM:                  | \n";
	cout << "\n   ------------------------------------------------\n";


	Node* new_node = new Node;
		
	try{
		
	cout << "\n Book ID: ";
	cin >> new_node->id;
	if(std::cin.fail())
	{
		throw 1;
	}
}
catch(int err)
{
	cout<<"Invalid DataType"<<endl;
	exit(0);
}
    
	cout << "\n Name: ";
	cin >> new_node->name;
	cout << "\n Author Name: ";
	cin >> new_node->author;
	cout << "\n Publisher Name: ";
	cin >> new_node->publisher;
	cout << "\n Enter Quantity: ";
	cin >> new_node->quantity;
	new_node->next_add = NULL;
	

	//writing into file
	
	 fstream FileName;                       
    FileName.open("C:/Users/Muneeb/Desktop/PF LAB/FileName.txt", ios::binary|ios::out|ios::app);       //path of file         
    FileName.seekg(0);
	if (!FileName) {                            
        cout<<" Error while creating the file ";          
    }
    else {
        cout<<"File created and data got written to file";    
        FileName<<endl<<endl<<"Book Id : "<<new_node->id<<endl;
		FileName<<"Book Name :"<<new_node->name<<endl;
		FileName<<"Book Author : "<<new_node->author<<endl;
		FileName<<"Book Publisher : "<<new_node->publisher<<endl;
		FileName<<"Total Quantity : "<<new_node->quantity; 
        FileName.close();                   
    }


	if (start == NULL) {
		start = new_node;

	}
	else {

		Node* ptr = start;   // for traversing 
		while (ptr->next_add != NULL) {

			cout << "BookId : " << ptr->id;
			cout << endl;
			cout << "\n Book Name: " << ptr->name;
			cout << endl;
			cout << "\n Author Name:" << ptr->author;
			cout << endl;
			cout << "\n Publisher Name : " << ptr->publisher;
			cout << endl;
			cout << "\n Quantity : "<<ptr->quantity;
			cout << endl;
			cout << "\n ...................................................................................... ";

			ptr = ptr->next_add;
		}
		ptr = new_node;
	}


	cout << "     ------------------------------------------------- \n";
	cout << "\n   |                                               | \n";
	cout << "\n   |             THANK YOU FOR YOUR TIME           | \n";
	cout << "\n   |  BOOK INSERTED SUCCESSFULLY, RECEIVE RECEIPT  | \n";
	cout << "\n   |                                               | \n";
	cout << "\n   -------------------------------------------------\n";

	cout << "\n\n\n";

	cout << "-------------------------------" << endl;
	cout << "|-| Book Identity Number-ID:  |" << new_node->id << endl;
	cout << "|-|                           |" << endl;
	cout << "|-| Name of Book:             |" << new_node->name << endl;
	cout << "|-|                           |" << endl;
	cout << "|-| Author's Name:            |" << new_node->author << endl;
	cout << "|-|                           |" << endl;
	cout << "|-| Publishing Authority:     |" << new_node->publisher << endl;
	cout << "|-|                           |" << endl;
	cout << "|-| Total Quantity :          |" << new_node->quantity << endl;
	cout << "|-|                           |" << endl;
	cout << "|-| Book Insertion Completed Successfully|" << endl;
	cout << "------------------------------ \n";

	cout << "\n\n\n\n";

	library::smen();
	


};

void library::search() {

	system("cls");

	cout << "\n   |----------------------------------------------| \n";
	cout << "\n   |             LIBRARY MANAGEMENT SYSTEM        | \n";
	cout << "\n   |----------------------------------------------| \n";
	cout << "\n   |SEARCHING OF BOOK IN SYSTEM:                  | \n";
	cout << "\n   -----------------------------------------------\n";


	int t_id;            // for id finding
	int found = 0;


	if (start == NULL)
	{
		cout << "\n Linked List is Empty";

	}
	else {

		cout << "\n  Book ID: ";
		cin >> t_id;
		Node* ptr = start;
		while (ptr != NULL) {
			if (t_id == start->id) {
				system("cls");

				cout << "BookId : " << ptr->id;
				cout << "\n Book Name: " << ptr->name;
				cout << endl;
				cout << "\n Author Name:" << ptr->author;
				cout << endl;
				cout << "\n Publisher Name : " << ptr->publisher;
				cout << endl;
				cout << "\n Total Quantity : " << ptr->quantity;
				found++;
				break;

			}
			ptr = ptr->next_add;
		}
		if (found == 0) {
			cout << "\n Book Id is Invalid. ";

		}
	}
}

void library::update() {

	system("cls");

	cout << "\n   |----------------------------------------------| \n";
	cout << "\n   |             LIBRARY MANAGEMENT SYSTEM        | \n";
	cout << "\n   |----------------------------------------------| \n";
	cout << "\n   |UPDATION OF BOOK IN SYSTEM:                   | \n";
	cout << "\n   -----------------------------------------------\n";

	int t_id;            // for id finding
	int found = 0;
	

	if (start == NULL)
	{
		cout << "\n Linked List is Empty";

	}
	else {
		cout << "\n  Book ID: ";
		cin >> t_id;
		Node* ptr = start;
		while (ptr != NULL) {
			if (t_id == ptr->id) {
				system("cls");
				
				
				cout << "BookId : ";
				cin >> ptr->id;
				cout << "\n Book Name: ";
				cin >> ptr->name;
				cout << endl;
				cout << "\n Author Name:";
				cin >> ptr->author;
				cout << endl;
				cout << "\n Publisher Name : ";
				cin >> ptr->publisher;
				cout << "\n Total Quantity : ";
				cin >> ptr->quantity;
				found++;
				cout << endl;
				cout << "Book Updation Successful";
		
			}
			ptr = ptr->next_add;
		}
		if (found == 0) {
			cout << "\n Book Id is Invalid. ";

		}
	}
}

void library::deletion() {

	system("cls");

	cout << "\n   |----------------------------------------------| \n";
	cout << "\n   |             LIBRARY MANAGEMENT SYSTEM        | \n";
	cout << "\n   |----------------------------------------------| \n";
	cout << "\n   |DELETION OF BOOK IN SYSTEM:                   | \n";
	cout << "\n   -----------------------------------------------\n";



	int t_id;            // for id finding
	int found = 0;


	if (start == NULL)
	{
		cout << "\n Linked List is Empty";

	}
	else {

		cout << "\n  Book ID: ";
		cin >> t_id;

		if (t_id == start->id)
		{
			Node* ptr = start;
			start = start->next_add;
			delete ptr;

			cout << " Deletion Successful";
			found++;
		}
		else {
			Node* pre = start;
			Node* ptr = start;
			while (ptr != NULL) {

				if (t_id == ptr->id)
				{
					pre->next_add = ptr->next_add;
					delete ptr;

					cout << " Deletion Succesful";
					found++;
					break;

				}
				pre = ptr;
				ptr = ptr->next_add;

			}
		}
		if (found == 0) {

			cout << "\nBook Id Invalid";
		}
	}
}

void library::sort() {

	int count = 0, t_id,t_quantity;
	string t_name, t_author, t_publisher;

	if (start == NULL)
	{
		system("cls");
		cout << "Linked list is empty";
		system("pause");


		// go back to menu   
		menu();
	}

	Node* ptr = start;
	// counting size

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next_add;

	}
	for (int i = 1; i <= count; i++)
	{
		Node* ptr = start;
		for (int j = 1; j < count; j++)
		{
			if (ptr->id > ptr->next_add->id) // since it points to the next ptr, it will compare these two
			{
				t_id = ptr->id;
				t_name = ptr->name;
				t_author = ptr->author;               // stored into temporary variables 
				t_publisher = ptr->publisher;
				t_quantity =ptr->quantity;

				ptr->id = ptr->next_add->id;
				ptr->name = ptr->next_add->name;
				ptr->author = ptr->next_add->author;           // data into current nodes
				ptr->publisher = ptr->next_add->publisher;
				ptr->quantity  = ptr->next_add->quantity;


				ptr->next_add->id = t_id;
				ptr->next_add->name = t_name;              // save data into next nodes
				ptr->next_add->author = t_author;
				ptr->next_add->publisher = t_publisher;
				ptr->next_add->quantity = t_quantity;
			}
			ptr = ptr->next_add;

		}
	}
}



void library::show() {

	system("cls");

	cout << "  |----------------------------------------------| \n";
	cout << "  |             LIBRARY MANAGEMENT SYSTEM        | \n";
	cout << "  |----------------------------------------------| \n";
	cout << "  |DISPLAYING OF BOOK IN SYSTEM:                 | \n";
	cout << "  -----------------------------------------------\n";
 
	Node* ptr = start;

	while (ptr != NULL ) {

       cout << "BookId : " << ptr->id;
		cout << endl;

		cout << "\n Book Name: " << ptr->name;
		cout << endl;

		cout << "\n Author Name:" << ptr->author;
		cout << endl;

		cout << "\n Publisher Name : " << ptr->publisher;
		cout << endl;
		
		cout << "\n Total Quantity : " << ptr->quantity;
		cout << endl;
		cout << "\n ...................................................................................... ";

		ptr = ptr -> next_add;

	}
	if(ptr==NULL){
		
		 fstream FileName;                   
    FileName.open("C:/Users/Muneeb/Desktop/PF LAB/FileName.txt", ios::in);         
    if (!FileName) {                        
        cout<<"File doesn’t exist.";          
    }
    else {
        char x;                     
        while (1) {         
            FileName>>x;              
            if(FileName.eof())          
                break;              
            cout<<x;                  
        }
    }
    FileName.close();
	}

}

void library::show_available_Books(){
	
	system("cls");

	cout << "  |----------------------------------------------| \n";
	cout << "  |           LIBRARY MANAGEMENT SYSTEM          | \n";
	cout << "  |----------------------------------------------| \n";
	cout << "  |     DISPLAYING OF AVAILABLE BOOK IN SYSTEM   | \n";
	cout << "  -----------------------------------------------\n";
 
	Node* ptr = start;

	while (ptr != NULL ) {
		
		if(ptr->quantity>0)
		{
		

        cout << "BookId : " << ptr->id;
		cout << endl;

		cout << "\n Book Name: " << ptr->name;
		cout << endl;

		cout << "\n Author Name:" << ptr->author;
		cout << endl;

		cout << "\n Publisher Name : " << ptr->publisher;
		cout << endl;
		
		cout << "\n Total Quantity : " << ptr->quantity;
		cout << endl;
		cout << "\n ...................................................................................... ";
		}
		ptr = ptr -> next_add;

	}

	
	
}

void library::Issue_Book()
{
	
	int t_id;
	string name;
	int found = 0;

	if (start == NULL)
	{
					
	fstream FileName;                   
    FileName.open("C:/Users/Muneeb/Desktop/PF LAB/FileName.txt", ios::in);         
    if (!FileName) {                        
        cout<<"File doesn’t exist.";          
    }
    else {
        char x;
		string data;                     
        while (1) {         
            FileName>>x;              
            if(FileName.eof())          
                break; 
			data+=x;
        }
        cout<<data;
    }
    FileName.close();
		
	}
	else {

		cout << "\n  Book ID: ";
		cin >> t_id;
		Node* ptr = start;
		while (ptr != NULL) {
			if (t_id == start->id) {
				system("cls");
				found++;
				if(start->quantity > 0)
					{
						cout<<"\Enter Your Name : "<<endl;
						cin>>name;
						cout<<"\n Book Issued Successfully ";
						start->quantity--;
						push(t_id,name);
						
						
					}
					else{
						cout << "\n Book not availabe you are added in queue ";
						enqueue(t_id,name);
					}
			}
			ptr = ptr->next_add;
		}
		if (found == 0) {
			cout << "\n Book Id is Invalid. ";

		}
	}
	   student();
	
}

void library::Return_Book()
{
	int t_id;
    int found = 0;


	if (start == NULL)
	{
		cout << "\n Linked List is Empty";

	}
	else {

		cout << "\n  Book ID: ";
		cin >> t_id;
		Node* ptr = start;
		while (ptr != NULL) {
			if (t_id == start->id) {
				system("cls");
				start->quantity++;
				if(!isempty())
				{
					dequeue();
					start->quantity--;
				}
				
				break;

			}
			ptr = ptr->next_add;
		}
		if (found == 0) {
			cout << "\n Book Id is Invalid. ";

		}
	}
	student();	
}


void library::push(int id,string name)
{
	Stack *ptr=new Stack();
	ptr->student_name=name;
	ptr->book_id=id;
	ptr->next=top;
	top=ptr;
}

void library::list_of_issuance()
{

if(top==NULL){
        cout<<"List is empty!"<<endl;
        return;
    }
    Stack *temp=top;
    while(temp!=NULL){
        cout<<"Student Name : "<<temp->student_name<<endl;
        cout<<"Book id : "<<temp->book_id<<endl;
        cout<<endl;
        temp=temp->next;
    }
    cout<<endl;
    smen();
}

void library::enqueue(int id,string stu_name)
{
	Queue *ptr=new Queue();
	ptr->student_name=stu_name;
	ptr->book_id=id;
	ptr->next=NULL;
	
	if(front==NULL)
	{
		front=ptr;
		rear=ptr;
	}
	else
	{
		rear->next=ptr;
		rear=ptr;
	}
}

void library::dequeue()
{
	string name;
	int id;

	 if(front==rear)
        {
        	
          temp=front;
          front = NULL;
          rear = NULL;  
          name= temp->student_name;
          id= temp->book_id;
          push(id,name);
          
        }
        else
        {
        	
          temp=front;
          front = front->next;  
          name= temp->student_name;
          id= temp->book_id;
          push(id,name);
          
        }
}

bool library::isempty()
{
	if(front==NULL && rear==NULL)
	{
		return true;
	}
	else{
		return false;
	}
}

void library::list_of_queue(){
	
	temp = front;
   if ((front == NULL) && (rear == NULL)) {
      cout<<"Queue is empty"<<endl;
      return;
   }
   cout<<"Queue elements are: ";
   while (temp != NULL) {
      cout<<temp->student_name<<" ";
      cout<<temp->book_id<<" ";
      temp = temp->next;
   }
   cout<<endl;
	
}


int main()
{
	library obj;
	obj.menu();

}

