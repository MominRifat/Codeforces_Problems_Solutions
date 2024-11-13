import java.util.Scanner;
import java.util.Arrays;
public class code 
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int t;
        t = input.nextInt();
        while(t-- > 0)
        {
            int[] num = new int[3];
            for(int i = 0; i < 3; i++)
            {
                num[i] = input.nextInt();
            }
            Arrays.sort(num);
            for(int i = 0; i < 5; i++)
            {
                num[0]+=1;
                Arrays.sort(num);
            }
            System.out.println(num[0] * num[1] * num[2]);
        }
        input.close();
    }
    
}