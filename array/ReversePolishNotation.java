package array;

import java.util.Stack;

public class ReversePolishNotation {
	public static int eval(String notation[]) {
		Stack<String> stack = new Stack<String>();
		String operator = "*/+";
		int a, b;
		for (int i = 0; i < notation.length; i++) {
			if (operator.contains(notation[i])) {
				// Its operation
				switch (notation[i]) {
				case "*":
					a = Integer.parseInt(stack.pop());
					b = Integer.parseInt(stack.pop());
					stack.push(String.valueOf((a * b)));
					break;
				case "/":
					a = Integer.parseInt(stack.pop());
					b = Integer.parseInt(stack.pop());
					stack.push(String.valueOf((a / b)));
					break;
				case "-":
					a = Integer.parseInt(stack.pop());
					b = Integer.parseInt(stack.pop());
					stack.push(String.valueOf((a - b)));
					break;
				case "+":
					a = Integer.parseInt(stack.pop());
					b = Integer.parseInt(stack.pop());
					stack.push(String.valueOf((a + b)));
					break;
				}
			} else {
				stack.push(notation[i]);
			}
		}
		return Integer.parseInt(stack.pop());
	}

	public static void main(String args[]) {
		String notation[] = { "2", "3", "+", "1", "*" };
		System.out.println("Result of eveluated expression ::" + eval(notation)); 
	}
}
