class MyCircularQueue {
public:
    int front,rear,sz,len=0;
    vector<int>cq;
    
    MyCircularQueue(int k) {
         sz=k;
        front=0;
        rear=0;
        cq.assign(k,-1);
    }
    
   bool enQueue(int value)
    {
        if(isFull())
            return false;
 
        // increment size of the circular queue
        len++;
 
        cq[rear] = value;
 
        rear++;
 
        rear%=sz;
 
        return true;
    }
 
    bool deQueue()
    {   
        if(isEmpty())
            return false;
 
        // decrement size of the circular queue
        len--;
 
        cq[front] = -1;
 
        front = (front+1)%sz;
 
        return true;
 
    }
 
    int Front()
    {
        if(isEmpty())
            return -1;
 
        return cq[front];
    }
 
    int Rear()
    {
        if(isEmpty())
            return -1;
 
        int index = rear-1;
 
        if(index<0)
            index = index + sz;
 
        return cq[index];
    }
 
    bool isEmpty()
    {
        if(len==0)
            return true;
 
        return false;
    }
 
    bool isFull()
    {
        if(len==sz)
            return true;
 
        return false;
    }
};
