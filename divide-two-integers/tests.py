import random
import unittest
from a import Solution

class TestSequenceFunctions(unittest.TestCase):
    def setUp(self):
        self.sol = Solution()
    
    def test_cases(self):
        self.assertEqual(self.sol.divide(10,2), 5)
        self.assertEqual(self.sol.divide(0,0), 0)
        self.assertEqual(self.sol.divide(0,1), 0)
        self.assertEqual(self.sol.divide(0,12321312), 0)
        self.assertEqual(self.sol.divide(1, -1), -1)
        self.assertEqual(self.sol.divide(1, -1323), 0)
        self.assertEqual(self.sol.divide(-1323, -1323), 1)
        self.assertEqual(self.sol.divide(-1323, 1323), -1)
        self.assertEqual(self.sol.divide(2147483647, 1), 2147483647)
        self.assertEqual(self.sol.divide(2147483647, -1), -2147483647)
        self.assertEqual(self.sol.divide(-2147483647, 1), -2147483647)
        self.assertEqual(self.sol.divide(-2147483647, -1), 2147483647)
        self.assertEqual(self.sol.divide(2147483648, 2), 1073741824)
        
        
        #print self.sol.simplifyPath("/home/")

    

    #def test_shuffle(self):
        # make sure the shuffled sequence does not lose any elements
#        random.shuffle(self.seq)
        #self.seq.sort()
        #self.assertEqual(self.seq, range(10))

        # should raise an exception for an immutable sequence
        #self.assertRaises(TypeError, random.shuffle, (1,2,3))

    #def test_choice(self):
        #element = random.choice(self.seq)
        #self.assertTrue(element in self.seq)

    #def test_sample(self):
        #with self.assertRaises(ValueError):
            #random.sample(self.seq, 20)
        #for element in random.sample(self.seq, 5):
            #self.assertTrue(element in self.seq)

if __name__ == '__main__':
    unittest.main()
