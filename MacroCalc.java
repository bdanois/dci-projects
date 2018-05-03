import java.util.Scanner;

public class MacroCalculator{
    public static void main(String[] args) {
     System.out.println("Welcome to the Macro Calculator!");
     char moreMeals = 'y';
     double totalCalories=0;
     double totalCarbs =0;
     double totalFat =0;
     double totalProtein =0;
     double percentCarbs =0;
     double percentFat=0;
     double percentProtein=0;
     Scanner inputOf = new Scanner(System.in);
     while(moreMeals=='y')
     {
         System.out.print("\nEnter carbs grams of meal: ");         
         totalCarbs += inputOf.nextDouble();
         System.out.print("\nEnter fat grams of meal: ");     
         totalFat += inputOf.nextDouble();         
         System.out.print("\nEnter protein grams of meal: ");     
         totalProtein += inputOf.nextDouble();         
         System.out.print("\nEnter calories of meal: ");
                  totalCalories += inputOf.nextDouble();
         System.out.print("\nWould you like to add another meal? (y/n):  ");
         moreMeals = inputOf.next().charAt(0);

     }
     
    System.out.println("Your total calories for the day is: "+ totalCalories);
    System.out.println("Your total carbs for the day is: "+ totalCarbs);
    System.out.println("Your total protein for the day is: "+ totalProtein);
    System.out.println("Your total fat for the day is: "+ totalFat);
    
    System.out.print("Your percentages from CARBS: ");
    System.out.printf("%.2f", totalCarbs*4/totalCalories*100);
    System.out.println("%");    
    System.out.print("Your percentages from PROTEIN: ");
    System.out.printf("%.2f", totalProtein*4/totalCalories*100);
    System.out.println("%");
    System.out.print("Your percentages from FAT: ");     
    System.out.printf("%.2f",totalFat*9/totalCalories*100);
    System.out.println("%");
    
    }//end of main
}//end class