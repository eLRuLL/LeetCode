class Solution:
    # @return an integer
    def divide(self, dividend, divisor):
    	if divisor == 0:
    		return 0
    	
    	sor_negative = False
    	dend_negative = False
    	if divisor < 0:
    		sor_negative = True
    		divisor = abs(divisor)

    	if dividend <0:
    		dend_negative = True
    		dividend = abs(dividend)

    	if divisor == 1:
    		if sor_negative != dend_negative:
	        	return dividend - dividend - dividend
	        else:
	        	return dividend

    	value = 0
        while dividend >= divisor:
            dividend -= divisor
            value += 1

        if sor_negative != dend_negative:
        	value = value - value - value
        else:
        	return value

        return value