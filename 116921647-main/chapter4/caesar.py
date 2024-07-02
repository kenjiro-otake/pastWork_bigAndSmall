# Kenjiro Otake
# 2/28/2023
# 5-1 Caesar/Vigenere Lab

import sys
from cs50 import get_string

def encrypt(plainchar, key):
    if plainchar.isupper():
        cipherchar = 65 + (ord(plainchar) - 65 + int(key)) % 26
    elif plainchar.islower():
        cipherchar = 97 + (ord(plainchar) - 97 + int(key)) % 26
    return chr(cipherchar)


if int(sys.argv[1]) < 0:
    exit(1)
elif int(sys.argv[1]) >= 0:
    plaintext = get_string("PLAINTEXT: ")
    print("ciphertext: ", end = '')
    for i in range(len(plaintext)):
        if plaintext[i].isalpha():
            cipherchar = encrypt(plaintext[i], sys.argv[1])
            print("%s" % cipherchar, end = '')
        else:
            print("%s" % plaintext[i], end = '')
    print("")