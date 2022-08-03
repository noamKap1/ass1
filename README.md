# ass1

# Our implementation:

In our solution to the K-NN problem we define the Flower object by the Iris' type and sizes. We get the csv input files as an arguments to our main function
(there is a need to write the paths of these files, we already did that for the given csv input files but if it's paths change, the examiner must change too in our main function). We read the information to two vectors of Flowers. One for the classified ones, and one for the unclassified.

Then we iterate over all of the unclassified Flowers and classify them by creating and bubble sorting an array of distances between the unclassified object and the classified ones. Once it's sorted we create a map which contains of the first K elements in the array, and we insert every element, when the value of it is it's
Iris type. Finally, we iterate over the map and return the most common type. 
This proccess we do for every unclassified object, and three times, for the three distance calculating methods.
We write the newly classified objects to three different distance methods csv's, according to the expected output rules.

# compiling and running:
first the unclassified and classified file you gave us should be placed cmake-build-debug folder in the assigment folder.
compile with the command:
g++ *.cpp -std=c++11
and then run with the command:
./a.out 5

