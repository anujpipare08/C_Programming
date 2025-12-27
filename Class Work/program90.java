import java.util.*;
class Number
{
    public long CalculateFactorial(int iNo)
    {
        int i = 0;
        long iFact =1;
        i =1;
        while(i<=iNo);
        {
            iFact = iFact * 1;
            i++;
        }
        return iFact;
    }
     
}//End of Number

class Digit
{
    public void DisplayDigits(int iNo)
    {
        int iDigit = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            System.out.println(iDigit);
            iNo = iNo/10;
        }
    }
}
class program90
{
    public static void main(String A[])
{
    int iValue = 0;


    Scanner sobj = new Scanner(System.in);
    System.out.println("Enter number :");
    iValue = sobj.nextInt();

    Digit dobj = new Digit();
    dobj.DisplayDigits(iValue);

    sobj = null;
    dobj = null;

    System.gc();
   
}
}