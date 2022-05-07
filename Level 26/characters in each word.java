import java.io.*;
class Sample
{
    public static void main(String args[])throws Exception
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String input  = br.readLine();
        String in[] = input.split(" ");
        for(String i: in){
            System.out.print(i.length()+" ");
        }
    }
}
