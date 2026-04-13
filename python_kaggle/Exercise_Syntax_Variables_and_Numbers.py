########### Setup code - don't touch this part ######################
# If you're curious, these are examples of lists. We'll talk about 
# them in depth a few lessons from now. For now, just know that they're
# yet another type of Python object, like int or float.
a = [1, 2, 3]
b = [3, 2, 1]
#q2.store_original_ids()
######################################################################

# Your code goes here. Swap the values to which a and b refer.
# If you get stuck, you can always uncomment one or both of the lines in
# the next cell for a hint, or to peek at the solution.
i = 0
store = 0

while i != 3:
    store = b[i]
    b[i] = a[i]
    a[i] = store
    i = i + 1

print(a)
print(b)
    
######################################################################

# Check your answer
#q2.check()
