public class LList {

  public LNode head;
  
  public LList() {
    head = null;
  }
  
  public void print_list(){
    LNode node = head;
    int i = 0;
    while (node != null) {
      i++;
      System.out.println(i + ": " + node.data);
      node = node.next;
    }
  }
    
  public static void main (String[] argv)
  {
    LList list = new LList();
    LNode a, b, c;
    a = new LNode(45);
    b = new LNode(89);
    c = new LNode(52);
    list.head = a;
    a.next = b;
    b.next = c;
    c.next = null;
    
    list.print_list();
  }

}
