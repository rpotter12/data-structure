# Python program for implementation of Selection 
# Sort 
import sys 
n=int(input("enter the size of array: ")
A = [ ]*n

print("enter array elements: ")
for i in range(0,n):
    A[i]=int(input())
  
# Traverse through all array elements 
for i in range(len(A)): 
      
    # Find the minimum element in remaining  
    # unsorted array 
    min_idx = i 
    for j in range(i+1, len(A)): 
        if A[min_idx] > A[j]: 
            min_idx = j 
              
    # Swap the found minimum element with  
    # the first element         
    A[i], A[min_idx] = A[min_idx], A[i] 
  
# Driver code to test above 
print ("Sorted array") 
for i in range(len(A)): 
    print(A[i])
