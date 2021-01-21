#sum of num in tuples
a = (1,2,3,4,1)

print(sum(a))
#multiply the el in tuple a
def multiply():
	res = 1
	for i in a:
		res *= i
	return res

print(multiply())

#sum of all el in tuple a
def sum():
	res = 0
	for i in a:
		res += i
	return res
print(sum())
#getting max from tuple a
print(max(a))
#getting min from tuple a
print(min(a))
#getting index from tuple a
print(a.index(1))
#getting length from tuple a
print(len(a))
print(a.count(1))

#creating tuple constructor
b = tuple(("apple","banan","mango"))
print(b[0])
print(b)

#packing unpacking tuple

new_t = ("faraz","manan","anirudh")

(faraz,manan,anirudh) = new_t

print(faraz)

#PROGRAMS FROM QUIZ

numbers = tuple("12345")
print(numbers)

person = (30,"Name")
age = person[0]

print(id(person[0]) == id(age))

aa, *bb = (1,2,3)
print(bb)

aaa, *_ , ccc = (1,2,3,4)
print(aaa,ccc)

#program to check odd even using bit manipulation
def check(n):
	if (n & 1):
		print("odd")
	else:
		print("even")



check(1)
check(2)
check(5)
check(42)


names = ['faraz','manan','anirudh']
names.sort()
print(names)