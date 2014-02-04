class Solution:
    # @param path, a string
    # @return a string
    def simplifyPath(self, path):
        mylist = path.split('/')
        solution = []
        flag = False
        for elem in mylist:
        	if(elem == ''):
        		continue
        	else:
        		if(elem=='.'):
        			continue
        		
        		if(elem=='..'):
        			if solution:
        				solution.pop()
        			continue

        		temp = "/" + elem
        		solution.append(temp)

        if not solution:
        	return "/"
        return ''.join(solution)


        

sol = Solution()