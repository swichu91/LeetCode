#include <iostream>
#include <vector>
/*
 *
 * REVERSE LINKED LIST
 *
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* reverseList(ListNode* head) {

    if(head == NULL){
        return head;
    }

    ListNode* prev = NULL;
    ListNode* curr = head;
    ListNode* next = NULL;

    while(curr != NULL){

        next = curr->next;
        curr->next = prev; // actual reversing
        prev = curr;
        curr = next;

    }
    return prev;
}

/*
 *
 * FIBONACCI RECURSION
 *
 */

uint32_t fib_rec(uint32_t n){

    if((n == 0) || (n==1)){
        return n;
    }

    return fib_rec(n-2) + fib_rec(n-1);

}


/*
 * FIBONACCI ITERATIVE
 */

uint32_t fib_iter(uint32_t n){
    uint32_t prevprev = 0;
    uint32_t prev = 1;
    uint32_t curr = 0;

    if(n == 0){
        return prevprev;
    }
    for(uint32_t i =2; i<= n;i++){
        curr = prevprev + prev;
        prevprev = prev;
        prev = curr;
    }

    return prev;
}

#include <map>
#include <stack>
bool find_if_valid_parantheses(const std::string& string){
    std::map<char,char> mappings = {
            {')','('},
            {'}','{'},
            {']','['}
    };

    std::stack<char> stack;

    for(const auto& w : string) {

        if (mappings.find(w) == mappings.end()) {
            // Opening parantheses found
            stack.push(w);

        } else {
            // Closing parantheses found
            if (stack.empty()) {
                return false;
            }
            else{
                auto ele = stack.top();
                if(ele == mappings[w]){
                    stack.pop();
                }
                else{
                    return false;
                }
            }
        }

    }

    return stack.empty();
}

bool isPalindrome(int x) {
    auto str = std::to_string(x);

    int i = 0;
    int j = str.length()-1;

    while(i < j){
        if(str[i++] != str[j--]){
            return false;
        }
    }

    return true;

}

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

    ListNode* currl1 = l1;
    ListNode* currl2 = l2;
    uint32_t sum = 0;
    ListNode* currList = new ListNode(0);
    ListNode* retList = currList;
    while(currl1 != NULL || currl2 != NULL || sum>0){

        if(currl1) sum += currl1->val; currl1 = currl1->next;
        if(currl2) sum += currl2->val; currl2 = currl2->next;

        currList->next = new ListNode(sum%10);
        sum /=10;
        currList = currList->next;

    }

    return retList;
}

#include <iostream>
#include <string>
using namespace std;


class MyString{
public:

    MyString(const std::string& str):m_str(str){}

    MyString operator+ (const std::string& str){
        return MyString(m_str + str);
    }

    std::string retStr(){
        return m_str;
    }

    const char* c_str(){
        return m_str.c_str();
    }

private:
    std::string m_str;
};


struct MyData{
    MyData(const uint32_t nr, const std::string n):elo(nr),too(n){
        std::cout << "COnstructor\n";
    }
    ~MyData(){
        std::cout << "Destructor\n";
    }
    uint32_t elo;
    std::string too;
};

void Foo(const std::string  data){
    std::cout << data;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    Foo("hello");

/*    auto retfib = fib_rec(16);
    auto retfibit = fib_iter(16);

    const std::string test = "(}]{}";
    auto retpara = find_if_valid_parantheses(test);

    auto ispali = isPalindrome(-121);

    ListNode node1_1(2);
    ListNode node1_2(4);
    ListNode node1_3(3);
    node1_1.next = &node1_2;
    node1_2.next = &node1_3;

    ListNode node2_1(5);
    ListNode node2_2(6);
    ListNode node2_3(4);
    node2_1.next = &node2_2;
    node2_2.next = &node2_3;

    auto ret = addTwoNumbers(&node1_1,&node2_1);*/



    MyString mystr("Test");

    printf("String:%s\r\n", (mystr + "string").c_str());


    return 0;
}