# Merged and Sorted

arrayA = []		
arrayAcount = raw_input("Enter number of elements in first array ")
for i in range(0,int(arrayAcount)):
	temp = raw_input("Array Elemenet ")
	arrayA.append(temp)

arrayB = []		
arrayBcount = raw_input("Enter number of elements in second array ")
for i in range(0,int(arrayBcount)):
	temp = raw_input("Array Elemenet ")
	arrayB.append(temp)

print "First array ", arrayA
print "Second array ", arrayB

for s in arrayA:
	if s not in arrayB:
		arrayB.append(s)

print "Merged array ", arrayB

arrayB.sort()
print "Merged and sorted : ", arrayB