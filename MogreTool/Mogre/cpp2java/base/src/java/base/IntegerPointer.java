package base;

public class IntegerPointer extends NumberPointer<Integer> {

	public IntegerPointer(InstancePointer pInstance) {
		super(pInstance);
	}

	private native void _dispose(long pInstance);

	private native int _get(long pInstance);	
	
	private native long _next(long pInstance);

	private native void _set(long pInstance, int value);

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
		if (obj instanceof IntegerPointer) {
			return this._get(pInstance.value) == ((IntegerPointer) obj)._get(pInstance.value);			
		}
		return super.equals(obj);
	}
	
	@Override
	public float floatValue() {
		return _get(pInstance.value);
	}
	public Integer get()
	{
		return _get(pInstance.value);
	}
	@Override
	public int hashCode() {
		return _get(pInstance.value);
	}

	@Override
	public int intValue() {		
		return _get(pInstance.value);
	}

	@Override
	public long longValue() {		
		return _get(pInstance.value);
	}

	@Override
	public IntegerPointer next() {
		long ptr = _next(pInstance.value);
		if(ptr==0)return null;		
		return new IntegerPointer(new InstancePointer(ptr));
	}
	
	public void set(Integer value) {
		_set(pInstance.value, value);
	}

	@Override
	public String toString() {
		return Integer.toString(_get(pInstance.value));
	}
}
