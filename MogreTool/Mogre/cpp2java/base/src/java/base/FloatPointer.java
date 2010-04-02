package base;

public class FloatPointer extends NumberPointer<Float> {
	
	public FloatPointer(InstancePointer pInstance) {
		super(pInstance);
	}

	private native void _dispose(long pInstance);

	private native float _get(long pInstance);

	private native long _next(long pInstance);

	private native void _set(long pInstance, float value);

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
		if (obj instanceof FloatPointer) {
			return this._get(pInstance.value) == ((FloatPointer) obj)._get(pInstance.value);			
		}
		return super.equals(obj);
	}
	@Override
	public float floatValue() {
		return _get(pInstance.value);
	}
	public Float get()
	{
		return _get(pInstance.value);
	}
	@Override
	public int hashCode() {
		return Float.floatToIntBits(_get(pInstance.value));
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
	public FloatPointer next() {
		long ptr = _next(pInstance.value);
		if(ptr==0)return null;		
		return new FloatPointer(new InstancePointer(ptr));
	}

	public void set(Float value) {
		_set(pInstance.value, value);
	}

	@Override
	public String toString() {
		return Float.toString(get());
	}
}
