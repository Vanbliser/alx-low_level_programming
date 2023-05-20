#!/usr/bin/python3

def palindrome(i):
    s = str(i)
    z = -1
    for L in range(len(s)//2):
        if (s[L] != s[z]):
            return False
        z -= 1
    return True

if __name__ == '__main__':
    list_palindrome = []
    limit = 20
    limit_watch = 0
    for ist in range(100, 1000):
        for sec in range(100, 1000):
            res = ist * sec
            if palindrome(res):
                list_palindrome.append(res)
                limit_watch += 1
                if limit_watch == limit:
                    tmp = max(list_palindrome)
                    list_palindrome.clear()
                    list_palindrome.append(tmp)
    print(max(list_palindrome))

    list_palindrome = []
    limit = 20
    limit_watch = 0
    for ist in range(10, 100):
        for sec in range(10, 100):
            res = ist * sec
            if palindrome(res):
                list_palindrome.append(res)
                limit_watch += 1
                if limit_watch == limit:
                    tmp = max(list_palindrome)
                    list_palindrome.clear()
                    list_palindrome.append(tmp)
    #print(max(list_palindrome))
