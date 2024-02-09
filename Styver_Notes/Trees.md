# L1 Intro to Binary Trees

> Feb 10 2024

## Types of BT:
1. Full BT
    - Every node will either have 0 or 2 children
2. Complete
    - All levels are completely filled (except last)
    - The last level should have all data as left as possible
3. Perfect BT
    - All leaf nodes are at the same level
4. Balanced BT
    - Height of a node dcan be max Log(N)
5. Degenerate BT
    - Aka skewed 

# L2 BT representation in C++
> Feb 10 2024

![BT in cpp](image-10.png)

```cpp
struct Node{
    int data;
    int struct Node* left, right;
}

Node(int val){

    data = val;
    left=right=NULL;

}
```
```cpp
int main(){
    struct Node *root = new Node(1);
    root->left=new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(5);
}
```
![Alt text](image-11.png)
# L3 Java BT
# L4 BT traversal methods

### Traversal techiniques:  

    1. BFS: Breadth First Search
        1. Inorder Traversal
            ```
            left
            root
            right
            
            ```
        2. Preorder
        ```
            root
            left
            right
            
            ```
        3. Post order
    2. DFS: Depth First Search
        1.

# L5
# L6
# L7
# L8
# L9
# L10
# L11
# L12
# L13
# L14
# L15
# L16
# L17
# L18
# L19
# L20
# L21
# L22
# L23
# L24
# L25
# L26
# L27
# L28
# L29
# L30
# L31
# L32
# L33
# L34
# L35
# L36
# L37
# L38
# L39
# L40
# L41
# L42
# L43
# L44
# L45
# L46
# L47
# L48
# L49
# L50
# L51
# L52
# L53
