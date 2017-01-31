import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter number of elements in first Array ");
        int arrayAcount = scanner.nextInt();
        ArrayList<Double> arrayA = new ArrayList<>();
        for(int i =0;i<arrayAcount; i++) {
            System.out.print("Array element " + i + " : ");
            arrayA.add(scanner.nextDouble());
        }

        System.out.print("Enter number of elements in second Array ");
        int arrayBcount = scanner.nextInt();
        ArrayList<Double> arrayB = new ArrayList<>();
        for(int i =0;i<arrayBcount; i++) {
            System.out.print("Array element " + i + " : ");
            arrayB.add(scanner.nextDouble());
        }

        System.out.println("Elements in first array [" + arrayAcount + "] " + arrayA);
        System.out.println("Elements in second array [" + arrayBcount + "] " + arrayB);

        for(int i =0; i<arrayAcount; i++){
            if(!arrayB.contains(arrayA.get(i))){
                arrayB.add(arrayA.get(i));
            }
        }

        System.out.println("Merged array [" + arrayB.size() + "] " + arrayB);
        Collections.sort(arrayB);

        System.out.println("Merged and Sorted [" + arrayB.size() + "] " + arrayB);

    }
}
