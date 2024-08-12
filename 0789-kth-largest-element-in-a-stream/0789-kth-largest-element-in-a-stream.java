class KthLargest {
    PriorityQueue<Integer> pq;
    int k_size;

    public KthLargest(int k, int[] nums) {
        k_size = k;
        pq = new PriorityQueue<>(k);

        for(int n : nums)
        {
            pq.offer(n);
            if(pq.size()>k_size)
            {
                pq.poll();
            }
        }
    }
    
    public int add(int val) {
         
            pq.offer(val);
            if(pq.size()>k_size)
            {
                pq.poll();
            }
        return pq.peek();
    }
}

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest obj = new KthLargest(k, nums);
 * int param_1 = obj.add(val);
 */