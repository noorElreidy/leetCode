def findTargetSum(nums, target):
  cache ={}

  def bt(i, total):
    if i == len(nums):
      return 1 if total == target else 0
    if (i, total) in cache:
      return cache[(i, total)]
    
    cache[(i, total)] = bt(i+1, total + nums[i]) + bt(i+1, total - nums[i])

    return cache[(i, total)]
  
  return bt(0, 0)

print(findTargetSum([1, 1, 1, 1, 1], 3)) # 5