package base;

public class CharPointer extends NumberPointer<Character> {
	
	public CharPointer(InstancePointer pInstance) {
		super(pInstance);
	}

	private native void _dispose(long pInstance);

	private native char _get(long pInstance);

	private native long _next(long pInstance);

	private native void _set(long pInstance, char value);

	@Override
	public void dispose() {
		if(this.createdByLibrary)
			throw new RuntimeException("Instance created by the library! It's not allowed to dispose it.");
		_dispose(pInstance.value);		
	}
	@Override
	public double doubleValue() {
		return _get(pInstance.value);
	}
	@Override
	public boolean equals(Object obj) {
		if (obj instanceof CharPointer) {
			return this._get(pInstance.value) == ((CharPointer) obj)._get(pInstance.value);			
		}
		return super.equals(obj);
	}
	@Override
	public float floatValue() {
		return (float) _get(pInstance.value);
	}
	public Character get()
	{
		return _get(pInstance.value);
	}
	@Override
	public int hashCode() {
		return intValue();
	}

	@Override
	public int intValue() {
		return (int) _get(pInstance.value);
	}

	@Override
	public long longValue() {
		return (long) _get(pInstance.value);
	}

	@Override
	public CharPointer next() {
		long ptr = _next(pInstance.value);
		if(ptr==0)return null;		
		return new CharPointer(new InstancePointer(ptr));
	}
	
	public void set(Character value) {
		_set(pInstance.value, value);
	}

	@Override
	public String toString() {
		return Character.toString(get());
	}
}
