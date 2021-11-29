/***********************************************************************
================
JOSEPHUS PROBLEM
================

Read integers N (<200) and K (<= 1000000). Code for small K first
    ~> find the game winner for following game.
There is a group of N people in circle numbered 1, 2, ... N
    ~> Someone is a master of the game.
    ~> He starts from person #1. Count K. Then remove this person from 
                                            the circle. 
    ~> He keeps doing so till only 1 person remains. This is the winner

input : 4 2
    => means we have people: 1, 2, 3, 4. Master start at 1
    => Count 2 persons (2 removed), start from 3
    => Count 2 persons (4 removed), start from 1
    => Count 2 persons (3 removed), 1 is winner
output:
    people removed in order: 2 4 3 1


Input   ⇒ Output
7 1     ⇒ 1 2 3 4 5 6 7
7 2     ⇒ 2 4 6 1 5 3 7
7 3     ⇒ 3 6 2 7 5 1 4
7 4     ⇒ 4 1 6 5 7 3 2
7 5     ⇒ 5 3 2 4 7 1 6
7 6     ⇒ 6 5 7 2 1 4 3
7 7     ⇒ 7 1 3 6 2 4 5
7 14    ⇒ 7 2 6 3 5 4 1
7 1000  ⇒ 6 3 2 1 4 7 5
7 99999 ⇒ 4 7 5 2 1 3 6

==> SIMULATION ALGORITH <== 
*************************************************************************/ 

#include <iostream>
using namespace std;

int main() {
    int n, k;
    int is_remaining[199] {0}; // to find if it is removed or not
    int last_pos = 0; // current position where we stopped

    cin >> n >> k;

    for (int i = 0; i < n; ++i) { // remove all the people in the circle
        int remaining_val = n - i; // people remaining after each 
        //removal

        int current_k = k; // if k >= n then to not waste iterations
        // below two conditions

/*
if k and remaining are same, this is true. Because if k and rem same in # 
current_k = 0 so the first person will be removed instead of the last one.
This is specal condition.
*/
        if (k % remaining_val == 0) 
            current_k = k; 
        else 
            current_k = k % remaining_val; // ~> # here if n 5 and k 7
            // we get current_k = 2 don't have extra 5 steps to do

        int tmp; // due to step #1
        for (int j = 0; j < current_k;) {
            if (is_remaining[last_pos] == 0) { // if not removed
                tmp = last_pos;// conisder it as the last_pos
                j++;
            }
            last_pos = (last_pos + 1) % n; // #1 
/* 
changing the last_pos of the circle by #1 step
===> % n ~> when it comes to n ie last index + 1 not needed we 
===> can loop again as last_pos converted to 0 by % n ~~> impppp
*/
        }
        is_remaining[tmp] = 1; // value of rmg arr of last_pos to 1
        cout << tmp + 1 << " "; // tmp is 0-indexed value so to output
    }// 1-based hence +1 is used ~~> impppp

    cout << "\n";
    return 0;
}