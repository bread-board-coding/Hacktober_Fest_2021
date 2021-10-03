

class Node{
    private int val;
	private Node next;
	public Node(){
		val=0;
		next=null;}
	public Node(int x){
			val=x;
			next=null;
		}
	public void setNext(Node n) {
		next=n;
	}
	public void setData(int x) {
		val=x;
	}
	public Node getNext() {
		return next;
	}
	public int getData() {
		return val;
	}
	
	
}
class ll{
	public static void main(String[] args) {
    	Linkedlists l=new Linkedlists();
    	l.insertAtLast(2);
    	l.insertAtStart(0);
    	l.deleteAtPos(2);
    	
    	
    }
}
public class Linkedlists {
	private Node head;
	private int size;
	public Linkedlists(){
    	head=null;
    	size=0;
    	
    }
	boolean isEmpty() {
		return size==0;
	}
	public int getListSize(){return size;}
	void print(Node n) {
		if(isEmpty()) {System.out.print("list is empty");return;}
		
		while(n!=null) {
			System.out.print(n.getData()+"->");
			n=n.getNext();
			
			
		}
	}
	public void insertAtStart(int val) {
		Node n=new Node(val);
		n.setNext(head);		
		size++;
		
	}
	public void insertAtLast(int x) {
		Node n=new Node(x);
		Node temp=head;
		if(temp==null) head=n;
		else {
		while(temp.getNext()!=null) {
			temp=temp.getNext();
		}
		temp.setNext(n);}
	size++;
	}
	
    public  void insertAtPos(int pos,int val){
    	if(pos==0) {
    		insertAtStart(val);
    		
    	}else if(pos==size-1) {insertAtLast(val);}
    	else if(pos>0 && pos<size) {
    		Node n=new Node(val);Node t=head;
    		for(int i=0;i<pos;i++) {
    			t=t.getNext();
    		}
    		n.setNext(t.getNext());
    		t.setNext(n);
    		size++;
    		
    	}else {
    		System.out.print("Insertion not possible at"+pos);
    	}
    }
    public void deleteAtStart(){
    	if(head==null) {
    		System.out.print("empty list");return ;
    	}
    	head=head.getNext();size--;
    }
    public void deleteAtLast() {
    	if(head==null) {
    		System.out.print("empty list");return ;
    	}else if(size==1) {
    		head=null;
    	} else {   
    	Node h=head; 
    	while(h.getNext().getNext()!=null) {h=h.getNext();}
    	h.setNext(null);}
    	size--;
    }
    public void deleteAtPos(int pos) {
    	if(pos==0) {
    		deleteAtStart();
    	}else if(pos==size-1) {
    		deleteAtLast();
    	}else if(pos>0 && pos<size) {
    		size--;
    		Node h=head;
    		for(int i=0;i<pos;i++) {
    			h=h.getNext();
    		}
    		h.setNext(h.getNext().getNext());
    		
    	}else System.out.print("deletion is not possible");
    }
    public Node getNodeAt(int idx) { Node h=head;
    	for(int i=0;i<idx;i++) {
    		h=h.getNext();
    	}
    	return h;
    }
    public void reverseDataIterator() {
    	int li=0;
    	int ri=size-1;
    	while(li<ri) {
    		Node left=getNodeAt(li);
    		Node right=getNodeAt(ri);
    		int temp=left.getData();
    		left.setData(right.getData());
    		right.setData(temp);
    		li++;
    		ri--;
    	}
    	
    }
    public void reverseDataPI() {
    	Node prev=null;
    	Node cur=head;
    	while(cur!=null) {
    		Node k=cur.getNext();
    		cur.setNext(prev);
    		prev=cur;
    		cur=k;
    		
    	}
    }
    
}
