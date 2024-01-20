static int moves;
    static int solve(Node root) 
    {
        if(root == null)
            return 0;

        int ln = solve(root.left);
        int rn = solve(root.right);

        moves += Math.abs(ln) + Math.abs(rn);
        return root.data - 1 + ln + rn;
    }

    public static int distributeCandy(Node root) 
    {
        moves = 0;
        solve(root);
        return moves;
    }
