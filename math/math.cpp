/*
* The summation of Numbers from 1 to n

* Suppose that you need to sum from 1 to 3

* 1 + 2 + 3 = 6

* you can use the following operation n*(n+1)/2 (n represents the number you need to reach it. From 1 to n).
*/
int n;
cin >> n;
cout << n * (n + 1) / 2;


/*
* The summation of Numbers from 1 to n power 2

* Suppose that you need to sum from 1 to 3

* (1 power 2) + (2 power 2) + (2 power 3) = 13

* you can use the following operation n*(n+1)*(2n+1)/6 (n represents the number you need to reach it. From 1 to n).  
*/
int n;
cin >> n;
cout << n * (n + 1) * (2n + 1) / 6;


/*
* an arithematic progression: is a sequence of numbers where the difference between any two consective number is constant

* For example: 1 3 5 7. I need to sum these numbers in one operation. 1 + 3 + 5 + 7 = 16 how do you sum these?

* the meaning of (the difference between any two consective numbers is constant):
1 3 5 7 the difference between 1 and 3 is 2, 3 and 5 is 2, 5 and 7 is 2 so the difference is constant.

* you can use the following operation n*(a+b)/2 (n represents the number of element so in this case, the number of elements is 4
  (a represents the first element of the numbers (1)) and finally ( b reprsenets the last element of numbers (7)).
*/
int a, b, c, d;
cin >> a >> b >> c >> d;
cout << 4 * (a + b) / 2;