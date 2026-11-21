class Solution(object):
    def lastStoneWeight(self, stones):
        """
        :type stones: List[int]
        :rtype: int
        """
        stones = sorted(stones, reverse=True)

        while len(stones) > 1:
            a = stones.pop(0)
            b = stones.pop(0)

            if a != b:
                stones.append(a - b)

            stones.sort(reverse=True)

        return stones[0] if stones else 0


            