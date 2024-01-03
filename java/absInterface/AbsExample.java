package absInterface;

abstract class Animal {
    //Properties
    protected int speed;
    protected String name;
    
    //Constructor
    Animal(String name, int speed){
        this.name = name;
        this.speed = speed;
    }

    //methods
    abstract void makeSound();
    void runFast(){
        speed++;
        System.out.println(name + " has " + speed + " speed!");
    }

}

class Dog extends Animal{
    //Constructor
    Dog(String name, int speed){
        super(name, speed);
    }

    //Methods
    void makeSound(){
        System.out.println(name + " says Bark Bark!!");
    }
}

class Cat extends Animal{
    //Position
    Boolean sit;

    //Constructor
    Cat(String name, int speed){
        super(name, speed);
        this.sit = false;
    }

    //Methods
    void makeSound(){
        System.out.println(this.name + " says Meow Meow!!");
    }
    void toggleSit(){
        this.sit = !this.sit;
        if(this.sit){
            System.out.println(this.name + " is now sitting");
        }
        else{
            System.out.println(this.name + " is now standing");
        }
    }
}

public class AbsExample {
    public static void main(String[] args) {
        Cat cat = new Cat("puffer", 35);
        Dog dog = new Dog("Tom", 65);

        dog.makeSound();
        dog.runFast();
        
        cat.makeSound();
        cat.runFast();
        cat.runFast();
        cat.toggleSit();
        cat.toggleSit();
    }
}
