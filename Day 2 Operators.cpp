void solve(double meal_cost, int tip_percent, int tax_percent) {
    double tip = (meal_cost/100)*tip_percent;
    double tax = (tax_percent/100)*tip_percent;
    double total_cost = meal_cost+tip+tax;
    int rounded = round(total_cost);
    cout<<rounded;
}