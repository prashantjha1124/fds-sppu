#include <iostream>
#include <cstring>

using namespace std;

// Data structure for student information i.e., node
struct node {
    int prn;
    char name[20];
    node *next;
};

class panclub {
    int num, cnt;
    char nm[20];  // Data members
    node *head;   // pointing to the first node

public:
    panclub() { // Constructor to initialize the object
        num = cnt = 0;
        head = NULL;
    }

    node *create();
    void display(node *);
    node *concat(node *, node *);  // Member functions with arguments
    void reverse(node *);
    node* insert_president(node *);
    void insert_sec(node *);
    void insert_member(node *);
    node* del_president(node *);
    node* del_secretary(node *);
    node* del_member(node *);
};

// To create the list of divisions.
node* panclub::create() {
    node *temp, *n1;
    temp = n1 = NULL;

    cout << "\nHow many students' data do you want to insert in the panclub database: ";
    cin >> cnt;
    
    while (cnt > 0) {
        n1 = new node; // Allocate memory for all fields of struct
        cout << "\nEnter the PRN number of the student: ";
        cin >> num;
        n1->prn = num; // storing the prn in node field prn
        
        cout << "\nEnter the name of the student: ";
        cin >> nm;
        strcpy(n1->name, nm); // Storing the name in node field name
        
        n1->next = NULL; // making the next field null
        if (head == NULL) { // check if head is empty
            head = n1;   // make new node as head
            temp = head;
        } else {
            temp = head;
            while (temp->next != NULL) { // attach at the end of list
                temp = temp->next;
            }
            temp->next = n1;
        }
        cnt--;
    }

    return head;
}

void panclub::display(node *head) { // Display the list of both divisions
    node *temp;
    temp = head;
    while (temp != NULL) {
        if (temp->next == NULL) {
            cout << "[" << temp->prn << "|" << temp->name << "]->NULL";
        } else {
            cout << "[" << temp->prn << "|" << temp->name << "]->";
        }
        temp = temp->next;
    }
}

node* panclub::concat(node *head1, node *head2) { // To concatenate both the divisions' data in one list
    node *temp;
    if (head1 == NULL) return head2;
    if (head2 == NULL) return head1;

    temp = head1;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = head2;
    return head1;
}

void panclub::reverse(node *head) {
    if (head == NULL)
        return;
    reverse(head->next);
    cout << "[" << head->prn << "|" << head->name << "]->";
}

node* panclub::insert_president(node *head) {
    node *n2 = new node;
    cout << "\nEnter the PRN number of President: ";
    cin >> n2->prn;
    cout << "\nEnter the name of President: ";
    cin >> n2->name;
    n2->next = head;
    head = n2;
    return head;
}

void panclub::insert_member(node *head) {
    node *temp, *n2;
    int pn;
    temp = head;
    n2 = new node;
    cout << "\nEnter the PRN number of Member: ";
    cin >> n2->prn;
    cout << "\nEnter the name of Member: ";
    cin >> n2->name;
    n2->next = NULL;
    cout << "\nEnter the PRN number after which you want to add this member: ";
    cin >> pn;
    while (temp != NULL) {
        if (temp->prn == pn) {
            n2->next = temp->next;
            temp->next = n2;
            break;
        }
        temp = temp->next;
    }
    cout << "\n\nMember added successfully…!!";
}

void panclub::insert_sec(node *head) {
    node *temp = head;
    node *n2 = new node;
    cout << "\nEnter the PRN number of Secretary: ";
    cin >> n2->prn;
    cout << "\nEnter the Name of Secretary: ";
    cin >> n2->name;
    n2->next = NULL;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = n2;
}

// Delete the president node from the list
node* panclub::del_president(node *head) {
    if (head == NULL) return NULL;
    node *temp = head;
    head = head->next;
    delete temp;
    return head;
}

// Delete the secretary node from the list
node* panclub::del_secretary(node *head) {
    if (head == NULL || head->next == NULL) return NULL;
    node *temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
    return head;
}

// Delete the member from the list
node* panclub::del_member(node *head) {
    int pn;
    cout << "\nEnter the PRN number of the member to delete: ";
    cin >> pn;
    node *temp = head;
    node *prev = NULL;
    
    while (temp != NULL && temp->prn != pn) {
        prev = temp;
        temp = temp->next;
    }
    
    if (temp == NULL) {
        cout << "Member with PRN " << pn << " not found." << endl;
        return head;
    }
    
    if (prev == NULL) {
        head = temp->next; // The member to be deleted is the head
    } else {
        prev->next = temp->next; // Bypass the node to delete it
    }
    
    delete temp;
    cout << "Member with PRN " << pn << " deleted successfully." << endl;
    return head;
}

int main() {
    panclub club;
    node *division1, *division2, *mergedList;

    // Creating and displaying first division
    division1 = club.create();
    cout << "First Division: ";
    club.display(division1);
    cout << endl;

    // Creating and displaying second division
    division2 = club.create();
    cout << "Second Division: ";
    club.display(division2);
    cout << endl;

    // Concatenating and displaying merged list
    mergedList = club.concat(division1, division2);
    cout << "Merged List: ";
    club.display(mergedList);
    cout << endl;

    // Reversing and displaying list
    cout << "Reversed List: ";
    club.reverse(mergedList);
    cout << "NULL" << endl;

    // Inserting president, member, and secretary, then displaying list
    mergedList = club.insert_president(mergedList);
    club.insert_member(mergedList);
    club.insert_sec(mergedList);
    cout << "List after insertions: ";
    club.display(mergedList);
    cout << endl;

    // Deleting president, member, and secretary, then displaying list
    mergedList = club.del_president(mergedList);
    mergedList = club.del_member(mergedList);
    mergedList = club.del_secretary(mergedList);
    cout << "List after deletions: ";
    club.display(mergedList);
    cout << endl;

    return 0;
}
