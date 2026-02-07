import java.util.*;
import java.io.*;
import java.text.DecimalFormat;

import static java.lang.Math.max;
import static java.lang.Math.min;
import static java.lang.Math.abs;

public class templateJava {
	
	public static void main(String[] args) throws IOException {
		
		out.close();

	}

	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static StringTokenizer st;
	static PrintWriter out = new PrintWriter(System.out);

	static String next() throws IOException {
		while (st == null || !st.hasMoreTokens())
			st = new StringTokenizer(br.readLine().trim());
		return st.nextToken();
	}

	static long readLong() throws IOException {
		return Long.parseLong(next());
	}

	static int readInt() throws IOException {
		return Integer.parseInt(next());
	}

	static double readDouble() throws IOException {
		return Double.parseDouble(next());
	}

	static char readCharacter() throws IOException {
		return next().charAt(0);
	}

	static String readLine() throws IOException {
		return br.readLine().trim();
	}

	static class pair {
		int a, b, c;

		pair(int a1, int b1, int c1) {
			a = a1;
			b = b1;
			c = c1;
		}

		@Override
		public int hashCode() {
			return Objects.hash(a, b, c);
		}

		@Override
		public boolean equals(Object obj) {
			if (this == obj)
				return true;
			if (obj == null || getClass() != obj.getClass())
				return false;
			pair other = (pair) obj;
			return Objects.equals(a, other.a) && Objects.equals(b, other.b) && Objects.equals(c, other.c);
		}
	}

	public static long power(long x, long y, long p) {
		long res = 1L;
		x = x % p;
		while (y > 0) {
			if ((y & 1) == 1)
				res = (res * x) % p;
			y >>= 1;
			x = (x * x) % p;
		}
		return res;
	}

	public static long power(long x, long y) {
		long res = 1L;
		while (y > 0) {
			if ((y & 1) == 1)
				res = (res * x);
			y >>= 1;
			x = (x * x);
		}
		return res;
	}

	static long lcm(long a, long b) {
		return (a / gcd(a, b)) * b;
	}

	static long gcd(long a, long b) {
		if (b == 0)
			return a;
		return gcd(b, a % b);
	}

	public static void sort(int[] arr) {

		ArrayList<Integer> ls = new ArrayList<Integer>();
		for (int x : arr) {
			ls.add(x);
		}

		Collections.sort(ls);
		for (int i = 0; i < arr.length; i++) {
			arr[i] = ls.get(i);
		}
	}

	public static boolean isPrime(long n) {
		if (n < 2)
			return false;
		if (n == 2 || n == 3)
			return true;
		if (n % 2 == 0 || n % 3 == 0)
			return false;
		long sqrtN = (long) Math.sqrt(n) + 1;
		for (long i = 6L; i <= sqrtN; i += 6) {
			if (n % (i - 1) == 0 || n % (i + 1) == 0)
				return false;
		}
		return true;
	}
}