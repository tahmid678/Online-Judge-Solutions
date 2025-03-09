// Linked List Node Structure
struct Node {
    int val;
    Node* next = NULL;
};

class MyLinkedList {
private:
    Node* head;
    int size = 0;

public:
    MyLinkedList() { head = NULL; }

    int get(int index) {
        Node* node = head;
        int i = 0, result = -1;

        if (index >= size) {
            return -1;
        }

        while (node) {
            if (i == index) {
                result = node->val;
                break;
            }
            i++;
            node = node->next;
        }
        return result;
    }

    void addAtHead(int val) {
        Node* newNode = new Node();
        newNode->val = val;
        newNode->next = head;
        head = newNode;
        size++;
    }

    void addAtTail(int val) {
        Node* node = head;
        Node* newNode = new Node();
        newNode->val = val;

        if (!head) {
            head = newNode;
        } else {
            while (node->next) {
                node = node->next;
            }
            node->next = newNode;
        }
        size++;
    }

    void addAtIndex(int index, int val) {
        if (index > size) {
            return;
        }

        Node* newNode = new Node();
        newNode->val = val;
        int i = 0;

        if (index == 0) {
            newNode->next = head;
            head = newNode;
        } else {
            Node* node = head;
            while (node) {
                if (i == index - 1) {
                    Node* tempNode = node->next;
                    node->next = newNode;
                    newNode->next = tempNode;
                    break;
                }
                node = node->next;
                i++;
            }
        }
        size++;
    }

    void deleteAtIndex(int index) {
        int i = 0;

        if (index >= size) {
            return;
        } else if (index == 0) {
            Node* node = head;
            head = head->next;
            delete node;
        } else {
            Node* node = head;
            while (node) {
                if (i == index - 1) {
                    Node* freeNode = node->next;
                    node->next = freeNode->next;
                    delete freeNode;
                    break;
                }
                node = node->next;
                i++;
            }
        }
        size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
