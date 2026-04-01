package java1010;

public class Box {
	
	private int width;
	private int height;
	private int length;
	private int volume;
	
	public int getVolume() {
		return volume;
	}
	
	Box(int w, int l, int h) {
		width = w;
		length = l;
		height = h;
		volume = width * length * height;
	}

}
