#https://projecteuler.net/problem=18

#This problem is solved with a dynamic programming approach. First, 
#a tree is created where each node has 4 fields:
# 1. selfCost - how much the current node costs to traverse
# 2. maxCost - Passing through this node, what is the max cost to get to bottom
# 3. leftChild
# 4. rightChild

#The recurrence relation is simply 
#T(n) = selfCost + max(leftChild.maxCost, rightChild.maxCost)

#This program first creates the data structure tree, creating
#all the nodes and properly linking them. Then, it recursively
#goes through the nodes, making sure that answers from previous
#calls are reused (dynamic programming), and finds the least
#cost path to the bottom
import sys


class Node:

    def __init__(self, cost):
        self.selfCost = cost
        self.maxCost = -1
        self.leftChild = None
        self.rightChild = None

    def findMaxCosts(self):

    	if(self.leftChild == None and self.rightChild == None):#leaf node
    		return self.selfCost

    	elif(self.maxCost == -1):
    		self.maxCost = self.selfCost + max(self.leftChild.findMaxCosts(), self.rightChild.findMaxCosts())
    		return self.maxCost

    	else: #already found cost of this subtree
    		return self.maxCost

#read the lines from the file and create the data structure
lines = []
nodes = []

with open('18.in') as f:
    lines = f.readlines()

a = 0
for line in lines:
	nodes.append([])
	x = [int(i) for i in line.split()]
	for b in range(len(x)):
		nodes[a].append(Node(x[b]))
		#attach parents
		if(a > 0):
			#this is only a left child
			if(b == 0):
				nodes[a-1][0].leftChild = nodes[a][0]

			#this is only a right child
			elif(b == (len(x) - 1)):
				nodes[a-1][b-1].rightChild = nodes[a][b]

			#this is both a left and right child of some node
			else:
				#print a
				#print b
				nodes[a-1][b].leftChild = nodes[a][b]
				nodes[a-1][b-1].rightChild = nodes[a][b]


	a += 1

#setup is now done, run the dynamic programming algorithm on the root
#node to get the final result

print nodes[0][0].findMaxCosts()
