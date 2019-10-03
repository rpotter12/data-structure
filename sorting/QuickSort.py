def quick(numbers):
    if len(numbers) > 1:
        # Pivot is in the middle of the list
        pivot = numbers[int(len(numbers)/2)]
        
        i = 0
        for j in range(len(numbers)-1):
            if numbers[j+1] < pivot:
                numbers[j+1], numbers[i+1] = numbers[i+1], numbers[j+1]
                i += 1
                
        numbers[0], numbers[i] = numbers[i], numbers[0]
        
        smaller = quick(numbers[:i])
        bigger = quick(numbers[i+1:])

        # Run it again for the numbers in the middle
        return smaller + [numbers[i]] + bigger
    
    # Finish when there is just one number
    else:
        return numbers



# Random unsorted list for test    
numbers = [125, 75, 36, 48, 65, 150, 1, 65, 90]
print(quick(numbers))
