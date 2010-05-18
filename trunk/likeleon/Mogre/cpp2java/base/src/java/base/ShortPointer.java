package base;

public class ShortPointer extends NumberPointer<Short> {
	
	public ShortPointer(InstancePointer pInstance) {
		super(pInstance);
	}

	private native void _dispose(long pInstance);

	private native short _get(long pInstance);

	private native long _next(long pInstance);

	private native void _set(long pInstance, short value);

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
		if (obj instanceof ShortPointer) {
			return this._get(pInstance.value) == ((ShortPointer) obj)._get(pInstance.value);			
		}
		return super.equals(obj);
	}
	@Override
	public float floatValue() {
		return (float) _get(pInstance.value);
	}
	public Short get()
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
	public ShortPointer next() {
		long ptr = _next(pInstance.value);
		if(ptr==0)return null;		
		return new ShortPointer(new InstancePointer(ptr));
	}
	
	public void set(Short value)
	{
		_set(pInstance.value, value);
	}

	@Override
	public String toString() {
		return Short.toString(get());
	}
}
