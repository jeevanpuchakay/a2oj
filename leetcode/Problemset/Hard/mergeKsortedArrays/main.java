class ListNode {
    int val;
    ListNode next;

    ListNode() {
    }

    ListNode(int val) {
        this.val = val;
    }

    ListNode(int val, ListNode next) {
        this.val = val;
        this.next = next;
    }
}

class minHeap {
    ListNode[] data;
    int len;
    int maxLen;

    minHeap() {

    }

    minHeap(int k) {
        this.data = new ListNode[k];
        this.maxLen = k;
        this.len = 0;
    }

    void add(ListNode node) {
        this.data[this.len] = node;
        this.len += 1;
        int start = this.len - 1;
        while (start > 0) {
            if (this.data[start].val <= this.data[(start - 1) / 2].val) {
                // swap(this.data[start], this.data[(start - 1) / 2]);
                ListNode temp = this.data[start];
                this.data[start] = this.data[(start - 1) / 2];
                this.data[(start - 1) / 2] = temp;
                start = (start - 1) / 2;
            } else
                break;
        }
        return;
    }

    void delete() {
        int start = 0;
        this.data[0] = this.data[this.len - 1];
        this.len--;
        this.heapify();
        return;
    }

    void heapify() {
        int start = 0;
        while (2 * start + 2 < this.len) {
            if ((this.data[start].val >= this.data[2 * start + 1].val)
                    && (this.data[start].val >= this.data[2 * start + 2].val)) {
                if ((this.data[2 * start + 1].val >= this.data[2 * start + 2].val)) {
                    ListNode temp = this.data[start];
                    this.data[start] = this.data[2 * start + 2];
                    this.data[2 * start + 2] = temp;
                    start = 2 * start + 2;
                } else {
                    ListNode temp = this.data[start];
                    this.data[start] = this.data[2 * start + 1];
                    this.data[2 * start + 1] = temp;
                    start = 2 * start + 1;
                }
            } else if (this.data[start].val >= this.data[2 * start + 1].val) {
                // swap(this.data[start], this.data[2 * start + 1]);
                ListNode temp = this.data[start];
                this.data[start] = this.data[2 * start + 1];
                this.data[2 * start + 1] = temp;
                start = 2 * start + 1;
            } else if (this.data[start].val >= this.data[2 * start + 2].val) {
                // swap(this.data[start], this.data[2 * start + 2]);
                ListNode temp = this.data[start];
                this.data[start] = this.data[2 * start + 2];
                this.data[2 * start + 2] = temp;
                start = 2 * start + 2;
            } else
                break;
        }
        if(2*start+1<this.len){
            if (this.data[start].val >= this.data[2 * start + 1].val) {
                // swap(this.data[start], this.data[2 * start + 1]);
                ListNode temp = this.data[start];
                this.data[start] = this.data[2 * start + 1];
                this.data[2 * start + 1] = temp;
                start = 2 * start + 1;
            } 
        }
        return;
    }

}

class Solution {
    public ListNode mergeKLists(ListNode[] lists) {
        int k = lists.length;
        if (k == 0) {
            ListNode a = new ListNode();
            System.out.println("yes");
            return a.next;
        }
        minHeap bag = new minHeap(k);
        int start = 0;
        while (start < k) {
            if (lists[start] == null) {
                System.out.println("yes");
                start++;
                continue;
            }
            bag.add(lists[start]);
            start++;
        }
        if (bag.len == 0) {
            ListNode a = new ListNode();
            System.out.println("yes");
            return a.next;
        }
        ListNode ans = new ListNode(bag.data[0].val);
        if (bag.data[0].next == null) {
            bag.delete();
        } else {
            bag.data[0] = bag.data[0].next;
            bag.heapify();
        }
        ListNode temp = ans;
        while (bag.len > 0) {
            ListNode temp2 = new ListNode(bag.data[0].val);
            temp.next = temp2;
            temp = temp2;
            if (bag.data[0].next == null) {
                bag.delete();
            } else {
                bag.data[0] = bag.data[0].next;
                bag.heapify();
            }
        }
        return ans;
    }
}