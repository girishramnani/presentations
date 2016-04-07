

# Image classification using TensorFlow

---

### Whats this all about

+ learning python
+ working with the environment
+ understanding tensorflow
+ understanding machine learning
+ coding using tensorflow

---

### Python language

+ slow
+ dynamically typed
+ cannot multi thread
+ global interpreter lock

---

### Then why use?

+ easy to learn
+ ### easily interfaces with C & C++

---

Find factorial of a number

```python
def factorial(n):

    if n == 0:
        return 1

    return  n * factorial(n-1)
```

---


Printing all permutations

```python

from itertools import permutations

print(list(permutations(range(10))))

```

---

### Using the ipython notebook


---

## Knowing numpy

```python

import numpy as np

z = np.zeros((100,100)) # gives you a 100x100 matrix

```

---


## using virtualenv


```bash

virtualenv env

source env/bin/activate

```

---

<img src="images/ic_launcher.png" />
## TensorFlow


#### Its a high performace machine learning platform created by google.

---


+ Created to provide solid base to build upon
+ low level



---

```python

import tensorflow as tf

v = tf.Variable("a",(None,776))


optimizer = tf.train.GradientDescentOptimizer(learning_rate)


optimizer.minimize(v)


```

---

### What did i use?

### `skflow`

---

#### Built upon tensorflow for beter useablity
  

---





