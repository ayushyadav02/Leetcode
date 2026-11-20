
class Solution {
    public long pickGifts(int[] gifts, int k) {

        while (k > 0) {
            int maxIndex = 0;

            for (int i = 1; i < gifts.length; i++) {
                if (gifts[i] > gifts[maxIndex]) {
                    maxIndex = i;
                }
            }

            gifts[maxIndex] = (int) Math.sqrt(gifts[maxIndex]);

            k--;
        }

        long sum = 0;

        for (int i = 0; i < gifts.length; i++) {
            sum += gifts[i];
        }

        return sum;
    }
}
