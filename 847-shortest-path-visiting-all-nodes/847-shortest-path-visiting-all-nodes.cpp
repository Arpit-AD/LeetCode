class Solution {
public:
    int shortestPathLength(vector<vector<int>>& graph) {
        const int n = graph.size();
        std::vector<std::vector<int>> tbl_dist(
            n, std::vector<int>(n, kInfty)
        ); 
        for (int i = 0; i < n; ++i) {
            tbl_dist[i][i] = 0;
            for (int j : graph[i]) {
                tbl_dist[i][j] = tbl_dist[j][i] = 1;
            }
        }
        for (int idx = 0; idx < n; ++idx) {
            for (int i = 0; i < n; ++i) {
                for (int j = i + 1; j < n; ++j) {
                    tbl_dist[j][i] = tbl_dist[i][j] = std::min(
                        tbl_dist[i][idx] + tbl_dist[idx][j],
                        tbl_dist[i][j]
                    );
                }
            }
        }
        
        Context ctx {
            .tbl_dist = tbl_dist, .size = n, .full_mask = ((1 << n) - 1)
        };
        return find(ctx);
    }
private:
    static constexpr int kInfty = 1E9 + 7;
    static constexpr int kNumBits = 12;
    
    struct Record {
        int root;
        int mask;
        
        int key() const {
            return (root << kNumBits) | mask;
        }        
    };
    
    struct Context {
        const std::vector<std::vector<int>> &tbl_dist;  
        const int size;
        const int full_mask;
        std::unordered_map<int, int> cache;
    };
    
    int find(Context &ctx) const {
        int min_dist = kInfty;
        for (int root = 0; root < ctx.size; ++root) {
            min_dist = std::min(
                find_min_dist(ctx, Record {
                    .root = root, .mask = (1 << root)
                }),
                min_dist
            );
        }
        return min_dist;
    }
    
    int find_min_dist(Context &ctx, const Record curr) const {
        if (curr.mask == ctx.full_mask) {
            return 0;
        }
                
        auto it = ctx.cache.find(curr.key());
        if (it != ctx.cache.end()) {
            return it->second;
        }
        
        int min_dist = kInfty;
        for (int dest = 0; dest < ctx.size; ++dest) {
            if ((1 << dest) & curr.mask) {
                continue;
            }
            min_dist = std::min(
                ctx.tbl_dist[curr.root][dest] + 
                    find_min_dist(ctx, Record {
                        .root = dest, .mask = (curr.mask | (1 << dest))
                    }),
                min_dist 
            );
        }
        
        ctx.cache.insert({curr.key(), min_dist});
        return min_dist;
    }
};