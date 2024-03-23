public class One {
   public static void main(String[] args) {
      // String s = "Kaushal Ramanuj";
      // System.out.println(s.hashCode());   
      // s = "Kaushal";
      // System.out.println(s.hashCode());
      // String s1 = "Kaushal";
      // System.out.println(s1.hashCode());


      // Ways to create a string
      // String s1 = "declare";
      // String s2 = new String();
      // String s3 = new String("declare");

      // String s1 = null, s = "Here is a sample string that you can use for testing various string methods. It contains uppercase and lowercase letters, punctuation marks like commas, periods, and exclamation marks! Additionally, there are spaces between words.";

      //Methods
      // System.out.println(s.charAt(12));
      // System.out.println(s.length());
      // System.out.println(s.substring(12));
      // System.out.println(s.substring(12, 20));
      // System.out.println(s.indexOf(' ', 10));
      // System.out.println(s.indexOf("er", 100));
      // System.out.println(s.lastIndexOf(' ', 100));
      // System.out.println(s.startsWith("Here"));
      // System.out.println(s.endsWith("words."));
      // System.out.println(s.toUpperCase());
      // System.out.println(s.toLowerCase());
      // System.out.println("\"" + "      K A U S H A L         ".trim() + "\"");
      // System.out.println(s.replace(' ', '_'));
      // System.out.println(s.replace("e", "E"));
      // System.out.println(s.contains("_"));
      // System.out.println("".isEmpty());
      
      // int i = 12345;
      // System.out.println(((Object)i).getClass().getSimpleName());
      // String s2 = String.valueOf(i);
      // System.out.println(s2.getClass().getSimpleName());
      
      // int ab = Integer.valueOf(s2);
      // System.out.println(((Object)ab).getClass().getSimpleName());
      
      
      // System.out.println("Hello ".concat("World!"));
      // s = "Hello World!";
      // char a[] = s.toCharArray();

      // for (char c : a) {
      //    System.out.print(c + ", ");
      // }
      // System.out.println();

      // System.out.println("Hello".equals("hello"));
      // System.out.println("Hello".equalsIgnoreCase("hello"));
      // System.out.println("hello".compareTo("Hello"));
      // System.out.println("hello".compareToIgnoreCase("Hello"));

      // char a[] = {'a', '_', 'b', '_', 'c', '_', 'd'};
      // s = new String(a);
      // System.out.println(s);
   }
}

/*
String class is an immutable class

String Methods:
1. charAt(int index): Returns the character at the specified index.
2. length(): Returns the length of the string.
3. substring(int beginIndex): Returns a substring starting from the specified index.
4. substring(int beginIndex, int endIndex): Returns a substring within the specified range.
5. indexOf(int ch): Returns the index of the first occurrence of a specified character.
6. indexOf(int ch, int fromIndex): Returns the index of the first occurrence of a specified character starting from the given index.
7. indexOf(String str): Returns the index of the first occurrence of a specified substring.
8. lastIndexOf(int ch): Returns the index of the last occurrence of a specified character.
9. lastIndexOf(int ch, int fromIndex): Returns the index of the last occurrence of a specified character before the given index.
10. lastIndexOf(String str): Returns the index of the last occurrence of a specified substring.
11. startsWith(String prefix): Checks if the string starts with the specified prefix.
12. endsWith(String suffix): Checks if the string ends with the specified suffix.
13. toLowerCase(): Converts the string to lowercase.
14. toUpperCase(): Converts the string to uppercase.
15. trim(): Removes leading and trailing white spaces.
16. replace(char oldChar, char newChar): Replaces all occurrences of a character with another character.
17. replace(CharSequence target, CharSequence replacement): Replaces all occurrences of a specified CharSequence.
18. contains(CharSequence s): Checks if the string contains the specified sequence of characters.
19. isEmpty(): Checks if the string is empty.
20. valueOf(Object obj): Returns the string representation of an object.
*/
/*
String tasks: 

1. Text Analysis Tool: Develop a tool that analyzes a given text input, providing statistics such as character count, word count, average word length, and frequency of occurrence of certain words or phrases.

2. Text Encryption and Decryption: Create a program that encrypts and decrypts sensitive text data using cryptographic algorithms such as AES or RSA, ensuring secure communication and data storage.

3. String Comparison and Matching: Develop a utility for comparing strings and identifying similarities or differences between them, including functionality for fuzzy matching or finding common substrings.

Test Cases:

1. Text Analysis Tool:
   - Input: "This is a sample text for analysis. It contains words and punctuation marks!"
   - Expected Output: 
     - Character Count: 57
     - Word Count: 10
     - Average Word Length: 5.7
     - Frequency of "text": 1
     - Frequency of "analysis": 1

2. Text Encryption and Decryption:
   - Input: "Sensitive data to be encrypted."
   - Expected Output: Encrypted string using a specified algorithm; decryption should yield the original data.

3. String Comparison and Matching:
   - Input: Two strings, "apple" and "aple"
   - Expected Output: Identify differences, suggest "apple" as a correction.
   
*/