# Determine if a number is a prime
def isPrime(num):
  for i in range(2, num):
    if (num %i == 0):
      return False
  return num > 1

# Print prime numbers from m to n
def printPrime(m, n):
  for j in range(m, n+1):
    if (isPrime(j)):
      print(j)

# Take user input range
primeRange = input('Enter range: ')

# Split input string into two numbers 
m = int(primeRange.split(" ")[0])
n = int(primeRange.split(" ")[1])

printPrime(m, n)