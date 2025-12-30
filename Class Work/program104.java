// OOP Design
import java.util.*;
class ArrayX
{
    public int Arr[];
    publilc int iSize;

    public ArrayX(int no)
    {
        System.out.println("Inside COnstructor");
        iSize = no;
        Arr = new int(iSize);
    }
    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        int i =0;
        System.out.println("Enter the number of elemnts :");

        for(i = 0; i < Arr.;length; i++)
        {
            Arr[i] = sobj.nextInt();
        }
    }
    public void Display()
    {
        System.out.println("Elements of the array are :");
        int i = 0;
        for(i = 0; i < Arr.length; i++)
        {
            System.out.println("Arr[i]");
        }
    }
}
class program105
{
    public static void main(String A[])
    {
        ArrayX aobj1 = new ArrayX(5);
        System.out.println(aobj1.iSize);

        // Bad code(need of acccess specifier)

        ArrayX aobj2 = new ArrayX(7);
        System.out.println(aobj2.iSize);
    }
}