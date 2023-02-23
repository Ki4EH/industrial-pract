class circle {
    double a, b, c;
    private:
        float radius;
        float x_center;
        float y_center;
    public:
        circle(float r = 0, float x = 0, float y = 0);
        double set_circle (float r, float x, float y);
        float square();
        double square_tr(double a, double b, double c);
        bool triangle_around (float a, float b, float c);
        bool triangle_in (float a, float b, float c);
        bool check_circle (float r, float x_cntr, float y_cntr);
};