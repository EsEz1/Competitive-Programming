/*
* The summation of numbers from 1 to n
*
* Suppose that you need to sum from 1 to 3
*
* 1 + 2 + 3 = 6
*
* You can use the following operation n * (n + 1) / 2 (n represents the number you need to reach it. From 1 to n).
*/

// For example:
int n;
cin >> n;
cout << n * (n + 1) / 2;


/*
* The summation of numbers from (1 power 2) to n power 2
*
* Suppose that you need to sum from (1 power 2) to (3 power 2)
*
* (1 power 2) + (2 power 2) + (2 power 3) = 13
*
* You can use the following operation n * (n + 1) * (2n + 1) / 6 (n represents the number you need to reach it. From 1 to n).
*/

// For example:
int n;
cin >> n;
cout << n * (n + 1) * (2 * n + 1) / 6;


/*
* An arithematic progression: is a sequence of numbers where the difference between any two consecutive numbers is constant
*
* For example: 1 3 5 7, i need to sum these numbers in one operation, 1 + 3 + 5 + 7 = 16 so how do you sum these?
*
* The meaning of (the difference between any two consecutive numbers is constant):
1 3 5 7 the difference between 1 and 3 is 2, 3 and 5 is 2, 5 and 7 is 2 so the difference is constant.
*
* You can use the following operation n * (a + b) / 2 (n represents the number of element so in this case, the number of elements is 4
  (a represents the first element of the numbers (1)) and finally (b reprsenets the last element of numbers (7)).
*/

// For example:
int a, b, c, d;
cin >> a >> b >> c >> d;
cout << 4 * (a + b) / 2;


/*
* A geometric progression: is a sequence of numbers where the ratio between any two consecutive numbers is constant
*
* For example: 3 6 12 24, i need to sum these numbers in one operation, 3 + 6 + 12 + 24 = 45 so how do you sum these?
*
* The meaning of (the ratio between any two consective numbers is constant):
3 6 12 24 the ratio between 6 and 3 is 2, 12 and 6 is 2, 24 and 12 is 2 so the ratio is constant.
*
* You can use the following operation (b * k - a) / (k - 1) (b represents the last element of numbers (24))
  (k represents the ratio between any two consecutive numbers) and finally (a represents the first element of the numbers (3)).
*/

// For example:
int a, b, c, d;
cin >> a >> b >> c >> d;
int k = d / c; // you can use one of these represent k: (d/c) or (c/b) or (b/a) 
cout << (d * k - a) / (k - 1);
