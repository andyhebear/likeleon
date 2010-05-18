package base;

public class LongPointer extends NumberPointer<Long> {
	
	public LongPointer(InstancePointer pInstance) {
		super(pInstance);
	}

	private native void _dispose(long pInstance);

	private native long _get(long pInstance);

	private native long _next(long pInstance);

	private native void _set(long pInstance, long value);

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
		if (obj instanceof LongPointer) {
			return this._get(pInstance.value) == ((LongPointer) obj)._get(pInstance.value);			
		}
		return super.equals(obj);
	}
	@Override
	public float floatValue() {
		return (float) _get(pInstance.value);
	}
	public Long get()
	{
		return _get(pInstance.value);
	}
	@Override
	public int hashCode() {
		long value = _get(pInstance.value);
		return (int)(value ^ (value >>> 32));
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
	public LongPointer next() {
		long ptr = _next(pInstance.value);
		if(ptr==0)return null;		
		return new LongPointer(new InstancePointer(ptr));
	}
	
	public void set(Long value)	{
		_set(pInstance.value, value);
	}

	@Override
	public String toString() {
		return Long.toString(get());
	}
}
