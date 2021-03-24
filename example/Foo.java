import java.util.*;

public class Foo
{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        System.out.println(in.nextInt() + in.nextInt());
        System.out.println(new StringBuffer(in.next()).reverse());
    }
}
