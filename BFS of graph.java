class Solution {
    public ArrayList<Integer> bfsOfGraph(int V, ArrayList<ArrayList<Integer>> adj) {
        boolean visited[] = new boolean[V];

        int s = 0;
        visited[s] = true;

        ArrayList<Integer> res = new ArrayList<>();

        LinkedList<Integer> q = new LinkedList<Integer>();
        q.add(s);

        while (q.size() != 0) {

            s = q.poll();
            res.add(s);

            Iterator<Integer> i = adj.get(s).listIterator();
            while (i.hasNext()) {
                int n = i.next();
                if (!visited[n]) {
                    visited[n] = true;
                    q.add(n);
                }
            }
        }
        return res;
    }
}
