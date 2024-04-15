//
// Created by YUAN on 2024/4/15.
//


//暴力
class MyHashMap {
public:
    vector<int> hashTable;
    MyHashMap() {
        const int N = 1000001;
        hashTable = vector<int>(N, -1);
    }

    void put(int key, int value) {
        hashTable[key] = value;
    }

    int get(int key) {
        if(hashTable[key] != -1)
            return hashTable[key];
        return -1;
    }

    void remove(int key) {
        hashTable[key] = -1;
    }
};

//链地址法
class MyHashMap {
private:
    vector<list<pair<int, int>>> data;
    static const int base = 769;
    static int hash(int key) {
        return key % base;
    }
public:
    MyHashMap(): data(base) {}

    void put(int key, int value) {
        int h = hash(key);
        for (auto it = data[h].begin(); it != data[h].end(); it++) {
            if ((*it).first == key) {
                (*it).second = value;
                return;
            }
        }
        data[h].push_back(make_pair(key, value));
    }

    int get(int key) {
        int h = hash(key);
        for (auto it = data[h].begin(); it != data[h].end(); it++) {
            if ((*it).first == key) {
                return (*it).second;
            }
        }
        return -1;
    }

    void remove(int key) {
        int h = hash(key);
        for (auto it = data[h].begin(); it != data[h].end(); it++) {
            if ((*it).first == key) {
                data[h].erase(it);
                return;
            }
        }
    }
};