<script>
// JavaScript 
class Point {
            constructor(val) {
                this.x = val;
                this.y = val;}}
    function doOverlap( l1,  r1,  l2,  r2) {
        if (l1.x == r1.x || l1.y == r1.y || l2.x == r2.x || l2.y == r2.y)
            return false;
        }

        // If one rectangle is on left side of other
        if (l1.x >= r2.x || l2.x >= r1.x) {
            return false;
        }
        // If one rectangle is above other
        if (r1.y >= l2.y || r2.y >= l1.y) {
         return false;
        }
        return true;
    }    
        var l1 = new Point(), r1 = new Point(), 
        l2 = new Point(), r2 = new Point();
        l1.x = 0;
        l1.y = 10;
        r1.x = 10;
        r1.y = 0;
        l2.x = 5;
        l2.y = 5;
        r2.x = 15;
        r2.y = 0;
        if (doOverlap(l1, r1, l2, r2)) {
            document.write("Rectangles Overlap");
        } else {
            document.write("Rectangles Don't Overlap");
        }
</script>
