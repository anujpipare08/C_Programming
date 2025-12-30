import java.util.*;
class ArrayX
{
    public int CountEven(int Brr[])
    {
        int i = 0;
        for(i = 0; i< Brr.length; i++)
        {
            if((Brr[i] % 2 ) == 0)
            {
                iCount++;
            }
        }
        return iCount;
    }
}
class program101
{
    public static void main(String A[])
    {
    Scanner sobj = new Scanner(System.in);

    int iSize = 0, i = 0, iRet = 0;
    System.out.println("Enter the size of array :");
    iSize = sobj.nextInt();

        int Arr[] = new int[iSize];
        

        System.out.println("Enter the elments");

        for(i = 1; i < Arr.length; i++)
        {
           Arr[i] = sobj.nextInt();
        }
        
       ArrayX aobj = new ArrayX();
       aobj.Display(Arr);

       iRet = aobj.CountEven(Arr);
       System.out.println("Even elemnts are :"+iRet);

       // Important
       aobj = null;
       Arr = null;
       sobj = null;

       System.gc();
    }
}
