// Is there any difference between int[] a and int a[] in Java?
// An array in Java is a group of like-typed variables referred to by a common name. Arrays in Java work differently than they do in C/C++.  In Java, Array can be declared in the following ways:

// For 1-D Array, in Java, there is no difference and any of the mentioned syntaxes can be used to declare a 1-D array.

class differntDeclaration1D {
	public static void main(String[] args)
	{
		// declares an Array of integers
		// using method 1
		int[] arr1;
		arr1 = new int[5];
		arr1[0] = 10;
		arr1[1] = 20;
		arr1[2] = 30;
		arr1[3] = 40;
		arr1[4] = 50;

		// accessing the elements
		// of the specified array
		for (int i = 0; i < arr1.length; i++)
			System.out.println("Array from method 1: "
							+ arr1[i]);
		System.out.println();

		// declares an Array of integers
		// using method 2
		int arr2[];
		arr2 = new int[5];
		arr2[0] = 1;
		arr2[1] = 2;
		arr2[2] = 3;
		arr2[3] = 4;
		arr2[4] = 5;

		// accessing the elements
		// of the specified array
		for (int i = 0; i < arr2.length; i++)
			System.out.println("Array from method 2: "
							+ arr2[i]);
	}
}

