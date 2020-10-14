def merge(nums1, m, nums2, n):
    i = len(nums1)-1
    m -= 1
    n -= 1
    while m>-1 and n>-1:
        if nums1[m] > nums2[n]:
            nums1[i] = nums1[m]
            m -= 1
        else:
            nums1[i] = nums2[n]
            n -= 1
        i -= 1
    while n>-1:
        nums1[i] = nums2[n]
        n -= 1
        i -= 1
    return nums1

t = int(input())
for _ in range(t):
    nums1 = list(map(int, input().split()))
    m = int(input())
    nums2 = list(map(int, input().split()))
    n = int(input())
    print(merge(nums1, m, nums2, n))
