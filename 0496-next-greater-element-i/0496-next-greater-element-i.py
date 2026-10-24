class Solution:
    def nextGreaterElement(self, nums1: list[int], nums2: list[int]) -> list[int]:
        stack = []
        nge = {}

        for num in nums2:
            while stack and stack[-1] < num:
                nge[stack.pop()] = num

            stack.append(num)

        ans = []

        for num in nums1:
            ans.append(nge.get(num, -1))

        return ans

