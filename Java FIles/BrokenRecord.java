/* Author:Benedict V. Avenido
   Date of Creation: 06/12/2022
   
   This code allows the user to loop a phrase
   over and over like a broken record on a certain
   number of time                                 */

import java.util.Scanner; 
public class BrokenRecord {
public static void main(String[] args) {
System.out.println("Enter any positive number");
int iter = 0;
int n;
Scanner input = new Scanner(System.in); 
n = input.nextInt();
while(iter <= n) {
System.out.println("Benedict is awesome");
iter = iter + 1;
}}}