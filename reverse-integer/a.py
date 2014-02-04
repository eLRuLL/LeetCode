class Solution:
    # @return an integer
    def reverse(self, x):
    	sign = False
    	if x < 0:
    		sign = True

    	mystr = str(abs(x))

    	solution = int(mystr[::-1])

    	if sign:
    		return -1 * solution
    	else:
    		return solution
