public class StrBuff {
    public static void main(String[] args) {
        String str = "Java";
        // StringBuffer sbuff = new StringBuffer(str);
        StringBuffer sbuff = new StringBuffer(5);
        // sbuff.ensureCapacity(10);
        sbuff.append("Java_World");
        // System.out.println(sbuff.hashCode());
        // sbuff.append("_World");
        // System.out.println(sbuff.hashCode());
        
        // System.out.println(sbuff);
        
        // sbuff.insert(4, "_World");
        // sbuff.replace(0, 4, "Hello");
        // sbuff.delete(0, 5);
        // sbuff.reverse();
        System.out.println(sbuff.capacity());
        
        System.out.println(sbuff);
    
    }
}

/*
StringBuffer class is used to create mutable string objects.
Thread Safe (multiple thread can't access it simultaneously)

default capacity: 16

append(String s)
insert(int offset, String s)
replace(int startindex, int endindex, String s)
delete(int startindex, int endindex)
reverse()
capacity() - new capacity will be allocated to the string acc. to ((oldCapacity*2) + 2)
ensureCapacity(int minimumCapacity)

*/