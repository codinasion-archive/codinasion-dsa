class Main {
    public static void main(String[] args) {
        String str1 = "level";
        System.out.println("Input: " + str1);
        System.out.println("Output: " + isPalindrome(str1));

        System.out.println();

        String str2 = "coding";
        System.out.println("Input: " + str2);
        System.out.println("Output: " + isPalindrome(str2));
    }

    private static boolean isPalindrome(String s) {
        String lowString = s.toLowerCase();

        String reverseString = new StringBuilder(lowString).reverse().toString();

        return lowString.equals(reverseString);
    }
}
