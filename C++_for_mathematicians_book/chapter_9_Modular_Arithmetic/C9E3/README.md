
Create a class named ```EuclidenaVector```to  represent vectors in a Euclidean space R^n and give it the following attributes.

* There should be a default dimension (as a static class variable). Give static methods for inspecting and adjusting this default dimension.
* There should be a zero-argument constructor that gives the zero vector in the default dimension. There should be a single argument constructor ```EuclideanVector(int n)``` that creates the zero vector in R^n.
* There should be methods to get and set the individual coordinates of the vector.
* There should be a method to learn the dimension of the vector.
* There should be an ```operator+``` for adding vectors. Decide what the behavior should be in case the two vectors are of different dimension.
* There should be an ```operator*```method for scalar multiplication. Be sure to allow both scalar-vector and vector-scalar multiplication.
* There should be an ```operator==```and an operator ```operator!=```for comparing vectors for equality.
* There should be na ```operator<<```for writing vectors to the computer screen.

## Solution

[Solution](C9E3/)
