# C. Turtle Fingers: Count the Values of k


## You are given three positive integers a, b and l (a,b,l>0).

It can be shown that there always exists a way to choose non-negative (i.e. ≥0) integers k, x, and y such that 

$$ l=k⋅ax⋅by. $$

Your task is to find the number of distinct possible values of k across all such ways.

### Input
The first line contains the integer t (1≤t≤ 10^4 ) — the number of test cases.

The following t lines contain three integers, a, b and l (2 ≤a,b≤100, 1≤l≤106) — description of a test case.

### Output
Output t lines, with the i-th (1≤i≤t) line containing an integer, the answer to the i-th test case.



input
```
11
2 5 20
2 5 21
4 6 48
2 3 72
3 5 75
2 2 1024
3 7 83349
100 100 1000000
7 3 2
2 6 6
17 3 632043
```
output
```
6
1
5
12
6
11
24
4
1
3
24
```
