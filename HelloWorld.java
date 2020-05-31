public class HelloWorld {

    public static void main(String[] args) {
	int number1 = 27, number2 = 35;
	int addition, resta;
	
	addition = addTwoNumbers(number1, number2);
	resta = mulTwoNumbers(number1, number2);
        System.out.println("Hello World From Sebastian Zapata");

	System.out.println("\nThe addition of " + number1 + " and " + number2 + " is --->" + addition);
	System.out.println("\nThe multiplication of " + number1 + " and " + number2 + " - 10 is --->" + resta);
	
    } 
    
    public static int addTwoNumbers(int addend1, int addend2){
	int total = 0;
	total = addend1 + addend2;
	return total;
}

public static int mulTwoNumbers(int addend1, int addend2){
	int total = 0, resta = 0;
	total = addend1 * addend2;
	resta = total - 10;
	return resta;
}
}