package array;

public class ReverseWord {
	
	public void reverseByWord(char c[]) {
		int strLength = c.length;
		int start = 0;
		for (int i = 0; i < strLength; i++) {
			if (c[i] == ' ') {
				reverse(c, start, i - 1);
				start = i+1;
			}
		}
		reverse(c,start,strLength-1);
		reverse(c, 0, strLength-1);
	}

	public void reverse(char c[], int start, int end) {
		while (start < end) {
			char temp = c[end];
			c[end] = c[start];
			c[start] = temp;
			end--;
			start++;
		}
	}

	public static void main(String[] args) {

		String str = "The Sky Is Blue";
		char ch[] = str.toCharArray();
		ReverseWord rw = new ReverseWord();
		rw.reverseByWord(ch);
		System.out.println("Reversed Word String :: " + String.valueOf(ch));
	}

}
