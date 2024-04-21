|Question|Answer/link|
|---|---|
|How to **predefine** a VECTOR size/value in cpp|[Link](#how-to-predefine-a-vector-length-in-cpp)|





# How to predefine a vector length in cpp

```cpp
vector<int> v1(5); // vector of size 5
vector<int> v2(5, 100); // vector of size 5 with all elements as 100
vector<int> v3{1, 2, 3, 4, 5}; // vector of size 5 with elements 1, 2, 3, 4, 5
```
```cpp
vector<vector<int>> v(5, vector<int>(5)); 
// 2D vector of size 5x5
```

```cpp
vector<vector<int>> v(5, vector<int>(5, 100)); 
// 2D vector of size 5x5 with all elements as 100
```

```cpp
vector<vector<int>> v{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
// 2D vector of size 3x3 with elements 1, 2, 3, 4, 5, 6, 7, 8, 9
```