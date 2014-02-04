import random
import unittest
from a import Solution

class TestSequenceFunctions(unittest.TestCase):
    def setUp(self):
        self.sol = Solution()
    
    def test_cases(self):
        self.assertEqual(self.sol.reverse(123), 321)
        self.assertEqual(self.sol.reverse(-123), -321)
        self.assertEqual(self.sol.reverse(-1), -1)
        self.assertEqual(self.sol.reverse(-11), -11)
        self.assertEqual(self.sol.reverse(-12), -21)
        self.assertEqual(self.sol.reverse(12), 21)
        self.assertEqual(self.sol.reverse(0), 0)
        
        
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

