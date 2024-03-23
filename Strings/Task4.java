public class Task4 {
    public static void main(String[] args) {
        String str = "John Doe, 30, john@example.com";
        char name[] = new char[str.length()];
        char age[] = new char[str.length()];

        int j=0;
        while(str.charAt(j) != ',') {
            if(Character.isDigit(str.charAt(j))) {
                System.out.println("Name should not have digits in it");
                System.exit(1);
            }
            name[j] = str.charAt(j);
            j++;
        }
        String n = new String(name);
        System.out.println("Name: " + n);
        
        
        j = str.indexOf(", ")+2;
        while(str.charAt(j) != ',') {
            if(Character.isLetter(str.charAt(j))) {
                System.out.println("Age should not have Characters in it");
                System.exit(1);
            }
            age[j] = str.charAt(j);
            j++;
        }
        String a = new String(age);
        System.out.println("Age: " + a);

        j = str.indexOf(", ", j);
        String e = str.substring(j+2);
        System.out.println("Email: " + e);
    }
}