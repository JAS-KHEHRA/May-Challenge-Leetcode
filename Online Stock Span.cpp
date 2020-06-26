class StockSpanner {
public:
    stack<int> prices;
    stack<int> weights;
    StockSpanner() {
        
    }
    
    int next(int price) {
       int w=1;
        while(!prices.empty() && prices.top()<=price)
        {
            prices.pop();
            int q=weights.top();
                weights.pop();
            w+=q;
            
        }
        prices.push(price);
        weights.push(w);
        return w;
        
        
    }
};
