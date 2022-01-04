import java.io.*;
import java.util.*;
import java.math.*;

public class Main {

	BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
	StringTokenizer tokenizer=null;
	
	void solve() throws IOException {
		
	}

	void execute() throws IOException {
		int tests = nextInt();
		
		for(int i=0; i<tests; i++){
			solve();
		}
	}
	
	public static void main(String[] args) throws IOException
	{
		new Main().execute();
	}
	
	void debug(Object...os)
	{
		System.out.println(Arrays.deepToString(os));
	}
	
	int nextInt() throws IOException
	{
		return Integer.parseInt(nextString());
	}
	
	long nextLong() throws IOException 
	{
		return Long.parseLong(nextString());
	}
	
	double nextDouble() throws IOException 
	{
		return Double.parseDouble(nextString());
	}
		
	String nextString() throws IOException 
	{
		while (tokenizer == null || !tokenizer.hasMoreTokens()) 
			tokenizer = new StringTokenizer(br.readLine());
		return tokenizer.nextToken();
	}
	
	String nextLine() throws IOException
	{
		tokenizer=null;
		return br.readLine();
	}
	
	void print(Object o) {
		System.out.print(o);
	}
	
	void println(Object o) {
		System.out.println(o);
	}

	int[] nextIntArray(String line){
		String[] nums = line.split(" ");

		int[] arr = new int[nums.length];

		for(int i=0; i<nums.length; i++){
			arr[i] = Integer.parseInt(nums[i]);
		}

		return arr;
	}
}
