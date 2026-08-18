class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        m = {}

        for n in nums:
            if n not in m:
                m[n] = 1
            else:
                m[n] += 1

        sorted_items = sorted(m.items(), key=lambda item: item[1], reverse=True)
  

        top_k_items = sorted_items[:k]  
        top_k_values = [item[0] for item in top_k_items]

        return top_k_values