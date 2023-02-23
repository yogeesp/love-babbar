/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the pick1ed number
 *			      1 if num is lower than the pick1ed number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {

        int start=1;
        int end=n;


        while(start<=end){

            int mid=start+(end - start)/2;
            int pick1=guess(mid);
   
            if (pick1==0)

                return mid;

            else if (pick1==1)

                end=mid-1;
            else
                start=mid+1;

        }

        return start;
    }
};