import java.io.*;
class Sample
{
    public static void main(String args[])throws Exception
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String input  = br.readLine();
        String in[] = input.split(" ");
        int max = in[0].length();
        for(String i: in){
            max = max>i.length()? max : i.length();
        }
        System.out.println(max);
    }
}
