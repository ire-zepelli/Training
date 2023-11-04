public class Circle {
    private double radius;

    public Circle() {
        this.radius = 0;
    }

    public void setSize(double size) {
        this.radius = size / 2;
    }

    public double getSize() {
        return this.radius * 2;
    }

    public double getDiameter() {
        return this.radius * 2;
    }

    public double getRadius() {
        return this.radius;
    }
}