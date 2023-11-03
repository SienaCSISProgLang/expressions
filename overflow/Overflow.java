/*
  Example of arithmetic overflows and underflows in Java

  Jim Teresco
  The College of Saint Rose
  Programming Languages, CSC 433
  Fall 2012

*/

public class Overflow {
    
    public static void main(String args[]) {
	
	// let's try to overflow an int variable
	int x = 100000000;
	for (int i=0; i<100; i++) {
	    System.out.printf("I have x=%d, ", x);
	    x += 100000000;
	    System.out.printf("and I add 100000000 and get x=%d\n", x);
	}

	// let's try to keep dividing a floating point number by 10
	float y = 1.0F;
	for (int i=0; i<100; i++) {
	    System.out.printf("I have y=%.20e, ", y);
	    y /= 10.0;
	    System.out.printf("and I divided it by 10 and get y=%.20e\n", y);
	}

	// let's try to overflow a float variable
	float z = 1000.0F;
	for (int i=0; i<100; i++) {
	    System.out.printf("I have z=%.20e, ", z);
	    z *= 10;
	    System.out.printf("and I multiply by 10 and get z=%.20e\n", z);
	}

	// and now we'll divide by 0
	int a = 0;
	int b = x / a;
	System.out.printf("I divided x=%d by a=%d and got b=%d\n", x, a, b);
    }
}
