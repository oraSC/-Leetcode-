/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

		//new һ��������ͷ
		ListNode head(-1);
		ListNode* p = &head;
		//λ�͡���λ
		int sum = 0;
		bool carry = false;

		//��ӹ���
		while (l1 || l2) {

			//��λ���
			if (l1) {
				sum += l1->val;
				l1 = l1->next;
			}
			if (l2) {
				sum += l2->val;
				l2 = l2->next;
			}
			sum += carry;

			//��ֵ��ע���λ
			ListNode* tmp = new ListNode(0);
			tmp->val = sum % 10;
			carry = sum >= 10 ? true : false;
			p->next = tmp;
			p = p->next;

			sum = 0;


		}

		//���н�λδ����
		if (carry) {
			ListNode* tmp = new ListNode(1);
			p->next = tmp;
			p = p->next;
		}

		return head.next;




	}
};

