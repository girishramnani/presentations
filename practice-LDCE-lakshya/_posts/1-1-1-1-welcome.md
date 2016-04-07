

# Welcome to ~~Python~~  Computer Science 101


---

#### Error solve

Find min of two number:

```Python

def myMin(a, b):
    if a > b:
        return a
    return b


```


---

#### Recovery

Find factorial of a number
Eg.


```python
def factorial(n):

    if n == 0:
        return 1

    return  ...
```


---

#### Recovery

Concatenate strings using a specific separator

```python
([hello,world],"\") => "hello\world"
```

```python
def myConcat(arguments, separator):
    return ...


```


---

#### Error solve

print the least common prime divisor of the two number given. if not found return -1.

```python
def leastCommonPrimeDivisor(a, b):

    divisor = 2
    while a > 1 and b > 1:
        if a % divisor == 0 or b % divisor == 0:
            return divisor
        while a % divisor == 0:
            a /= divisor
        while b % divisor == 0:
            b /= divisor
        divisor += 1

    return -1
```

---

#### Type Func

print the i'th index of the number given Eg.
```
4231, 1  => 4
```
and if index is more than length then return `-1`


```python
def findnum(a,b):


```

---

#### Error solve

Given an array return the product of the array.

```python
def arrayElementsProduct(inputArray):

    result =  1

    for i in range(1, len(inputArray)):
        result *= inputArray[i]
    return result
```


---



---
