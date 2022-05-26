#DENOMINATOR AND MULTIPLIER TO BE USED IN CALCUALTION OF PI
denom = 1
multiplier = 4


pi = 0
print("NOTE: THIS CALCULATION IS ONLY ACCURATE TO 5 DECIMAL PLACES")


#CALCULATE PI, ACCURATE TO 5 DECIMAL PLACES
for i in range(1, 1000000):
	if i%2 != 0:
		pi+=1/denom
		denom+=2
	else:
		pi-=1/denom
		denom+=2
pi*=multiplier

#REQUEST USER INPUT FOR NUMBER OF DIGITS OF PI (POST DECIMAL POINT)
print("How many digits of PI would you like? \n")
numDigits = int(input())


#METHOD 1 OF PRITNING CORRECT NUMBER OF DIGITS OF PI
print(round(pi, numDigits))



#METHOD 2 OF USING SUBSTRINGS
pi = str(pi)
#USE SUBSTRING OF PI TO PRINT OUT CORRECT NUMBER OF DECIMAL PLACES
pi_ndigits = pi[0:numDigits+2]

print(pi_ndigits)


