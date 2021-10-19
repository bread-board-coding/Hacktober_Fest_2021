package jvm;

public class SimpleJVMDemo {
    static {
        System.out.println("\nClassInitDemo : static initializer");
    }

    static {
        System.out.println("\nClassInitDemo : instance initializer");
    }

    static int getInt() {
        System.out.println("ClassInitDemo : getInt()");
        return 3;
    }

    static int getInt5() {
        System.out.println("ClassInitDemo : getInt5()");
        return 5;
    }

    public static void main(String[] args) {
        System.out.println("\nJVM invoked the main method ... ");
        System.out.println("Subclass STATIC_FINAL : " + Subclass.STATIC_FINAL);
        System.out.println("invoking Subclass.STATIC_FINAL2 ... ");
        System.out.println("Subclass STATIC_FINAL2 : " + Subclass.STATIC_FINAL2);
        System.out.println("Instantiating Subclass ...");
        new Subclass();

        SuperInterface.staticMethod();

    }

    interface SuperInterface {
        static void staticMethod() {
            System.out.println("Superinterface : staticMethod");
        }
    }

    static class ObjectReference {
        ObjectReference() {
            System.out.println("ObjectReference : constructor");
        }
    }

    static class Subclass extends Superclass implements SuperInterface {
        static final int STATIC_FINAL = 47; // Compile-time constant
        static final int STATIC_FINAL2 = (int) (Math.random() * 5);

        static {
            System.out.println("Subclass : static initializer");
            // staticFinal = 47;
        }

        static {
            System.out.println("Subclass : instance initializer");
        }

        ObjectReference objectReference = new ObjectReference();

        Subclass() {
            System.out.println("Subclass : constructor");
        }

    }

    private static class Superclass {

        static {
            System.out.println("Superclass : static initializer");
        }

        static {
            System.out.println("Superclass : instance initializer");
        }

        Superclass() {
            System.out.println("Superclass : constructor");
        }
    }

}
