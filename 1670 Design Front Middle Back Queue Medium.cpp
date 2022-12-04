class FrontMiddleBackQueue {
    deque<int> a, b;
    void a2b() {
        if (a.size() <= b.size()) return;
        b.push_front(a.back());
        a.pop_back();
    }
    void b2a() {
        if (b.size() <= a.size() + 1) return;
        a.push_back(b.front());
        b.pop_front();
    }
public:
    FrontMiddleBackQueue() {}
    void pushFront(int val) {
        a.push_front(val);
        a2b();
    }
    void pushMiddle(int val) {
        a.push_back(val);
        a2b();
    }
    void pushBack(int val) {
        b.push_back(val);
        b2a();
    }
    int popFront() {
        if (a.empty() && b.empty()) return -1;
        int ans;
        if (a.empty()) {
            ans = b.front();
            b.pop_front();
        } else {
            ans = a.front();
            a.pop_front();
            b2a();
        }
        return ans;
    }
    int popMiddle() {
        if (a.empty() && b.empty()) return -1;
        int ans;
        if (a.size() == b.size()) {
            ans = a.back();
            a.pop_back();
        } else {
            ans = b.front();
            b.pop_front();
        }
        return ans;
    }
    int popBack() {
        if (a.empty() && b.empty()) return -1;
        int ans = b.back();
        b.pop_back();
        a2b();
        return ans;
    }
};
