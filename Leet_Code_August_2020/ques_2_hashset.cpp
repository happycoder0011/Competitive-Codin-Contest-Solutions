LeetCode
Explore
Problems
Mock
Contest
Articles
Discuss
 Store
 Premium
New Playground
8
Sheetalssr
  Back to Chapter
  Design HashSet
Design a HashSet without using any built-in hash table libraries.

To be specific, your design should include these functions:

add(value): Insert a value into the HashSet.
contains(value) : Return whether the value exists in the HashSet or not.
remove(value): Remove a value in the HashSet. If the value does not exist in the HashSet, do nothing.

Example:

MyHashSet hashSet = new MyHashSet();
hashSet.add(1);
hashSet.add(2);
hashSet.contains(1);    // returns true
hashSet.contains(3);    // returns false (not found)
hashSet.add(2);
hashSet.contains(2);    // returns true
hashSet.remove(2);
hashSet.contains(2);    // returns false (already removed)

Note:

All values will be in the range of [0, 1000000].
The number of operations will be in the range of [1, 10000].
Please do not use the built-in HashSet library.
C++
1
class MyHashSet {
2
public:
3
     int arr[1000001]={0};
4
    /** Initialize your data structure here. */
5
    MyHashSet() {
6

7
    }
8

9
    void add(long long int key) {
10

11
        arr[key]++;
12

13
    }
14

15
    void remove(long long int key) {
16
      arr[key]=0;
25
    }
26

27
    /** Returns true if this set contains the specified element */
28
    bool contains(long long int key) {
29

31
    if(arr[key]!=0)
32
        return true;
33
        else
34
        return false;
35
    }
36
};
37
​
38
/**
39
 * Your MyHashSet object will be instantiated and called as such:
40
 * MyHashSet* obj = new MyHashSet();
41
 * obj->add(key);
42
 * obj->remove(key);
43
 * bool param_3 = obj->contains(key);
44
 */
  Custom Testcase( Contribute  )
