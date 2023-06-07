import javax.swing.*;
import java.awt.*;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;
import java.util.Vector;

public class Main {
    public static boolean helpWhenStart = false;
    public static void main(String[] args)  {
        Scanner scanner = new Scanner(System.in);
        if (helpWhenStart) {
            help();
        }
        while (true) {
            System.out.print(":");
            String cmd = scanner.nextLine();
            if (cmd.equals("nF")) {
                System.out.print("§> ");
                String fileName = scanner.nextLine();
                try {
                    BufferedWriter bw = new BufferedWriter(new FileWriter(fileName));
                    bw.close();
                } catch (IOException e) {
                    System.err.println("Couldn't create a new File. (for more information look at the error message.) \n \n");
                    throw new RuntimeException(e);
                }
            } else if (cmd.equals("wF")) {
                System.out.print("FileName: ");
                String fileName = scanner.nextLine();
                try {
                    BufferedWriter bw = new BufferedWriter(new FileWriter(fileName));
                    int lNumber = 1;
                    while(true) {
                        System.out.print(lNumber + "> ");
                        String ln = scanner.nextLine();
                        if (ln.equals("<exit>")) {
                            bw.close();
                            break;
                        } else {
                            bw.write(ln + "\n");
                        }
                        lNumber++;
                    }
                } catch (IOException e) {
                    throw new RuntimeException(e);
                }
            } else if (cmd.equals("file")) {
                System.out.print("File/Path> ");
                String path = scanner.nextLine();
                File file = new File(path);
                if (!Desktop.isDesktopSupported()) {
                    System.err.println("Can't run file: File not Desktop supported.");
                } else {
                    Desktop desktop = Desktop.getDesktop();
                    if (file.exists()) {
                        try {
                            desktop.open(file);
                        } catch (IOException e) {
                            throw new RuntimeException(e);
                        }
                    } else {
                        System.err.println("File not found.");
                    }
                }
            } else if (cmd.equals("sd")) {
                System.out.print("Seconds>");
                int sec = scanner.nextInt();
                try {
                    Runtime.getRuntime().exec("shutdown -s -t " + sec);
                } catch (IOException e) {
                    throw new RuntimeException(e);
                }
            } else if (cmd.equals("rs")) {
                System.out.print("Seconds>");
                int sec = scanner.nextInt();
                try {
                    Runtime.getRuntime().exec("shutdown -r -t " + sec);
                } catch (IOException e) {
                    throw new RuntimeException(e);
                }
            } else if (cmd.equals("0")) {
                options();
            } else if (cmd.equals("dl")) {
                System.out.print("File/Path> ");
                String path = scanner.nextLine();
                File file = new File(path);
                file.delete();
            } else if (cmd.equals("./terminal")) {
                System.out.println("This Terminal is not finished.");
                String path = "CProgramm++.exe";
                File file = new File(path);
                if (!Desktop.isDesktopSupported()) {
                    System.err.println("Can't run file: File not Desktop supported.");
                } else {
                    Desktop desktop = Desktop.getDesktop();
                    if (file.exists()) {
                        try {
                            desktop.open(file);
                        } catch (IOException e) {
                            throw new RuntimeException(e);
                        }
                    } else {
                        System.err.println("File not found.");
                    }
                }
            }
        }
    } public static void options() {
        System.out.print("Option>");
        Scanner scanner = new Scanner(System.in);
        String option = scanner.nextLine();
        if (option.equals("helpWhenStart")) {
            helpWhenStart = true;
        }
    } public static void help() {

    }
}