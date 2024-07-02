# Kenjiro Otake
# 2/23/2023
# 0 Hello Python Lab

from cs50 import get_string, get_int

name = get_string("Enter your name: ")
print("Hello, " +name+ "!")

age = get_int("Enter your age: ")
age = age*365
print("You have been alive for at least %d days!" %age)

# 3 different conditions for graduation year entered
year = get_int("Enter your graduation year: ")
if year == 2023:
    print("You are a senior graduating in a few months!")
elif year < 2023:
    print("You have already graduated!")
elif year > 2023:
    print("You have at least another year until graduation!")

# math problem: if they don't get the answer, they're wrong - that's why math is easy to grade (except AP math classes you get random points)
ans = 'null'
while ans != 20:
    ans = get_int("What is 1+ 2 + 3 + 4 + 5 + 10*3/6? : ")
print("Yup, the answer is 20! Good job, but I don't care!")

# asks for a word, adds 1 for each letter that x exists for (counts the number of letters)
word = get_string("Enter any word: ")
counter = 0
for x in word:
    counter += 1
print("Your word contains %d letters!" %counter)