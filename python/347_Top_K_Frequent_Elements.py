class Solution:
  def topKFrequent(self, nums: list[int], k: int) -> list[int]:
    counts = {}
    freq = [[] for i in range(len(nums) + 1)]
    for num in nums:
      counts[num] = counts.get(num, 0) + 1
    for c, n in counts.items():
      freq[c].append(n)
    res = []
    for i in range(len(freq) - 1, 0, -1):
      for n in freq[i]:
        res.append(n)
        if len(res) == k:
          return res