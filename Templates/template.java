// Java Template for Competitive Programming
import java.util.*;
import java.io.*;

class Main {
    
    // Fast I/O
    static class FastReader {
        BufferedReader br;
        StringTokenizer st;
        
        public FastReader() {
            br = new BufferedReader(new InputStreamReader(System.in));
        }
        
        String next() {
            while (st == null || !st.hasMoreElements()) {
                try {
                    st = new StringTokenizer(br.readLine());
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }
        
        int nextInt() {
            return Integer.parseInt(next());
        }
        
        long nextLong() {
            return Long.parseLong(next());
        }
        
        double nextDouble() {
            return Double.parseDouble(next());
        }
        
        String nextLine() {
            String str = "";
            try {
                str = br.readLine();
            } catch (IOException e) {
                e.printStackTrace();
            }
            return str;
        }
    }
    
    // Constants
    static final int MOD = (int)1e9 + 7;
    static final int INF = (int)1e9;
    static final long LINF = (long)1e18;
    
    public static void solve(FastReader sc) {
        // Your solution here
    }
    
    public static void main(String[] args) {
        FastReader sc = new FastReader();
        
        int t = 1;
        // t = sc.nextInt();  // Uncomment for multiple test cases
        
        while (t-- > 0) {
            solve(sc);
        }
    }
}
