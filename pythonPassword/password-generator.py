import random

char = [[], [], [], []]
char[0] = ["A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"]
char[1] = ["a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"]
char[2] = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
char[3] = ["-", "_", "+", "#", "*", "~"]
password = ""

passwordLength = 0

def passLength():
	global passwordLength 
	passwordLength = int(input("Length of generated password (8-20): "))
	if (not (passwordLength >= 8 and passwordLength <= 20)):
		print("The given length for a password is not allowed.")
		passLength()


passLength()

for i in range(passwordLength):
	randInt = random.randint(0,3)
	password += str(random.choice(char[randInt]))

print("Your generated password with " + str(passwordLength) + " digits is: " + password)
