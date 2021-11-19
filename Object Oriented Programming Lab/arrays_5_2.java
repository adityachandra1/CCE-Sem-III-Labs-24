import java.util.Scanner;

class Array {
    int arr[] = new int[10];

    void input() {
        Scanner sc = new Scanner(System.in);
        for (int i = 0; i < 10; i++) {
            arr[i] = sc.nextInt();
        }
    }

    void display() {
        for (int i = 0; i < 10; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }

    int largest() {
        int maxValue = -9999999;
        for (int i = 0; i < 10; i++) {
            if (arr[i] > maxValue)
                maxValue = arr[i];
        }
        System.out.println("Largest Value : " + maxValue);
        return maxValue;
    }

    double average() {
        double sum = 0;
        for (int i = 0; i < 10; i++) {
            sum += arr[i];
        }
        double avg = sum / 10;
        System.out.println("Average : " + avg);
        return avg;
    }

    void sort() {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9 - i; j++) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
}

public class arrays_5_2 {
    public static void main(String args[]) {
        Array arr = new Array();
        arr.input();
        System.out.println("The array is ");
        arr.display();
        arr.largest();
        arr.average();
        arr.sort();
        System.out.println("After Sort : ");
        arr.display();
    }
}
