int distributeTicket(int n, int k) {
  
        deque<int> dq;
        for(int i = 1; i <=n; i++){
            dq.push_back(i);
        }
        bool front = true;
        int count = k;
        while(dq.size() > 1){
            if(count > 0 and front == true){
                dq.pop_front();
                count--;
            }
            if(count == 0){
                front = !front;
                count = k;
            }
            if(count > 0 and front == false){
                dq.pop_back();
                count--;
            }
        }
        return dq.front();
    }
