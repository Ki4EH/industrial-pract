class figure {
    private:
        float x1, x2, x3, x4;
        float y1, y2, y3, y4;
        float S;
        float P;
        float a, b, c, d, d1, d2;
        double distance(double x1, double y1, double x2, double y2);
        double angleBetweenVectors(double x1, double x2, double y1, double y2);
    public:
        figure(float _x1 = 0, float _x2 = 0, float _x3 = 0, float _x4 = 0, float _y1 = 0, float _y2 = 0, float _y3 = 0, float _y4 = 0);
        void show();
        bool is_prug();
        bool is_square();
        bool is_romb();
        bool is_in_circle();
        bool is_out_circle();
};