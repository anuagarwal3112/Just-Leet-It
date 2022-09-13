/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseEvenLengthGroups(ListNode* head) {

        if(head==NULL || head->next==NULL)
            return head;
        vector<int>v;
        while(head!=NULL)
        {
            v.push_back(head->val);
            head=head->next;
        }

        //Reverse the Array in each group with an even length
        int i,k=0,j=0;
        for(i=0;i<v.size();i=i+k)
        {
            k++;
            j++;
            if(j%2!=0)
                continue;
            if(i+k > v.size())
                break;
            reverse(v.begin()+i,v.begin()+i+k);
        }
        int n=v.size();
        if(i>n)
        {
            i=i-k;
            if((n-i)%2==0)
                reverse(v.begin()+i,v.end());
        }
        else if(i<n)
        {
            if((n-i)%2==0)
                reverse(v.begin()+i,v.end());
        }
        //making linked list with modified Array

        ListNode* ans=new ListNode(v[n-1]);
        for(int i=n-2;i>=0;i--)
        {
            ListNode* node=new ListNode(v[i]);
            node->next=ans;
            ans=node;
        }
        return ans;
    }
};